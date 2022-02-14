
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
typedef int ufs2_daddr_t ;
struct ufs2_dinode {int dummy; } ;
struct ufs1_dinode {int dummy; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {scalar_t__ fs_magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,long) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;

union dinode *
FUNC_4(ino_t VAR_12)
{
 long VAR_13;
 ufs2_daddr_t VAR_14;
 union dinode *VAR_15;
 static caddr_t VAR_16;

 if (VAR_12 != VAR_6++ || VAR_12 > VAR_5)
  FUNC_1(1, "bad inode number %ju to nextinode",
      (uintmax_t)VAR_12);
 if (VAR_12 >= VAR_4) {
  VAR_9++;
  VAR_14 = FUNC_2(&VAR_11, FUNC_3(&VAR_11, VAR_4));
  if (VAR_9 % VAR_10 == 0) {
   VAR_13 = VAR_8;
   VAR_4 += VAR_7;
  } else {
   VAR_13 = VAR_2;
   VAR_4 += VAR_1;
  }




  FUNC_0(VAR_14, VAR_3, VAR_13);
  VAR_16 = VAR_3;
 }
 VAR_15 = (union dinode *)VAR_16;
 if (VAR_11.fs_magic == VAR_0)
  VAR_16 += sizeof(struct ufs1_dinode);
 else
  VAR_16 += sizeof(struct ufs2_dinode);
 return (VAR_15);
}
