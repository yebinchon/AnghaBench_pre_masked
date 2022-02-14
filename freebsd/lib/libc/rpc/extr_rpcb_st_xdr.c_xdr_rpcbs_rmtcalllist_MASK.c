
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xdrproc_t ;
struct rpcbs_rmtcalllist {int dummy; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef scalar_t__ rpcproc_t ;
struct TYPE_12__ {int success; int failure; int indirect; int netid; scalar_t__ proc; scalar_t__ vers; scalar_t__ prog; struct rpcbs_rmtcalllist* next; } ;
typedef TYPE_1__ rpcbs_rmtcalllist ;
typedef int int32_t ;
typedef int bool_t ;
struct TYPE_13__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int*) ;
 int FUNC_6 (TYPE_2__*,char**,int,int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__*) ;
 int FUNC_8 (TYPE_2__*,scalar_t__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__*) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;

bool_t
FUNC_11(XDR *VAR_6, rpcbs_rmtcalllist *VAR_7)
{
 int32_t *VAR_8;
 struct rpcbs_rmtcalllist **VAR_9;

 if (VAR_6->x_op == VAR_5) {
 VAR_8 = FUNC_4(VAR_6, 6 * VAR_0);
 if (VAR_8 == ((void*)0)) {
  if (!FUNC_8(VAR_6, &VAR_7->prog)) {
   return (VAR_1);
  }
  if (!FUNC_9(VAR_6, &VAR_7->vers)) {
   return (VAR_1);
  }
  if (!FUNC_7(VAR_6, &VAR_7->proc)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_6, &VAR_7->success)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_6, &VAR_7->failure)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_6, &VAR_7->indirect)) {
   return (VAR_1);
  }
 } else {
  FUNC_3(VAR_8, VAR_7->prog);
  FUNC_3(VAR_8, VAR_7->vers);
  FUNC_3(VAR_8, VAR_7->proc);
  FUNC_2(VAR_8, VAR_7->success);
  FUNC_2(VAR_8, VAR_7->failure);
  FUNC_2(VAR_8, VAR_7->indirect);
 }
 if (!FUNC_10(VAR_6, &VAR_7->netid, VAR_2)) {
  return (VAR_1);
 }
 VAR_9 = &VAR_7->next;
 if (!FUNC_6(VAR_6, (char **) VAR_9,
   sizeof (rpcbs_rmtcalllist),
   (xdrproc_t)FUNC_11)) {
  return (VAR_1);
 }
 return (VAR_3);
 } else if (VAR_6->x_op == VAR_4) {
 VAR_8 = FUNC_4(VAR_6, 6 * VAR_0);
 if (VAR_8 == ((void*)0)) {
  if (!FUNC_8(VAR_6, &VAR_7->prog)) {
   return (VAR_1);
  }
  if (!FUNC_9(VAR_6, &VAR_7->vers)) {
   return (VAR_1);
  }
  if (!FUNC_7(VAR_6, &VAR_7->proc)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_6, &VAR_7->success)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_6, &VAR_7->failure)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_6, &VAR_7->indirect)) {
   return (VAR_1);
  }
 } else {
  VAR_7->prog = (rpcprog_t)FUNC_1(VAR_8);
  VAR_7->vers = (rpcvers_t)FUNC_1(VAR_8);
  VAR_7->proc = (rpcproc_t)FUNC_1(VAR_8);
  VAR_7->success = (int)FUNC_0(VAR_8);
  VAR_7->failure = (int)FUNC_0(VAR_8);
  VAR_7->indirect = (int)FUNC_0(VAR_8);
 }
 if (!FUNC_10(VAR_6, &VAR_7->netid, VAR_2)) {
  return (VAR_1);
 }
 if (!FUNC_6(VAR_6, (char **) VAR_9,
   sizeof (rpcbs_rmtcalllist),
   (xdrproc_t)FUNC_11)) {
  return (VAR_1);
 }
 return (VAR_3);
 }
 if (!FUNC_8(VAR_6, &VAR_7->prog)) {
  return (VAR_1);
 }
 if (!FUNC_9(VAR_6, &VAR_7->vers)) {
  return (VAR_1);
 }
 if (!FUNC_7(VAR_6, &VAR_7->proc)) {
  return (VAR_1);
 }
 if (!FUNC_5(VAR_6, &VAR_7->success)) {
  return (VAR_1);
 }
 if (!FUNC_5(VAR_6, &VAR_7->failure)) {
  return (VAR_1);
 }
 if (!FUNC_5(VAR_6, &VAR_7->indirect)) {
  return (VAR_1);
 }
 if (!FUNC_10(VAR_6, &VAR_7->netid, VAR_2)) {
  return (VAR_1);
 }
 if (!FUNC_6(VAR_6, (char **) VAR_9,
   sizeof (rpcbs_rmtcalllist),
   (xdrproc_t)FUNC_11)) {
  return (VAR_1);
 }
 return (VAR_3);
}
