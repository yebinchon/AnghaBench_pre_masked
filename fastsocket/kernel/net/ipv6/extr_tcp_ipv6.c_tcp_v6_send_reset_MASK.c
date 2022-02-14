
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int doff; scalar_t__ fin; scalar_t__ syn; int seq; int ack_seq; scalar_t__ ack; scalar_t__ rst; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct tcphdr* FUNC_3 (struct sk_buff*) ;
 struct tcp_md5sig_key* FUNC_4 (struct sock*,int *) ;
 int FUNC_5 (struct sk_buff*,scalar_t__,scalar_t__,int ,int ,struct tcp_md5sig_key*,int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct tcphdr *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3 = 0, VAR_4 = 0;
 struct tcp_md5sig_key *VAR_5 = ((void*)0);

 if (VAR_2->rst)
  return;

 if (!FUNC_1(VAR_1))
  return;






 if (VAR_2->ack)
  VAR_3 = FUNC_2(VAR_2->ack_seq);
 else
  VAR_4 = FUNC_2(VAR_2->seq) + VAR_2->syn + VAR_2->fin + VAR_1->len -
     (VAR_2->doff << 2);

 FUNC_5(VAR_1, VAR_3, VAR_4, 0, 0, VAR_5, 1);
}
