
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udphdr {int dummy; } ;
struct sock {int sk_callback_lock; } ;
struct sk_buff {int len; } ;
struct rpc_xprt {int transport_lock; } ;
struct rpc_task {int dummy; } ;
struct TYPE_2__ {int buflen; } ;
struct rpc_rqst {TYPE_1__ rq_private_buf; struct rpc_task* rq_task; } ;
typedef int _xid ;
typedef int __be32 ;


 int FUNC_0 (struct sock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int * FUNC_8 (struct sk_buff*,int,int,int *) ;
 struct sk_buff* FUNC_9 (struct sock*,int ,int,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct rpc_task*,int) ;
 int FUNC_13 (struct rpc_task*,int) ;
 struct rpc_xprt* FUNC_14 (struct sock*) ;
 struct rpc_rqst* FUNC_15 (struct rpc_xprt*,int ) ;

__attribute__((used)) static void FUNC_16(struct sock *VAR_2, int VAR_3)
{
 struct rpc_task *VAR_4;
 struct rpc_xprt *VAR_5;
 struct rpc_rqst *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 __be32 *VAR_12;

 FUNC_4(&VAR_2->sk_callback_lock);
 FUNC_2("RPC:       xs_udp_data_ready...\n");
 if (!(VAR_5 = FUNC_14(VAR_2)))
  goto out;

 if ((VAR_7 = FUNC_9(VAR_2, 0, 1, &VAR_8)) == ((void*)0))
  goto out;

 VAR_9 = VAR_7->len - sizeof(struct udphdr);
 if (VAR_9 < 4) {
  FUNC_2("RPC:       impossible RPC reply size %d!\n", VAR_9);
  goto dropit;
 }


 VAR_12 = FUNC_8(VAR_7, sizeof(struct udphdr),
    sizeof(VAR_11), &VAR_11);
 if (VAR_12 == ((void*)0))
  goto dropit;


 FUNC_10(&VAR_5->transport_lock);
 VAR_6 = FUNC_15(VAR_5, *VAR_12);
 if (!VAR_6)
  goto out_unlock;
 VAR_4 = VAR_6->rq_task;

 if ((VAR_10 = VAR_6->rq_private_buf.buflen) > VAR_9)
  VAR_10 = VAR_9;


 if (FUNC_1(&VAR_6->rq_private_buf, VAR_7)) {
  FUNC_0(VAR_2, VAR_1);
  goto out_unlock;
 }

 FUNC_0(VAR_2, VAR_0);


 FUNC_3(FUNC_6(VAR_7));

 FUNC_12(VAR_4, VAR_10);
 FUNC_13(VAR_4, VAR_10);

 out_unlock:
 FUNC_11(&VAR_5->transport_lock);
 dropit:
 FUNC_7(VAR_2, VAR_7);
 out:
 FUNC_5(&VAR_2->sk_callback_lock);
}
