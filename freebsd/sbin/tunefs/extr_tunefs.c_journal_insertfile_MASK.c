
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


union dinodep {TYPE_2__* dp2; TYPE_1__* dp1; } ;
typedef size_t ufs_lbn_t ;
typedef scalar_t__ ufs2_daddr_t ;
typedef int off_t ;
typedef int ino_t ;
struct TYPE_16__ {int d_error; } ;
struct TYPE_15__ {scalar_t__ fs_magic; int fs_bsize; } ;
struct TYPE_14__ {scalar_t__* di_db; int di_blocks; void* di_size; } ;
struct TYPE_13__ {scalar_t__* di_db; int di_blocks; void* di_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,void*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 TYPE_5__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_5__*,union dinodep*,int ) ;
 scalar_t__ FUNC_6 () ;
 size_t FUNC_7 (TYPE_3__*,void*) ;
 void* FUNC_8 (TYPE_3__*,size_t) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_3__*,int ,size_t) ;
 TYPE_3__ VAR_4 ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(ino_t VAR_5)
{
 union dinodep VAR_6;
 ufs2_daddr_t VAR_7;
 ufs2_daddr_t VAR_8;
 ufs_lbn_t VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_5(&VAR_3, &VAR_6, VAR_2) != 0) {
  FUNC_12("Failed to get root inode: %s", VAR_3.d_error);
  FUNC_10();
  return (-1);
 }
 VAR_8 = 0;
 VAR_10 = 0;
 VAR_7 = FUNC_6();
 if (VAR_7 <= 0)
  return (-1);






 if (VAR_4.fs_magic == VAR_1) {
  VAR_9 = FUNC_7(&VAR_4, VAR_6.dp1->di_size);
  VAR_11 = FUNC_0(&VAR_4, VAR_6.dp1->di_size);
  VAR_8 = VAR_6.dp1->di_db[VAR_9];
  VAR_10 = FUNC_11(&VAR_4, (off_t)VAR_6.dp1->di_size, VAR_9);
 } else {
  VAR_9 = FUNC_7(&VAR_4, VAR_6.dp2->di_size);
  VAR_11 = FUNC_0(&VAR_4, VAR_6.dp2->di_size);
  VAR_8 = VAR_6.dp2->di_db[VAR_9];
  VAR_10 = FUNC_11(&VAR_4, (off_t)VAR_6.dp2->di_size, VAR_9);
 }
 if (VAR_11 != 0) {
  if (FUNC_3(VAR_8, VAR_7, VAR_11, VAR_5) == -1)
   return (-1);
 } else {
  VAR_8 = 0;
  if (FUNC_4(VAR_7, 0, VAR_5) == -1)
   return (-1);
 }
 if (VAR_4.fs_magic == VAR_1) {
  VAR_6.dp1->di_blocks += (VAR_4.fs_bsize - VAR_10) / VAR_0;
  VAR_6.dp1->di_db[VAR_9] = VAR_7;
  VAR_6.dp1->di_size = FUNC_8(&VAR_4, VAR_9+1);
 } else {
  VAR_6.dp2->di_blocks += (VAR_4.fs_bsize - VAR_10) / VAR_0;
  VAR_6.dp2->di_db[VAR_9] = VAR_7;
  VAR_6.dp2->di_size = FUNC_8(&VAR_4, VAR_9+1);
 }
 if (FUNC_9(&VAR_3) < 0) {
  FUNC_12("Failed to write root inode: %s", VAR_3.d_error);
  return (-1);
 }
 if (FUNC_2(&VAR_3) < 0) {
  FUNC_12("Failed to write updated cg");
  FUNC_10();
  return (-1);
 }
 if (VAR_8) {
  if (FUNC_1(&VAR_3, VAR_8, VAR_10) < 0) {
   FUNC_12("Failed to write cg");
   return (-1);
  }
 }

 return (0);
}
