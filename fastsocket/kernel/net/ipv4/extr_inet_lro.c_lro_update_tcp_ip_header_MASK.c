
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcphdr {scalar_t__ check; int window; int ack_seq; } ;
struct net_lro_desc {int data_csum; scalar_t__ ip_tot_len; struct iphdr* iph; int tcp_rcv_tsecr; scalar_t__ tcp_saw_tstamp; int tcp_window; int tcp_ack; struct tcphdr* tcph; } ;
struct iphdr {int daddr; int saddr; int ihl; scalar_t__ check; int tot_len; } ;
typedef int __wsum ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iphdr*) ;
 int FUNC_1 (struct tcphdr*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tcphdr*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct net_lro_desc *VAR_1)
{
 struct iphdr *VAR_2 = VAR_1->iph;
 struct tcphdr *VAR_3 = VAR_1->tcph;
 __be32 *VAR_4;
 __wsum VAR_5;

 VAR_3->ack_seq = VAR_1->tcp_ack;
 VAR_3->window = VAR_1->tcp_window;

 if (VAR_1->tcp_saw_tstamp) {
  VAR_4 = (__be32 *)(VAR_3 + 1);
  *(VAR_4+2) = VAR_1->tcp_rcv_tsecr;
 }

 VAR_2->tot_len = FUNC_5(VAR_1->ip_tot_len);

 VAR_2->check = 0;
 VAR_2->check = FUNC_6((u8 *)VAR_1->iph, VAR_2->ihl);

 VAR_3->check = 0;
 VAR_5 = FUNC_3(VAR_3, FUNC_1(VAR_3), 0);
 VAR_1->data_csum = FUNC_2(VAR_1->data_csum, VAR_5);
 VAR_3->check = FUNC_4(VAR_2->saddr, VAR_2->daddr,
     VAR_1->ip_tot_len -
     FUNC_0(VAR_2), VAR_0,
     VAR_1->data_csum);
}
