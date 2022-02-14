
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


union dinodep {TYPE_2__* dp2; TYPE_1__* dp1; } ;
typedef scalar_t__ off_t ;
typedef int ino_t ;
struct TYPE_11__ {int d_error; } ;
struct TYPE_10__ {scalar_t__ fs_magic; } ;
struct TYPE_9__ {scalar_t__* di_db; scalar_t__ di_size; } ;
struct TYPE_8__ {scalar_t__* di_db; scalar_t__ di_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_6__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_6__*,union dinodep*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static ino_t
FUNC_6(void)
{
 union dinodep VAR_5;
 ino_t VAR_6;
 int VAR_7;

 if (FUNC_1(&VAR_3, &VAR_5, VAR_2) != 0) {
  FUNC_4("Failed to get root inode: %s", VAR_3.d_error);
  return (-1);
 }
 if (VAR_4.fs_magic == VAR_0) {
  if ((off_t)VAR_5.dp1->di_size >= FUNC_2(&VAR_4, VAR_1)) {
   FUNC_5("UFS_ROOTINO extends beyond direct blocks.");
   return (-1);
  }
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_5.dp1->di_db[VAR_7] == 0)
    break;
   if ((VAR_6 = FUNC_0(VAR_5.dp1->di_db[VAR_7],
       FUNC_3(&VAR_4, (off_t)VAR_5.dp1->di_size, VAR_7))) != 0)
    return (VAR_6);
  }
 } else {
  if ((off_t)VAR_5.dp2->di_size >= FUNC_2(&VAR_4, VAR_1)) {
   FUNC_5("UFS_ROOTINO extends beyond direct blocks.");
   return (-1);
  }
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   if (VAR_5.dp2->di_db[VAR_7] == 0)
    break;
   if ((VAR_6 = FUNC_0(VAR_5.dp2->di_db[VAR_7],
       FUNC_3(&VAR_4, (off_t)VAR_5.dp2->di_size, VAR_7))) != 0)
    return (VAR_6);
  }
 }

 return (0);
}
