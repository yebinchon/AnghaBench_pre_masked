
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct rpcb_rmtcallargs {int dummy; } ;
struct TYPE_2__ {scalar_t__ args_len; int args_val; } ;
struct r_rpcb_rmtcallargs {TYPE_1__ args; int (* xdr_args ) (int *,int ) ;int proc; int vers; int prog; } ;
typedef int int32_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,scalar_t__*) ;

bool_t
FUNC_9(XDR *VAR_3, struct rpcb_rmtcallargs *VAR_4)
{
 struct r_rpcb_rmtcallargs *VAR_5 =
     (struct r_rpcb_rmtcallargs *)(void *)VAR_4;
 u_int VAR_6, VAR_7, VAR_8;
 int32_t *VAR_9;

 VAR_9 = FUNC_2(VAR_3, 3 * VAR_0);
 if (VAR_9 == ((void*)0)) {
  if (!FUNC_6(VAR_3, &VAR_5->prog)) {
   return (VAR_1);
  }
  if (!FUNC_7(VAR_3, &VAR_5->vers)) {
   return (VAR_1);
  }
  if (!FUNC_5(VAR_3, &VAR_5->proc)) {
   return (VAR_1);
  }
 } else {
  FUNC_0(VAR_9, VAR_5->prog);
  FUNC_0(VAR_9, VAR_5->vers);
  FUNC_0(VAR_9, VAR_5->proc);
 }




 VAR_6 = FUNC_1(VAR_3);
 if (! FUNC_8(VAR_3, &(VAR_5->args.args_len))) {
  return (VAR_1);
 }
 VAR_7 = FUNC_1(VAR_3);
 if (! (*VAR_5->xdr_args)(VAR_3, VAR_5->args.args_val)) {
  return (VAR_1);
 }
 VAR_8 = FUNC_1(VAR_3);
 VAR_5->args.args_len = (u_int)((u_long)VAR_8 - (u_long)VAR_7);
 FUNC_3(VAR_3, VAR_6);
 if (! FUNC_8(VAR_3, &(VAR_5->args.args_len))) {
  return (VAR_1);
 }
 FUNC_3(VAR_3, VAR_8);
 return (VAR_2);
}
