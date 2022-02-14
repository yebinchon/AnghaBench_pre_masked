
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ packets_out; int fackets_out; scalar_t__ max_window; scalar_t__ snd_una; scalar_t__ high_seq; scalar_t__ frto_highmark; scalar_t__ retrans_out; scalar_t__ lost_out; scalar_t__ sacked_out; scalar_t__ undo_marker; struct tcp_sack_block* recv_sack_cache; } ;
struct tcp_sacktag_state {int flag; scalar_t__ reord; int fack_count; } ;
struct tcp_sack_block_wire {int end_seq; int start_seq; } ;
struct tcp_sack_block {scalar_t__ start_seq; scalar_t__ end_seq; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct TYPE_2__ {int sacked; scalar_t__ ack_seq; } ;


 int FUNC_0 (struct tcp_sack_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 unsigned char VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 void* FUNC_6 (int *) ;
 struct inet_connection_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (int,unsigned char) ;
 unsigned char* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct tcp_sack_block,struct tcp_sack_block) ;
 int FUNC_12 (struct sock*,struct sk_buff*,struct tcp_sack_block_wire*,int,scalar_t__) ;
 struct sk_buff* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct tcp_sock*) ;
 int FUNC_16 (struct tcp_sock*,int,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct sock*) ;
 struct sk_buff* FUNC_18 (struct sk_buff*,struct sock*,struct tcp_sack_block*,struct tcp_sacktag_state*,scalar_t__) ;
 scalar_t__ FUNC_19 (struct tcp_sock*) ;
 scalar_t__ FUNC_20 (struct tcp_sock*,struct tcp_sack_block*) ;
 struct sk_buff* FUNC_21 (struct sk_buff*,struct sock*,struct tcp_sacktag_state*,scalar_t__) ;
 struct sk_buff* FUNC_22 (struct sk_buff*,struct sock*,struct tcp_sack_block*,struct tcp_sacktag_state*,scalar_t__,scalar_t__,int) ;
 struct tcp_sock* FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*,scalar_t__,int ) ;
 int FUNC_25 (struct tcp_sock*) ;
 struct sk_buff* FUNC_26 (struct sock*) ;

