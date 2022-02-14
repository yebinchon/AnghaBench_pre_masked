
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tcp_sock {int lost_out; int retrans_out; int sacked_out; int lost_cnt_hint; int fackets_out; struct sk_buff* lost_skb_hint; scalar_t__ frto_highmark; scalar_t__ snd_una; scalar_t__ undo_retrans; scalar_t__ undo_marker; } ;
struct tcp_sacktag_state {int fack_count; int flag; void* reord; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sacked; int seq; int end_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 void* FUNC_3 (int,void*) ;
 int FUNC_4 (struct tcp_sock*) ;
 int FUNC_5 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static u8 FUNC_7(struct sk_buff *VAR_6, struct sock *VAR_7,
     struct tcp_sacktag_state *VAR_8,
     int VAR_9, int VAR_10)
{
 struct tcp_sock *VAR_11 = FUNC_6(VAR_7);
 u8 VAR_12 = FUNC_0(VAR_6)->sacked;
 int VAR_13 = VAR_8->fack_count;


 if (VAR_9 && (VAR_12 & VAR_3)) {
  if (VAR_11->undo_marker && VAR_11->undo_retrans &&
      FUNC_1(FUNC_0(VAR_6)->end_seq, VAR_11->undo_marker))
   VAR_11->undo_retrans--;
  if (VAR_12 & VAR_4)
   VAR_8->reord = FUNC_3(VAR_13, VAR_8->reord);
 }


 if (!FUNC_1(FUNC_0(VAR_6)->end_seq, VAR_11->snd_una))
  return VAR_12;

 if (!(VAR_12 & VAR_4)) {
  if (VAR_12 & VAR_5) {




   if (VAR_12 & VAR_2) {
    VAR_12 &= ~(VAR_2|VAR_5);
    VAR_11->lost_out -= VAR_10;
    VAR_11->retrans_out -= VAR_10;
   }
  } else {
   if (!(VAR_12 & VAR_3)) {



    if (FUNC_2(FUNC_0(VAR_6)->seq,
        FUNC_4(VAR_11)))
     VAR_8->reord = FUNC_3(VAR_13,
          VAR_8->reord);


    if (!FUNC_1(FUNC_0(VAR_6)->end_seq, VAR_11->frto_highmark))
     VAR_8->flag |= VAR_1;
   }

   if (VAR_12 & VAR_2) {
    VAR_12 &= ~VAR_2;
    VAR_11->lost_out -= VAR_10;
   }
  }

  VAR_12 |= VAR_4;
  VAR_8->flag |= VAR_0;
  VAR_11->sacked_out += VAR_10;

  VAR_13 += VAR_10;


  if (!FUNC_5(VAR_11) && (VAR_11->lost_skb_hint != ((void*)0)) &&
      FUNC_2(FUNC_0(VAR_6)->seq,
      FUNC_0(VAR_11->lost_skb_hint)->seq))
   VAR_11->lost_cnt_hint += VAR_10;

  if (VAR_13 > VAR_11->fackets_out)
   VAR_11->fackets_out = VAR_13;
 }





 if (VAR_9 && (VAR_12 & VAR_5)) {
  VAR_12 &= ~VAR_5;
  VAR_11->retrans_out -= VAR_10;
 }

 return VAR_12;
}
