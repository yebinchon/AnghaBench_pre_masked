
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_err; scalar_t__ sk_write_pending; int (* sk_state_change ) (struct sock*) ;int * sk_send_head; } ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {scalar_t__ rskq_defer_accept; } ;
struct TYPE_8__ {scalar_t__ pingpong; } ;
struct inet_connection_sock {TYPE_4__ icsk_accept_queue; TYPE_3__ icsk_ack; TYPE_2__* icsk_af_ops; int icsk_pmtu_cookie; } ;
struct TYPE_6__ {long dccpor_timestamp_echo; } ;
struct dccp_sock {int dccps_featneg; int dccps_isr; int dccps_swl; TYPE_1__ dccps_options_received; int dccps_syn_rtt; scalar_t__ dccps_awh; scalar_t__ dccps_awl; } ;
struct dccp_hdr {scalar_t__ dccph_type; } ;
struct TYPE_10__ {int dccpd_reset_code; int dccpd_seq; scalar_t__ dccpd_ack_seq; } ;
struct TYPE_7__ {int (* rebuild_header ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sock*,int *) ;
 scalar_t__ FUNC_5 (struct sock*,int *,struct sk_buff*) ;
 int FUNC_6 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct sock*,int ) ;
 struct dccp_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;
 long FUNC_13 () ;
 int FUNC_14 (struct sock*,int ) ;
 struct inet_connection_sock* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (long) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct sock*,int ,int ) ;
 int FUNC_21 (struct sock*,int ) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*) ;

__attribute__((used)) static int FUNC_24(struct sock *VAR_10,
            struct sk_buff *VAR_11,
            const struct dccp_hdr *VAR_12,
            const unsigned VAR_13)
{
 if (VAR_12->dccph_type == VAR_2) {
  const struct inet_connection_sock *VAR_14 = FUNC_15(VAR_10);
  struct dccp_sock *VAR_15 = FUNC_11(VAR_10);
  long VAR_16 = FUNC_13();

  if (!FUNC_3(FUNC_0(VAR_11)->dccpd_ack_seq,
          VAR_15->dccps_awl, VAR_15->dccps_awh)) {
   FUNC_6("invalid ackno: S.AWL=%llu, "
          "P.ackno=%llu, S.AWH=%llu \n",
          (unsigned long long)VAR_15->dccps_awl,
      (unsigned long long)FUNC_0(VAR_11)->dccpd_ack_seq,
          (unsigned long long)VAR_15->dccps_awh);
   goto out_invalid_packet;
  }






  if (FUNC_5(VAR_10, ((void*)0), VAR_11))
   return 1;


  if (FUNC_18(VAR_15->dccps_options_received.dccpor_timestamp_echo))
   VAR_15->dccps_syn_rtt = FUNC_7(VAR_10, 10 * (VAR_16 -
       VAR_15->dccps_options_received.dccpor_timestamp_echo));


  FUNC_16(VAR_10, VAR_6);
  FUNC_1(VAR_10->sk_send_head == ((void*)0));
  FUNC_17(VAR_10->sk_send_head);
  VAR_10->sk_send_head = ((void*)0);

  VAR_15->dccps_isr = FUNC_0(VAR_11)->dccpd_seq;
  FUNC_14(VAR_10, VAR_15->dccps_isr);
  FUNC_9(&VAR_15->dccps_swl,
          FUNC_19(VAR_15->dccps_swl, VAR_15->dccps_isr));

  FUNC_12(VAR_10, VAR_14->icsk_pmtu_cookie);
  FUNC_10(VAR_10, VAR_1);







  if (FUNC_4(VAR_10, &VAR_15->dccps_featneg))
   goto unable_to_proceed;


  VAR_14->icsk_af_ops->rebuild_header(VAR_10);

  if (!FUNC_21(VAR_10, VAR_8)) {
   VAR_10->sk_state_change(VAR_10);
   FUNC_20(VAR_10, VAR_9, VAR_7);
  }

  if (VAR_10->sk_write_pending || VAR_14->icsk_ack.pingpong ||
      VAR_14->icsk_accept_queue.rskq_defer_accept) {
   FUNC_2(VAR_11);
   return 0;
  }
  FUNC_8(VAR_10);
  return -1;
 }

out_invalid_packet:

 FUNC_0(VAR_11)->dccpd_reset_code = VAR_4;
 return 1;

unable_to_proceed:
 FUNC_0(VAR_11)->dccpd_reset_code = VAR_3;




 FUNC_10(VAR_10, VAR_0);
 VAR_10->sk_err = VAR_5;
 return 1;
}
