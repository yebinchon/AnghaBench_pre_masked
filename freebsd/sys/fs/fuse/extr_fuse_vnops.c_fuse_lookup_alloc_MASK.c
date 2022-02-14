
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_lookup_alloc_arg {int vtyp; int cnp; int nid; int feo; } ;


 int FUNC_0 (struct mount*,int ,int ,int *,struct vnode**,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct mount *VAR_0, void *VAR_1, int VAR_2, struct vnode **VAR_3)
{
 struct fuse_lookup_alloc_arg *VAR_4 = VAR_1;

 return FUNC_0(VAR_0, VAR_4->feo, VAR_4->nid, ((void*)0), VAR_3, VAR_4->cnp,
  VAR_4->vtyp);
}
