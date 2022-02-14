
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef int gid_t ;
typedef int cred_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

int
FUNC_3(vnode_t *VAR_1, cred_t *VAR_2, gid_t VAR_3)
{

 if (FUNC_0(VAR_3, VAR_2))
  return (0);
 if (FUNC_2(VAR_1->v_mount, VAR_2) == 0)
  return (0);
 return (FUNC_1(VAR_2, VAR_0));
}
