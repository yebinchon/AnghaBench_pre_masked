
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ user_mss; } ;
struct tcp_sock {int write_seq; scalar_t__ advmss; int total_retrans; TYPE_1__ rx_opt; } ;
struct tcp_md5sig_key {int keylen; int key; } ;
struct sock {int sk_route_caps; int sk_gso_type; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int retrans; } ;
struct ip_options {scalar_t__ optlen; } ;
struct inet_sock {int id; int daddr; int mc_ttl; int mc_index; int opt; int saddr; int rcv_saddr; } ;
struct inet_request_sock {struct ip_options* opt; int loc_addr; int rmt_addr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_10__ {scalar_t__ icsk_ext_hdr_len; } ;
struct TYPE_9__ {int tos; int ttl; } ;
struct TYPE_8__ {int rcv_tos; } ;
struct TYPE_7__ {scalar_t__ snt_synack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*,struct sock*) ;
 scalar_t__ FUNC_3 (struct dst_entry*,int ) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 TYPE_5__* FUNC_6 (struct sock*) ;
 struct dst_entry* FUNC_7 (struct sock*,struct request_sock*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct inet_request_sock* FUNC_9 (struct request_sock*) ;
 struct inet_sock* FUNC_10 (struct sock*) ;
 TYPE_4__* FUNC_11 (struct sk_buff*) ;
 int VAR_6 ;
 char* FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,struct ip_options*) ;
 scalar_t__ FUNC_14 (struct sock*) ;
 TYPE_3__* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,struct dst_entry*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 struct sock* FUNC_19 (struct sock*,struct request_sock*,struct sk_buff*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*) ;
 TYPE_2__* FUNC_22 (struct request_sock*) ;
 struct tcp_sock* FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_25 (struct sock*,int ,char*,int ) ;
 struct tcp_md5sig_key* FUNC_26 (struct sock*,int ) ;
 int FUNC_27 (struct sock*,scalar_t__) ;

struct sock *FUNC_28(struct sock *VAR_8, struct sk_buff *VAR_9,
      struct request_sock *VAR_10,
      struct dst_entry *VAR_11)
{
 struct inet_request_sock *VAR_12;
 struct inet_sock *VAR_13;
 struct tcp_sock *VAR_14;
 struct sock *VAR_15;



 struct ip_options *VAR_16;

 if (FUNC_14(VAR_8))
  goto exit_overflow;

 if (!VAR_11 && (VAR_11 = FUNC_7(VAR_8, VAR_10)) == ((void*)0))
  goto exit;

 VAR_15 = FUNC_19(VAR_8, VAR_10, VAR_9);
 if (!VAR_15)
  goto exit_nonewsk;

 VAR_15->sk_gso_type = VAR_5;
 FUNC_16(VAR_15, VAR_11);

 VAR_14 = FUNC_23(VAR_15);
 VAR_13 = FUNC_10(VAR_15);
 VAR_12 = FUNC_9(VAR_10);
 VAR_13->daddr = VAR_12->rmt_addr;
 VAR_13->rcv_saddr = VAR_12->loc_addr;
 VAR_13->saddr = VAR_12->loc_addr;
 VAR_16 = VAR_12->opt;
 FUNC_13(VAR_13->opt, VAR_16);
 VAR_12->opt = ((void*)0);
 VAR_13->mc_index = FUNC_8(VAR_9);
 VAR_13->mc_ttl = FUNC_11(VAR_9)->ttl;
 FUNC_15(VAR_15)->rcv_tos = FUNC_11(VAR_9)->tos;
 FUNC_6(VAR_15)->icsk_ext_hdr_len = 0;
 if (VAR_16)
  FUNC_6(VAR_15)->icsk_ext_hdr_len = VAR_16->optlen;
 VAR_13->id = VAR_14->write_seq ^ VAR_6;

 FUNC_21(VAR_15);
 FUNC_24(VAR_15, FUNC_4(VAR_11));
 VAR_14->advmss = FUNC_3(VAR_11, VAR_4);
 if (FUNC_23(VAR_8)->rx_opt.user_mss &&
     FUNC_23(VAR_8)->rx_opt.user_mss < VAR_14->advmss)
  VAR_14->advmss = FUNC_23(VAR_8)->rx_opt.user_mss;

 FUNC_20(VAR_15);
 if (FUNC_22(VAR_10)->snt_synack)
  FUNC_27(VAR_15,
      VAR_7 - FUNC_22(VAR_10)->snt_synack);
 VAR_14->total_retrans = VAR_10->retrans;
 if (FUNC_2(VAR_8, VAR_15) < 0) {
  FUNC_18(VAR_15);
  goto exit;
 }
 FUNC_1(VAR_15);

 return VAR_15;

exit_overflow:
 FUNC_0(FUNC_17(VAR_8), VAR_2);
exit_nonewsk:
 FUNC_5(VAR_11);
exit:
 FUNC_0(FUNC_17(VAR_8), VAR_1);
 return ((void*)0);
}
