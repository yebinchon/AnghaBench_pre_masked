
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int ufs2_daddr_t ;
struct ufs2_dinode {int dummy; } ;
typedef scalar_t__ ino_t ;
struct TYPE_9__ {int * b_dinode2; int * b_dinode1; } ;
struct TYPE_11__ {TYPE_1__ b_un; int b_flags; } ;
struct TYPE_10__ {scalar_t__ fs_magic; int fs_bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*,struct ufs2_dinode*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct ufs2_dinode*) ;
 TYPE_3__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (union dinode*) ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__,union dinode*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_8 ;
 scalar_t__ VAR_9 ;

union dinode *
FUNC_12(ino_t VAR_10)
{
 ufs2_daddr_t VAR_11;
 union dinode *VAR_12;

 if (VAR_10 < VAR_4 || VAR_10 > VAR_5)
  FUNC_1(VAR_2, "bad inode number %ju to ginode",
      (uintmax_t)VAR_10);
 if (VAR_9 == 0 ||
     VAR_10 < VAR_9 || VAR_10 >= VAR_9 + FUNC_0(&VAR_8)) {
  VAR_11 = FUNC_5(&VAR_8, VAR_10);
  if (VAR_6 != ((void*)0))
   VAR_6->b_flags &= ~VAR_1;
  VAR_6 = FUNC_4(VAR_11, VAR_8.fs_bsize, VAR_0);
  VAR_9 = FUNC_11(VAR_10, FUNC_0(&VAR_8));
 }
 if (VAR_8.fs_magic == VAR_3)
  return ((union dinode *)
      &VAR_6->b_un.b_dinode1[VAR_10 % FUNC_0(&VAR_8)]);
 VAR_12 = (union dinode *)&VAR_6->b_un.b_dinode2[VAR_10 % FUNC_0(&VAR_8)];
 if (FUNC_3(&VAR_8, (struct ufs2_dinode *)VAR_12) != 0) {
  FUNC_9("INODE CHECK-HASH FAILED");
  FUNC_8(VAR_10, VAR_12);
  if (VAR_7 || FUNC_10("FIX") != 0) {
   if (VAR_7)
    FUNC_7(" (FIXED)\n");
   FUNC_2(&VAR_8,
       (struct ufs2_dinode *)VAR_12);
   FUNC_6(VAR_12);
  }
 }
 return (VAR_12);
}
