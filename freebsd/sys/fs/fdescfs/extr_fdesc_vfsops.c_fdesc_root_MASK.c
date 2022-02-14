
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {struct vnode* f_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct mount*) ;
 int VAR_2 ;
 int FUNC_1 (struct vnode*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_3, int VAR_4, struct vnode **VAR_5)
{
 struct vnode *VAR_6;




 VAR_6 = FUNC_0(VAR_3)->f_root;
 FUNC_1(VAR_6, VAR_0 | VAR_1, VAR_2);
 *VAR_5 = VAR_6;
 return (0);
}
