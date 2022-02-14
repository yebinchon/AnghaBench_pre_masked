
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int doff; scalar_t__ ack; } ;
struct TYPE_5__ {unsigned int len; scalar_t__ task; } ;
struct TYPE_4__ {scalar_t__ ts_recent; scalar_t__ rcv_tsval; scalar_t__ saw_tstamp; } ;
struct tcp_sock {int pred_flags; scalar_t__ rcv_nxt; int tcp_header_len; scalar_t__ rcv_wup; scalar_t__ copied_seq; scalar_t__ snd_una; TYPE_2__ ucopy; TYPE_1__ rx_opt; int snd_nxt; } ;
struct sock {int sk_forward_alloc; int (* sk_data_ready ) (struct sock*,int ) ;int sk_async_wait_queue; int sk_receive_queue; } ;
struct sk_buff {scalar_t__ truesize; int len; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {scalar_t__ seq; scalar_t__ ack_seq; scalar_t__ end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 TYPE_3__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*,struct sock*) ;
 int FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int ) ;
 scalar_t__ FUNC_14 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_15 (struct sock*) ;
 scalar_t__ FUNC_16 (struct sock*,struct sk_buff*) ;
 int FUNC_17 (struct sock*,int ) ;
 int FUNC_18 (struct sock*,struct sk_buff*,int) ;
 int FUNC_19 (struct sock*,struct sk_buff*) ;
 int FUNC_20 (struct sock*) ;
 scalar_t__ FUNC_21 (struct sock*,struct sk_buff*,int) ;
 int FUNC_22 (struct sock*,struct sk_buff*) ;
 int FUNC_23 (struct tcphdr*) ;
 int FUNC_24 (struct tcp_sock*,struct tcphdr*) ;
 int FUNC_25 (struct sock*,struct sk_buff*) ;
 int FUNC_26 (struct tcp_sock*,scalar_t__) ;
 struct tcp_sock* FUNC_27 (struct sock*) ;
 int FUNC_28 (struct tcp_sock*) ;
 int FUNC_29 (struct sock*,struct sk_buff*,struct tcphdr*) ;
 int FUNC_30 (struct sock*,struct sk_buff*,struct tcphdr*,int) ;

int FUNC_31(struct sock *VAR_9, struct sk_buff *VAR_10,
   struct tcphdr *VAR_11, unsigned VAR_12)
{
 struct tcp_sock *VAR_13 = FUNC_27(VAR_9);
 VAR_13->rx_opt.saw_tstamp = 0;
 if ((FUNC_23(VAR_11) & VAR_6) == VAR_13->pred_flags &&
     FUNC_2(VAR_10)->seq == VAR_13->rcv_nxt &&
     !FUNC_8(FUNC_2(VAR_10)->ack_seq, VAR_13->snd_nxt)) {
  int VAR_14 = VAR_13->tcp_header_len;







  if (VAR_14 == sizeof(struct tcphdr) + VAR_5) {

   if (!FUNC_24(VAR_13, VAR_11))
    goto slow_path;


   if ((s32)(VAR_13->rx_opt.rcv_tsval - VAR_13->rx_opt.ts_recent) < 0)
    goto slow_path;






  }

  if (VAR_12 <= VAR_14) {

   if (VAR_12 == VAR_14) {




    if (VAR_14 ==
        (sizeof(struct tcphdr) + VAR_5) &&
        VAR_13->rcv_nxt == VAR_13->rcv_wup)
     FUNC_28(VAR_13);




    FUNC_14(VAR_9, VAR_10, 0);
    FUNC_3(VAR_10);
    FUNC_20(VAR_9);
    return 0;
   } else {
    FUNC_1(FUNC_11(VAR_9), VAR_7);
    goto discard;
   }
  } else {
   int VAR_15 = 0;
   int VAR_16 = 0;

   if (VAR_13->copied_seq == VAR_13->rcv_nxt &&
       VAR_12 - VAR_14 <= VAR_13->ucopy.len) {






    if (VAR_13->ucopy.task == VAR_8 &&
        FUNC_12(VAR_9) && !VAR_16) {
     FUNC_4(VAR_4);

     if (!FUNC_18(VAR_9, VAR_10, VAR_14))
      VAR_15 = 1;
    }
    if (VAR_15) {




     if (VAR_14 ==
         (sizeof(struct tcphdr) +
          VAR_5) &&
         VAR_13->rcv_nxt == VAR_13->rcv_wup)
      FUNC_28(VAR_13);

     FUNC_25(VAR_9, VAR_10);

     FUNC_5(VAR_10, VAR_14);
     VAR_13->rcv_nxt = FUNC_2(VAR_10)->end_seq;
     FUNC_0(FUNC_11(VAR_9), VAR_3);
    }
    if (VAR_16)
     FUNC_17(VAR_9, VAR_10->len);
   }
   if (!VAR_15) {
    if (FUNC_16(VAR_9, VAR_10))
     goto csum_error;





    if (VAR_14 ==
        (sizeof(struct tcphdr) + VAR_5) &&
        VAR_13->rcv_nxt == VAR_13->rcv_wup)
     FUNC_28(VAR_13);

    FUNC_25(VAR_9, VAR_10);

    if ((int)VAR_10->truesize > VAR_9->sk_forward_alloc)
     goto step5;

    FUNC_0(FUNC_11(VAR_9), VAR_2);


    FUNC_5(VAR_10, VAR_14);
    FUNC_6(&VAR_9->sk_receive_queue, VAR_10);
    FUNC_10(VAR_10, VAR_9);
    VAR_13->rcv_nxt = FUNC_2(VAR_10)->end_seq;
   }

   FUNC_22(VAR_9, VAR_10);

   if (FUNC_2(VAR_10)->ack_seq != VAR_13->snd_una) {

    FUNC_14(VAR_9, VAR_10, VAR_0);
    FUNC_20(VAR_9);
    if (!FUNC_9(VAR_9))
     goto no_ack;
   }

   if (!VAR_16 || VAR_13->rcv_nxt != VAR_13->rcv_wup)
    FUNC_7(VAR_9, 0);
no_ack:





   if (VAR_15)
    FUNC_3(VAR_10);
   else
    VAR_9->sk_data_ready(VAR_9, 0);
   return 0;
  }
 }

slow_path:
 if (VAR_12 < (VAR_11->doff << 2) || FUNC_16(VAR_9, VAR_10))
  goto csum_error;





 if (!FUNC_30(VAR_9, VAR_10, VAR_11, 1))
  return 0;

step5:
 if (VAR_11->ack && FUNC_14(VAR_9, VAR_10, VAR_1) < 0)
  goto discard;




 FUNC_26(VAR_13, FUNC_2(VAR_10)->seq);

 FUNC_25(VAR_9, VAR_10);


 FUNC_29(VAR_9, VAR_10, VAR_11);


 FUNC_19(VAR_9, VAR_10);

 FUNC_20(VAR_9);
 FUNC_15(VAR_9);
 return 0;

csum_error:
 FUNC_1(FUNC_11(VAR_9), VAR_7);

discard:
 FUNC_3(VAR_10);
 return 0;
}
