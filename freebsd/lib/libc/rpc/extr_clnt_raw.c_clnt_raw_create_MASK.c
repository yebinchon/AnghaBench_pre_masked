
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int32_t ;
struct TYPE_5__ {void* cb_vers; void* cb_prog; int cb_rpcvers; } ;
struct rpc_msg {TYPE_1__ rm_call; int rm_direction; } ;
struct TYPE_6__ {char* mashl_callmsg; } ;
struct TYPE_7__ {int cl_auth; int cl_ops; } ;
struct clntraw_private {char* _raw_buf; int mcnt; TYPE_2__ u; TYPE_3__ client_object; int xdr_stream; } ;
typedef scalar_t__ rpcvers_t ;
typedef scalar_t__ rpcprog_t ;
typedef int XDR ;
typedef TYPE_3__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 char* VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int VAR_7 ;
 struct clntraw_private* VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,struct rpc_msg*) ;
 int FUNC_9 (int *,char*,int,int ) ;

CLIENT *
FUNC_10(rpcprog_t VAR_9, rpcvers_t VAR_10)
{
 struct clntraw_private *VAR_11;
 struct rpc_msg VAR_12;
 XDR *VAR_13;
 CLIENT *VAR_14;

 FUNC_5(&VAR_7);
 if ((VAR_11 = VAR_8) == ((void*)0)) {
  VAR_11 = (struct clntraw_private *)FUNC_3(1, sizeof (*VAR_11));
  if (VAR_11 == ((void*)0)) {
   FUNC_6(&VAR_7);
   return ((void*)0);
  }
  if (VAR_6 == ((void*)0))
   VAR_6 =
       (char *)FUNC_3(VAR_3, sizeof (char));
  VAR_11->_raw_buf = VAR_6;
  VAR_8 = VAR_11;
 }
 VAR_13 = &VAR_11->xdr_stream;
 VAR_14 = &VAR_11->client_object;




 VAR_12.rm_direction = VAR_0;
 VAR_12.rm_call.cb_rpcvers = VAR_2;

 VAR_12.rm_call.cb_prog = (u_int32_t)VAR_9;
 VAR_12.rm_call.cb_vers = (u_int32_t)VAR_10;
 FUNC_9(VAR_13, VAR_11->u.mashl_callmsg, VAR_1, VAR_4);
 if (! FUNC_8(VAR_13, &VAR_12))
  FUNC_7("clntraw_create - Fatal header serialization error.");
 VAR_11->mcnt = FUNC_1(VAR_13);
 FUNC_0(VAR_13);




 FUNC_9(VAR_13, VAR_11->_raw_buf, VAR_3, VAR_5);




 VAR_14->cl_ops = FUNC_4();
 VAR_14->cl_auth = FUNC_2();
 FUNC_6(&VAR_7);
 return (VAR_14);
}
