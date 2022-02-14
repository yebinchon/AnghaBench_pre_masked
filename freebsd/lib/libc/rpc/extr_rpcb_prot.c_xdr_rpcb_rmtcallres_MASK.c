
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpcb_rmtcallres {int dummy; } ;
struct TYPE_2__ {int results_val; int results_len; } ;
struct r_rpcb_rmtcallres {TYPE_1__ results; int (* xdr_res ) (int *,int ) ;int addr; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_2, struct rpcb_rmtcallres *VAR_3)
{
 bool_t VAR_4;
 struct r_rpcb_rmtcallres *VAR_5 = (struct r_rpcb_rmtcallres *)(void *)VAR_3;

 if (!FUNC_1(VAR_2, &VAR_5->addr, VAR_1)) {
  return (VAR_0);
 }
 if (!FUNC_2(VAR_2, &VAR_5->results.results_len)) {
  return (VAR_0);
 }
 VAR_4 = (*(VAR_5->xdr_res))(VAR_2, VAR_5->results.results_val);
 return (VAR_4);
}
