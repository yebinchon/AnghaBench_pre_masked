
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {int null_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct vnode*) ;
 struct vnode* FUNC_1 (struct mount*,struct vnode*) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

__attribute__((used)) static void
FUNC_4(struct mount *VAR_1, struct vnode *VAR_2)
{
 struct vnode *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0(VAR_3)->null_flags |= VAR_0;
 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
}
