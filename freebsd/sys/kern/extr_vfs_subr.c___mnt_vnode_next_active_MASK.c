
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int mnt_listmtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vnode* FUNC_1 (struct vnode**,struct mount*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

struct vnode *
FUNC_4(struct vnode **VAR_1, struct mount *VAR_2)
{

 if (FUNC_3())
  FUNC_0(VAR_0);
 FUNC_2(&VAR_2->mnt_listmtx);
 return (FUNC_1(VAR_1, VAR_2));
}
