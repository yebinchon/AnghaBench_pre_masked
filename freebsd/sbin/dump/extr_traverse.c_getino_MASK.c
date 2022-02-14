
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
struct ufs2_dinode {int di_mode; } ;
struct ufs1_dinode {int di_mode; } ;
typedef scalar_t__ ino_t ;
typedef int * caddr_t ;
struct TYPE_5__ {scalar_t__ fs_magic; scalar_t__ fs_bsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 TYPE_1__* VAR_3 ;

union dinode *
FUNC_6(ino_t VAR_4, int *VAR_5)
{
 static ino_t VAR_6, VAR_7;
 static caddr_t VAR_8;
 struct ufs1_dinode *VAR_9;
 struct ufs2_dinode *VAR_10;

 if (VAR_8 == ((void*)0) && (VAR_8 = FUNC_4(VAR_3->fs_bsize)) == ((void*)0))
  FUNC_5("cannot allocate inode memory.\n");
 VAR_2 = VAR_4;
 if (VAR_4 >= VAR_6 && VAR_4 < VAR_7)
  goto gotit;
 FUNC_1(FUNC_2(VAR_3, FUNC_3(VAR_3, VAR_4)), VAR_8,
     (int)VAR_3->fs_bsize);
 VAR_6 = VAR_4 - (VAR_4 % FUNC_0(VAR_3));
 VAR_7 = VAR_6 + FUNC_0(VAR_3);
gotit:
 if (VAR_3->fs_magic == VAR_0) {
  VAR_9 = &((struct ufs1_dinode *)VAR_8)[VAR_4 - VAR_6];
  *VAR_5 = (VAR_9->di_mode & VAR_1);
  return ((union dinode *)VAR_9);
 }
 VAR_10 = &((struct ufs2_dinode *)VAR_8)[VAR_4 - VAR_6];
 *VAR_5 = (VAR_10->di_mode & VAR_1);
 return ((union dinode *)VAR_10);
}
