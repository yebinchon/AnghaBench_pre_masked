
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sock {TYPE_1__* sk_prot; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct dccp_request_sock {int dreq_service; int dreq_isr; int dreq_iss; } ;
struct dccp_hdr_response {int dummy; } ;
struct dccp_hdr_ext {int dummy; } ;
struct dccp_hdr {int dccph_doff; int dccph_x; void* dccph_type; int dccph_dport; int dccph_sport; } ;
struct TYPE_8__ {int const dccpd_opt_len; int dccpd_seq; void* dccpd_type; } ;
struct TYPE_7__ {int dccph_resp_service; } ;
struct TYPE_6__ {int acked; int rmt_port; int loc_port; } ;
struct TYPE_5__ {int max_header; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 TYPE_4__* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct dccp_request_sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct dccp_hdr*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct dccp_request_sock*,struct sk_buff*) ;
 struct dccp_request_sock* FUNC_10 (struct request_sock*) ;
 struct dccp_hdr* FUNC_11 (struct sk_buff*,int const) ;
 int FUNC_12 (struct dst_entry*) ;
 TYPE_2__* FUNC_13 (struct request_sock*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_17 (struct sock*,int ,int,int ) ;

struct sk_buff *FUNC_18(struct sock *VAR_3, struct dst_entry *VAR_4,
       struct request_sock *VAR_5)
{
 struct dccp_hdr *VAR_6;
 struct dccp_request_sock *VAR_7;
 const u32 VAR_8 = sizeof(struct dccp_hdr) +
         sizeof(struct dccp_hdr_ext) +
         sizeof(struct dccp_hdr_response);
 struct sk_buff *VAR_9 = FUNC_17(VAR_3, VAR_3->sk_prot->max_header, 1,
        VAR_2);
 if (VAR_9 == ((void*)0))
  return ((void*)0);


 FUNC_16(VAR_9, VAR_3->sk_prot->max_header);

 FUNC_15(VAR_9, FUNC_12(VAR_4));

 VAR_7 = FUNC_10(VAR_5);
 if (FUNC_13(VAR_5)->acked)
  FUNC_8(&VAR_7->dreq_iss);
 FUNC_1(VAR_9)->dccpd_type = VAR_1;
 FUNC_1(VAR_9)->dccpd_seq = VAR_7->dreq_iss;


 if (FUNC_3(VAR_7))
  goto response_failed;

 if (FUNC_9(VAR_7, VAR_9))
  goto response_failed;


 VAR_6 = FUNC_11(VAR_9, VAR_8);

 VAR_6->dccph_sport = FUNC_13(VAR_5)->loc_port;
 VAR_6->dccph_dport = FUNC_13(VAR_5)->rmt_port;
 VAR_6->dccph_doff = (VAR_8 +
      FUNC_1(VAR_9)->dccpd_opt_len) / 4;
 VAR_6->dccph_type = VAR_1;
 VAR_6->dccph_x = 1;
 FUNC_7(VAR_6, VAR_7->dreq_iss);
 FUNC_6(FUNC_4(VAR_9), VAR_7->dreq_isr);
 FUNC_5(VAR_9)->dccph_resp_service = VAR_7->dreq_service;

 FUNC_2(VAR_9);


 FUNC_13(VAR_5)->acked = 1;
 FUNC_0(VAR_0);
 return VAR_9;
response_failed:
 FUNC_14(VAR_9);
 return ((void*)0);
}
