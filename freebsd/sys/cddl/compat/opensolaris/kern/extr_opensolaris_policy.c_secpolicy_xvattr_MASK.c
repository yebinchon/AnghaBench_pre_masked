
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xvattr_t ;
typedef int vtype_t ;
struct TYPE_3__ {int v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef int uid_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int
FUNC_2(vnode_t *VAR_1, xvattr_t *VAR_2, uid_t VAR_3, cred_t *VAR_4,
    vtype_t VAR_5)
{

 if (FUNC_1(VAR_1->v_mount, VAR_4) == 0)
  return (0);
 return (FUNC_0(VAR_4, VAR_0));
}
