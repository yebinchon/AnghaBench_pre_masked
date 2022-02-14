
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_af_ops; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*) ;} ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct request_sock*,struct sock*) ;
 int FUNC_2 (struct request_sock*) ;
 struct sock* FUNC_3 (struct sock*,struct sk_buff*,struct request_sock*,struct dst_entry*) ;

__attribute__((used)) static inline struct sock *FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1,
        struct request_sock *VAR_2,
        struct dst_entry *VAR_3)
{
 struct inet_connection_sock *VAR_4 = FUNC_0(VAR_0);
 struct sock *VAR_5;

 VAR_5 = VAR_4->icsk_af_ops->syn_recv_sock(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_1(VAR_0, VAR_2, VAR_5);
 else
  FUNC_2(VAR_2);

 return VAR_5;
}
