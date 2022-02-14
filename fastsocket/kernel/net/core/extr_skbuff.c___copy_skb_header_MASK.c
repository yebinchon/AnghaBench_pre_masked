
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int vlan_tci; int tc_verd; int tc_index; int nf_trace; int iif; int mark; int protocol; int ipvs_property; int deliver_no_wcard; int priority; int ip_summed; int pkt_type; int local_df; int csum; int cb; int sp; int encapsulation; int rxhash; int peek_sk; int sock_dst; int mac_header; int network_header; int transport_header; int dev; int tstamp; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct sk_buff const*) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff const*) ;
 int FUNC_6 (struct sk_buff const*) ;
 int FUNC_7 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_0, const struct sk_buff *VAR_1)
{
 VAR_0->tstamp = VAR_1->tstamp;
 VAR_0->dev = VAR_1->dev;
 VAR_0->transport_header = VAR_1->transport_header;
 VAR_0->network_header = VAR_1->network_header;
 VAR_0->mac_header = VAR_1->mac_header;
 FUNC_7(VAR_0, FUNC_1(FUNC_6(VAR_1)));
 VAR_0->sock_dst = VAR_1->sock_dst;
 VAR_0->peek_sk = VAR_1->peek_sk;
 VAR_0->rxhash = VAR_1->rxhash;
 VAR_0->encapsulation = VAR_1->encapsulation;



 FUNC_2(VAR_0->cb, VAR_1->cb, sizeof(VAR_1->cb));
 VAR_0->csum = VAR_1->csum;
 VAR_0->local_df = VAR_1->local_df;
 VAR_0->pkt_type = VAR_1->pkt_type;
 VAR_0->ip_summed = VAR_1->ip_summed;
 FUNC_4(VAR_0, VAR_1);
 VAR_0->priority = VAR_1->priority;
 VAR_0->deliver_no_wcard = VAR_1->deliver_no_wcard;



 VAR_0->protocol = VAR_1->protocol;
 VAR_0->mark = VAR_1->mark;
 VAR_0->iif = VAR_1->iif;
 FUNC_0(VAR_0, VAR_1);
 VAR_0->vlan_tci = VAR_1->vlan_tci;

 FUNC_5(VAR_0, VAR_1);
}
