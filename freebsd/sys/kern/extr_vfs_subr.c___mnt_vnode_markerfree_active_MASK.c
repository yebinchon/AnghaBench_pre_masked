
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int mnt_listmtx; int mnt_activevnodelist; } ;


 int FUNC_0 (int *,struct vnode*,int ) ;
 int FUNC_1 (struct vnode**,struct mount*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void
FUNC_4(struct vnode **VAR_1, struct mount *VAR_2)
{

 if (*VAR_1 == ((void*)0))
  return;

 FUNC_2(&VAR_2->mnt_listmtx);
 FUNC_0(&VAR_2->mnt_activevnodelist, *VAR_1, VAR_0);
 FUNC_3(&VAR_2->mnt_listmtx);
 FUNC_1(VAR_1, VAR_2);
}
