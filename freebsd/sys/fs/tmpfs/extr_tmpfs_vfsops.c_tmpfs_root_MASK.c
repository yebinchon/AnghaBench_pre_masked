
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_vflag; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {int tm_root; } ;


 TYPE_1__* FUNC_0 (struct mount*) ;
 int VAR_0 ;
 int FUNC_1 (struct mount*,int ,int,struct vnode**) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_1, int VAR_2, struct vnode **VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, FUNC_0(VAR_1)->tm_root, VAR_2, VAR_3);
 if (VAR_4 == 0)
  (*VAR_3)->v_vflag |= VAR_0;
 return (VAR_4);
}
