
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct autofs_mount {int am_root; } ;


 struct autofs_mount* FUNC_0 (struct mount*) ;
 int FUNC_1 (int ,struct mount*,int,struct vnode**) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_0, int VAR_1, struct vnode **VAR_2)
{
 struct autofs_mount *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0);

 VAR_4 = FUNC_1(VAR_3->am_root, VAR_0, VAR_1, VAR_2);

 return (VAR_4);
}
