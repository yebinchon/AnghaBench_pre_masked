
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
typedef int daddr_t ;
struct TYPE_4__ {TYPE_1__* de_pmp; } ;
struct TYPE_3__ {int pm_bpcluster; } ;


 TYPE_2__* FUNC_0 (struct vnode*) ;

__attribute__((used)) static int
FUNC_1(struct vnode *VAR_0, daddr_t VAR_1)
{

 return (FUNC_0(VAR_0)->de_pmp->pm_bpcluster);
}