__attribute__((used)) static int
FUNC_27(struct sock *VAR_9, struct sk_buff *VAR_10,
   u32 VAR_11)
{
 const struct inet_connection_sock *VAR_12 = FUNC_7(VAR_9);
 struct tcp_sock *VAR_13 = FUNC_23(VAR_9);
 unsigned char *VAR_14 = (FUNC_9(VAR_10) +
         FUNC_2(VAR_10)->sacked);
 struct tcp_sack_block_wire *VAR_15 = (struct tcp_sack_block_wire *)(VAR_14+2);
 struct tcp_sack_block VAR_16[VAR_8];
 struct tcp_sack_block *VAR_17;
 struct tcp_sacktag_state VAR_18;
 struct sk_buff *VAR_19;
 int VAR_20 = FUNC_8(VAR_8, (VAR_14[1] - VAR_6) >> 3);
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23, VAR_24;
 int VAR_25;

 VAR_18.flag = 0;
 VAR_18.reord = VAR_13->packets_out;

 if (!VAR_13->sacked_out) {
  if (FUNC_3(VAR_13->fackets_out))
   VAR_13->fackets_out = 0;
  FUNC_14(VAR_9);
 }

 VAR_22 = FUNC_12(VAR_9, VAR_10, VAR_15,
      VAR_20, VAR_11);
 if (VAR_22)
  VAR_18.flag |= VAR_1;





 if (FUNC_5(FUNC_2(VAR_10)->ack_seq, VAR_11 - VAR_13->max_window))
  return 0;

 if (!VAR_13->packets_out)
  goto out;

 VAR_21 = 0;
 VAR_25 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++) {
  int VAR_26 = !VAR_23 && VAR_22;

  VAR_16[VAR_21].start_seq = FUNC_6(&VAR_15[VAR_23].start_seq);
  VAR_16[VAR_21].end_seq = FUNC_6(&VAR_15[VAR_23].end_seq);

  if (!FUNC_16(VAR_13, VAR_26,
         VAR_16[VAR_21].start_seq,
         VAR_16[VAR_21].end_seq)) {
   int VAR_27;

   if (VAR_26) {
    if (!VAR_13->undo_marker)
     VAR_27 = VAR_3;
    else
     VAR_27 = VAR_4;
   } else {

    if ((FUNC_2(VAR_10)->ack_seq != VAR_13->snd_una) &&
        !FUNC_4(VAR_16[VAR_21].end_seq, VAR_13->snd_una))
     continue;
    VAR_27 = VAR_5;
   }

   FUNC_1(FUNC_10(VAR_9), VAR_27);
   if (VAR_23 == 0)
    VAR_25 = -1;
   continue;
  }


  if (!FUNC_4(VAR_16[VAR_21].end_seq, VAR_11))
   continue;

  VAR_21++;
 }


 for (VAR_23 = VAR_21 - 1; VAR_23 > 0; VAR_23--) {
  for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
   if (FUNC_4(VAR_16[VAR_24].start_seq, VAR_16[VAR_24 + 1].start_seq)) {
    FUNC_11(VAR_16[VAR_24], VAR_16[VAR_24 + 1]);


    if (VAR_24 == VAR_25)
     VAR_25 = VAR_24 + 1;
   }
  }
 }

 VAR_19 = FUNC_26(VAR_9);
 VAR_18.fack_count = 0;
 VAR_23 = 0;

 if (!VAR_13->sacked_out) {

  VAR_17 = VAR_13->recv_sack_cache + FUNC_0(VAR_13->recv_sack_cache);
 } else {
  VAR_17 = VAR_13->recv_sack_cache;

  while (FUNC_20(VAR_13, VAR_17) && !VAR_17->start_seq &&
         !VAR_17->end_seq)
   VAR_17++;
 }

 while (VAR_23 < VAR_21) {
  u32 VAR_28 = VAR_16[VAR_23].start_seq;
  u32 VAR_29 = VAR_16[VAR_23].end_seq;
  int VAR_30 = (VAR_22 && (VAR_23 == VAR_25));
  struct tcp_sack_block *VAR_31 = ((void*)0);

  if (VAR_22 && ((VAR_23 + 1) == VAR_25))
   VAR_31 = &VAR_16[VAR_23 + 1];


  if (FUNC_4(VAR_29, VAR_13->high_seq))
   VAR_18.flag |= VAR_0;


  while (FUNC_20(VAR_13, VAR_17) &&
         !FUNC_5(VAR_28, VAR_17->end_seq))
   VAR_17++;


  if (FUNC_20(VAR_13, VAR_17) && !VAR_30 &&
      FUNC_4(VAR_29, VAR_17->start_seq)) {


   if (FUNC_5(VAR_28, VAR_17->start_seq)) {
    VAR_19 = FUNC_21(VAR_19, VAR_9, &VAR_18,
             VAR_28);
    VAR_19 = FUNC_22(VAR_19, VAR_9, VAR_31,
             &VAR_18,
             VAR_28,
             VAR_17->start_seq,
             VAR_30);
   }


   if (!FUNC_4(VAR_29, VAR_17->end_seq))
    goto advance_sp;

   VAR_19 = FUNC_18(VAR_19, VAR_9, VAR_31,
             &VAR_18,
             VAR_17->end_seq);


   if (FUNC_15(VAR_13) == VAR_17->end_seq) {

    VAR_19 = FUNC_13(VAR_9);
    if (VAR_19 == ((void*)0))
     break;
    VAR_18.fack_count = VAR_13->fackets_out;
    VAR_17++;
    goto walk;
   }

   VAR_19 = FUNC_21(VAR_19, VAR_9, &VAR_18, VAR_17->end_seq);

   VAR_17++;
   continue;
  }

  if (!FUNC_5(VAR_28, FUNC_15(VAR_13))) {
   VAR_19 = FUNC_13(VAR_9);
   if (VAR_19 == ((void*)0))
    break;
   VAR_18.fack_count = VAR_13->fackets_out;
  }
  VAR_19 = FUNC_21(VAR_19, VAR_9, &VAR_18, VAR_28);

walk:
  VAR_19 = FUNC_22(VAR_19, VAR_9, VAR_31, &VAR_18,
           VAR_28, VAR_29, VAR_30);

advance_sp:



  if (FUNC_4(VAR_29, VAR_13->frto_highmark))
   VAR_18.flag &= ~VAR_2;

  VAR_23++;
 }


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_13->recv_sack_cache) - VAR_21; VAR_23++) {
  VAR_13->recv_sack_cache[VAR_23].start_seq = 0;
  VAR_13->recv_sack_cache[VAR_23].end_seq = 0;
 }
 for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++)
  VAR_13->recv_sack_cache[VAR_23++] = VAR_16[VAR_24];

 FUNC_17(VAR_9);

 FUNC_25(VAR_13);

 if ((VAR_18.reord < VAR_13->fackets_out) &&
     ((VAR_12->icsk_ca_state != VAR_7) || VAR_13->undo_marker) &&
     (!VAR_13->frto_highmark || FUNC_4(VAR_13->snd_una, VAR_13->frto_highmark)))
  FUNC_24(VAR_9, VAR_13->fackets_out - VAR_18.reord, 0);

out:







 return VAR_18.flag;
}
