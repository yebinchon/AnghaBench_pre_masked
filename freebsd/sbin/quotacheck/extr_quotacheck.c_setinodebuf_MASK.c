
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
typedef int ino_t ;
struct TYPE_3__ {int fs_ipg; scalar_t__ fs_magic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;

void
FUNC_3(ino_t VAR_13)
{

 if (VAR_13 % VAR_12.fs_ipg != 0)
  FUNC_1(1, "bad inode number %ju to setinodebuf", (uintmax_t)VAR_13);
 VAR_6 = VAR_13 + VAR_12.fs_ipg - 1;
 VAR_7 = VAR_13;
 VAR_5 = VAR_13;
 VAR_10 = 0;
 if (VAR_4 != ((void*)0))
  return;
 VAR_3 = FUNC_0(&VAR_12, VAR_1);
 VAR_2 = VAR_3 / ((VAR_12.fs_magic == VAR_0) ?
     sizeof(struct ufs1_dinode) : sizeof(struct ufs2_dinode));
 VAR_11 = VAR_12.fs_ipg / VAR_2;
 VAR_8 = VAR_12.fs_ipg % VAR_2;
 VAR_9 = VAR_8 * ((VAR_12.fs_magic == VAR_0) ?
     sizeof(struct ufs1_dinode) : sizeof(struct ufs2_dinode));
 if (VAR_8 != 0) {
  VAR_11++;
 } else {
  VAR_8 = VAR_2;
  VAR_9 = VAR_3;
 }
 if ((VAR_4 = FUNC_2((unsigned)VAR_3)) == ((void*)0))
  FUNC_1(1, "cannot allocate space for inode buffer");
}
