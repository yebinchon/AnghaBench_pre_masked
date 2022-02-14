
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x_op; } ;
struct svc_raw_private {TYPE_1__ xdr_stream; } ;
struct rpc_msg {int dummy; } ;
typedef int bool_t ;
typedef TYPE_1__ XDR ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct svc_raw_private* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,struct rpc_msg*) ;

__attribute__((used)) static bool_t
FUNC_4(SVCXPRT *VAR_5, struct rpc_msg *VAR_6)
{
 struct svc_raw_private *VAR_7;
 XDR *VAR_8;

 FUNC_1(&VAR_4);
 VAR_7 = VAR_3;
 if (VAR_7 == ((void*)0)) {
  FUNC_2(&VAR_4);
  return (VAR_0);
 }
 FUNC_2(&VAR_4);

 VAR_8 = &VAR_7->xdr_stream;
 VAR_8->x_op = VAR_2;
 (void) FUNC_0(VAR_8, 0);
 if (! FUNC_3(VAR_8, VAR_6)) {
  return (VAR_0);
 }
 return (VAR_1);
}
