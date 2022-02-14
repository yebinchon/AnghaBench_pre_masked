
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * svc_ah_ops; } ;
struct TYPE_9__ {TYPE_1__ xp_auth; struct TYPE_9__* xp_p3; } ;
typedef TYPE_2__ SVCXPRT_EXT ;
typedef TYPE_2__ SVCXPRT ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_0 ;

SVCXPRT *
FUNC_3(void)
{
 SVCXPRT *VAR_1;
 SVCXPRT_EXT *VAR_2;

 VAR_1 = FUNC_0(sizeof(SVCXPRT));
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_1, 0, sizeof(SVCXPRT));
 VAR_2 = FUNC_0(sizeof(SVCXPRT_EXT));
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_1, sizeof(SVCXPRT));
  return (((void*)0));
 }
 FUNC_2(VAR_2, 0, sizeof(SVCXPRT_EXT));
 VAR_1->xp_p3 = VAR_2;
 VAR_2->xp_auth.svc_ah_ops = &VAR_0;

 return (VAR_1);
}
