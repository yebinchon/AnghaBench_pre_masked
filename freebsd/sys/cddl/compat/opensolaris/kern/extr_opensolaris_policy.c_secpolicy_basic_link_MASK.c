
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int
FUNC_2(vnode_t *VAR_2, cred_t *VAR_3)
{

 if (!VAR_1)
  return (0);
 if (FUNC_1(VAR_2->v_mount, VAR_3) == 0)
  return (0);
 return (FUNC_0(VAR_3, VAR_0));
}
