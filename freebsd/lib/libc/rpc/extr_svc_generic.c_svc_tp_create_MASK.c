
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int nc_netid; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,scalar_t__,struct netconfig*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,void (*) (struct svc_req*,int *),struct netconfig const*) ;
 int * FUNC_3 (int ,struct netconfig const*,int *,int ,int ) ;
 int FUNC_4 (char*,unsigned int,unsigned int,...) ;

SVCXPRT *
FUNC_5(void (*VAR_2)(struct svc_req *, SVCXPRT *),
    rpcprog_t VAR_3, rpcvers_t VAR_4, const struct netconfig *VAR_5)
{
 SVCXPRT *VAR_6;

 if (VAR_5 == ((void*)0)) {
  FUNC_4(
 "svc_tp_create: invalid netconfig structure for prog %u vers %u",
    (unsigned)VAR_3, (unsigned)VAR_4);
  return (((void*)0));
 }
 VAR_6 = FUNC_3(VAR_1, VAR_5, ((void*)0), 0, 0);
 if (VAR_6 == ((void*)0)) {
  return (((void*)0));
 }

 (void) FUNC_1(VAR_3, VAR_4, (struct netconfig *) VAR_5);
 if (FUNC_2(VAR_6, VAR_3, VAR_4, VAR_2, VAR_5) == VAR_0) {
  FUNC_4(
  "svc_tp_create: Could not register prog %u vers %u on %s",
    (unsigned)VAR_3, (unsigned)VAR_4,
    VAR_5->nc_netid);
  FUNC_0(VAR_6);
  return (((void*)0));
 }
 return (VAR_6);
}
