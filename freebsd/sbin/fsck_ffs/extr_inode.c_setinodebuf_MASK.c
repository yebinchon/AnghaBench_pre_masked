
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
typedef int ino_t ;
struct TYPE_6__ {int * b_buf; } ;
struct TYPE_8__ {TYPE_1__ b_un; } ;
struct TYPE_7__ {int fs_ipg; scalar_t__ fs_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 scalar_t__ VAR_15 ;

void
FUNC_4(ino_t VAR_16)
{

 if (VAR_16 % VAR_14.fs_ipg != 0)
  FUNC_2(VAR_1, "bad inode number %ju to setinodebuf",
      (uintmax_t)VAR_16);
 VAR_8 = VAR_16 + VAR_14.fs_ipg - 1;
 VAR_15 = 0;
 VAR_9 = VAR_16;
 VAR_7 = VAR_16;
 VAR_12 = 0;
 if (VAR_5.b_un.b_buf != ((void*)0))
  return;
 VAR_6 = FUNC_1(&VAR_14, VAR_3);
 VAR_4 = VAR_6 / ((VAR_14.fs_magic == VAR_2) ?
     sizeof(struct ufs1_dinode) : sizeof(struct ufs2_dinode));
 VAR_13 = VAR_14.fs_ipg / VAR_4;
 VAR_10 = VAR_14.fs_ipg % VAR_4;
 VAR_11 = VAR_10 * ((VAR_14.fs_magic == VAR_2) ?
     sizeof(struct ufs1_dinode) : sizeof(struct ufs2_dinode));
 if (VAR_10 != 0) {
  VAR_13++;
 } else {
  VAR_10 = VAR_4;
  VAR_11 = VAR_6;
 }
 FUNC_3(&VAR_5, VAR_0);
 if ((VAR_5.b_un.b_buf = FUNC_0((unsigned)VAR_6)) == ((void*)0))
  FUNC_2(VAR_1, "cannot allocate space for inode buffer");
}
