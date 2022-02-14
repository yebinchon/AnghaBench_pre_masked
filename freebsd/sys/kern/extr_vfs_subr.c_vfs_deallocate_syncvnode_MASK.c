
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {struct vnode* mnt_syncer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct vnode*) ;

void
FUNC_3(struct mount *VAR_1)
{
 struct vnode *VAR_2;

 FUNC_0(&VAR_0);
 VAR_2 = VAR_1->mnt_syncer;
 if (VAR_2 != ((void*)0))
  VAR_1->mnt_syncer = ((void*)0);
 FUNC_1(&VAR_0);
 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2);
}
