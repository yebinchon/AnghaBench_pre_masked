
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int ack_seq; int window; } ;
struct sk_buff {int len; int data_len; } ;
struct net_lro_desc {int ip_tot_len; int tcp_next_seq; int mss; int data_csum; int tcp_rcv_tsecr; scalar_t__ tcp_saw_tstamp; int tcp_ack; int tcp_window; int pkt_aggr_cnt; struct sk_buff* parent; } ;
struct iphdr {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct iphdr*,struct tcphdr*,int) ;

__attribute__((used)) static void FUNC_2(struct net_lro_desc *VAR_0, struct iphdr *VAR_1,
      struct tcphdr *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4 = VAR_0->parent;
 __be32 *VAR_5;

 VAR_0->pkt_aggr_cnt++;
 VAR_0->ip_tot_len += VAR_3;
 VAR_0->tcp_next_seq += VAR_3;
 VAR_0->tcp_window = VAR_2->window;
 VAR_0->tcp_ack = VAR_2->ack_seq;


 if (VAR_0->tcp_saw_tstamp) {
  VAR_5 = (__be32 *) (VAR_2 + 1);
  VAR_0->tcp_rcv_tsecr = *(VAR_5 + 2);
 }

 VAR_0->data_csum = FUNC_0(VAR_0->data_csum,
          FUNC_1(VAR_1, VAR_2,
              VAR_3),
          VAR_4->len);

 VAR_4->len += VAR_3;
 VAR_4->data_len += VAR_3;
 if (VAR_3 > VAR_0->mss)
  VAR_0->mss = VAR_3;
}
