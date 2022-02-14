
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {TYPE_1__* sk_prot; } ;
struct sk_buff {int dummy; } ;
struct dccp_skb_cb {int dccpd_reset_code; scalar_t__ dccpd_ack_seq; int dccpd_seq; int dccpd_reset_data; } ;
struct dccp_hdr_reset {int dccph_reset_code; int * dccph_reset_data; } ;
struct dccp_hdr_ext {int dummy; } ;
struct dccp_hdr {int dccph_doff; int dccph_x; int dccph_type; int dccph_sport; int dccph_dport; } ;
struct TYPE_2__ {int max_header; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 struct dccp_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct dccp_hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct dccp_hdr_reset* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct dccp_hdr*,int ) ;
 struct dccp_hdr* FUNC_9 (struct sk_buff*,int const) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;

struct sk_buff *FUNC_12(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct dccp_hdr *VAR_5 = FUNC_4(VAR_4), *VAR_6;
 struct dccp_skb_cb *VAR_7 = FUNC_1(VAR_4);
 const u32 VAR_8 = sizeof(struct dccp_hdr) +
           sizeof(struct dccp_hdr_ext) +
           sizeof(struct dccp_hdr_reset);
 struct dccp_hdr_reset *VAR_9;
 struct sk_buff *VAR_10;

 VAR_10 = FUNC_2(VAR_3->sk_prot->max_header, VAR_2);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 FUNC_11(VAR_10, VAR_3->sk_prot->max_header);


 VAR_6 = FUNC_9(VAR_10, VAR_8);
 VAR_6->dccph_type = VAR_0;
 VAR_6->dccph_sport = VAR_5->dccph_dport;
 VAR_6->dccph_dport = VAR_5->dccph_sport;
 VAR_6->dccph_doff = VAR_8 / 4;
 VAR_6->dccph_x = 1;

 VAR_9 = FUNC_6(VAR_10);
 VAR_9->dccph_reset_code = VAR_7->dccpd_reset_code;

 switch (VAR_7->dccpd_reset_code) {
 case 128:
  VAR_9->dccph_reset_data[0] = VAR_5->dccph_type;
  break;
 case 129:
 case 130:
  FUNC_10(VAR_9->dccph_reset_data, VAR_7->dccpd_reset_data, 3);
  break;
 }





 if (VAR_7->dccpd_ack_seq != VAR_1)
  FUNC_8(VAR_6, FUNC_0(VAR_7->dccpd_ack_seq, 1));
 FUNC_7(FUNC_5(VAR_10), VAR_7->dccpd_seq);

 FUNC_3(VAR_10);
 return VAR_10;
}
