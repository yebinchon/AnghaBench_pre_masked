
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsops {int dummy; } ;
struct mount {scalar_t__ mnt_tmpfreevnodelistsize; struct vfsops* mnt_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mount* FUNC_0 (int *) ;
 struct mount* FUNC_1 (struct mount*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct mount*,int) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct mount*) ;

__attribute__((used)) static void
FUNC_7(struct vfsops *VAR_5)
{
 struct mount *VAR_6, *VAR_7;
 bool VAR_8;

 FUNC_2(&VAR_4);
 for (VAR_6 = FUNC_0(&VAR_3); VAR_6 != ((void*)0); VAR_6 = VAR_7) {
  VAR_8 = 0;
  if (VAR_5 != ((void*)0) && VAR_6->mnt_op != VAR_5)
   goto next;
  if (VAR_6->mnt_tmpfreevnodelistsize == 0)
   goto next;
  if (FUNC_4(VAR_6, VAR_1 | VAR_0) == 0) {
   FUNC_6(VAR_6);
   VAR_8 = 1;
   FUNC_2(&VAR_4);
  }
next:
  VAR_7 = FUNC_1(VAR_6, VAR_2);
  if (VAR_8)
   FUNC_5(VAR_6);
 }
 FUNC_3(&VAR_4);
}
