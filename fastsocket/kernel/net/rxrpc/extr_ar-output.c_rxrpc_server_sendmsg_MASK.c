
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_sock {int dummy; } ;
struct rxrpc_call {scalar_t__ state; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;
typedef enum rxrpc_command { ____Placeholder_rxrpc_command } rxrpc_command ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (struct rxrpc_call*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;


 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 struct rxrpc_call* FUNC_5 (struct rxrpc_sock*,unsigned long) ;
 struct rxrpc_call* FUNC_6 (struct rxrpc_sock*,unsigned long) ;
 int FUNC_7 (struct rxrpc_call*) ;
 int FUNC_8 (struct rxrpc_call*,int ) ;
 int FUNC_9 (struct kiocb*,struct rxrpc_sock*,struct rxrpc_call*,struct msghdr*,size_t) ;
 int FUNC_10 (struct rxrpc_sock*,struct msghdr*,unsigned long*,int*,int *,int) ;

int FUNC_11(struct kiocb *VAR_8, struct rxrpc_sock *VAR_9,
    struct msghdr *VAR_10, size_t VAR_11)
{
 enum rxrpc_command VAR_12;
 struct rxrpc_call *VAR_13;
 unsigned long VAR_14 = 0;
 u32 VAR_15 = 0;
 int VAR_16;

 FUNC_3("");

 VAR_16 = FUNC_10(VAR_9, VAR_10, &VAR_14, &VAR_12, &VAR_15,
     1);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_12 == VAR_7) {
  VAR_13 = FUNC_5(VAR_9, VAR_14);
  if (FUNC_1(VAR_13))
   return FUNC_2(VAR_13);
  FUNC_7(VAR_13);
  return 0;
 }

 VAR_13 = FUNC_6(VAR_9, VAR_14);
 if (!VAR_13)
  return -VAR_0;
 if (VAR_13->state >= VAR_4) {
  VAR_16 = -VAR_2;
  goto out;
 }

 switch (VAR_12) {
 case 128:
  if (VAR_13->state != VAR_3 &&
      VAR_13->state != VAR_5 &&
      VAR_13->state != VAR_6) {

   VAR_16 = -VAR_1;
   break;
  }

  VAR_16 = FUNC_9(VAR_8, VAR_9, VAR_13, VAR_10, VAR_11);
  break;

 case 129:
  FUNC_8(VAR_13, VAR_15);
  break;
 default:
  FUNC_0();
 }

 out:
 FUNC_7(VAR_13);
 FUNC_4(" = %d", VAR_16);
 return VAR_16;
}
