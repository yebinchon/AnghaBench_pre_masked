
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef scalar_t__ uid_t ;
struct TYPE_8__ {scalar_t__ cr_uid; } ;
typedef TYPE_2__ cred_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;

int
FUNC_2(vnode_t *VAR_1, cred_t *VAR_2, uid_t VAR_3)
{

 if (VAR_3 == VAR_2->cr_uid)
  return (0);
 if (FUNC_1(VAR_1->v_mount, VAR_2) == 0)
  return (0);


 return (FUNC_0(VAR_2, VAR_0));
}
