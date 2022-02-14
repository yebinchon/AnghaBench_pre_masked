
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct rpc_xprt {scalar_t__ reestablish_timeout; } ;
struct TYPE_4__ {struct rpc_xprt* data; } ;
struct TYPE_5__ {int count; TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*,TYPE_2__*,int ) ;
 struct rpc_xprt* FUNC_4 (struct sock*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, int VAR_2)
{
 struct rpc_xprt *VAR_3;
 read_descriptor_t VAR_4;
 int VAR_5;

 FUNC_0("RPC:       xs_tcp_data_ready...\n");

 FUNC_1(&VAR_1->sk_callback_lock);
 if (!(VAR_3 = FUNC_4(VAR_1)))
  goto out;



 if (VAR_3->reestablish_timeout)
  VAR_3->reestablish_timeout = 0;


 VAR_4.arg.data = VAR_3;
 do {
  VAR_4.count = 65536;
  VAR_5 = FUNC_3(VAR_1, &VAR_4, VAR_0);
 } while (VAR_5 > 0);
out:
 FUNC_2(&VAR_1->sk_callback_lock);
}
