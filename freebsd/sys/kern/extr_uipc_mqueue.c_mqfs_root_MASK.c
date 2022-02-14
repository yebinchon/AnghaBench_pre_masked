
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mqfs_info {int mi_root; } ;
struct mount {int dummy; } ;


 struct mqfs_info* FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*,struct vnode**,int ) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_0, int VAR_1, struct vnode **VAR_2)
{
 struct mqfs_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3->mi_root);
 return (VAR_4);
}
