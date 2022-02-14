
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u64 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_l_ack_ratio; } ;
struct ccid2_seq {void* ccid2s_seq; int ccid2s_acked; struct ccid2_seq* ccid2s_next; struct ccid2_seq* ccid2s_prev; } ;
struct ccid2_hc_tx_sock {int ccid2hctx_rpdupack; void* ccid2hctx_rpseq; void* ccid2hctx_high_ack; scalar_t__ ccid2hctx_cwnd; scalar_t__ ccid2hctx_ssthresh; struct ccid2_seq* ccid2hctx_seqt; struct ccid2_seq* ccid2hctx_seqh; } ;
struct TYPE_2__ {int dccpd_type; void* dccpd_ack_seq; void* dccpd_seq; } ;


 unsigned char VAR_0 ;
 scalar_t__ const VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ const VAR_3 ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (int,int) ;
 int VAR_4 ;
 void* FUNC_2 (void*,scalar_t__ const) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 scalar_t__ FUNC_5 (void*,void*,void*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int,unsigned char**,unsigned char*) ;
 int FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*,struct ccid2_seq*) ;
 int FUNC_9 (struct ccid2_hc_tx_sock*) ;
 int FUNC_10 (struct sock*) ;
 struct ccid2_hc_tx_sock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct ccid2_seq*,unsigned int*) ;
 int FUNC_13 (char*,unsigned long long,...) ;
 int FUNC_14 (void*,void*) ;
 struct dccp_sock* FUNC_15 (struct sock*) ;

__attribute__((used)) static void FUNC_16(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct dccp_sock *VAR_7 = FUNC_15(VAR_5);
 struct ccid2_hc_tx_sock *VAR_8 = FUNC_11(VAR_5);
 u64 VAR_9, VAR_10;
 struct ccid2_seq *VAR_11;
 unsigned char *VAR_12;
 unsigned char VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 unsigned int VAR_16 = 0;

 FUNC_9(VAR_8);

 VAR_10 = FUNC_0(VAR_6)->dccpd_seq;






 if (VAR_8->ccid2hctx_rpdupack == -1) {
  VAR_8->ccid2hctx_rpdupack = 0;
  VAR_8->ccid2hctx_rpseq = VAR_10;
 } else {

  if (FUNC_14(VAR_8->ccid2hctx_rpseq, VAR_10) == 1)
   VAR_8->ccid2hctx_rpseq = VAR_10;

  else if (FUNC_3(VAR_10, VAR_8->ccid2hctx_rpseq)) {
   VAR_8->ccid2hctx_rpdupack++;


   if (VAR_8->ccid2hctx_rpdupack >= VAR_4) {
    VAR_8->ccid2hctx_rpdupack = -1;
    VAR_8->ccid2hctx_rpseq = 0;

    FUNC_7(VAR_5, 2 * VAR_7->dccps_l_ack_ratio);
   }
  }
 }



 if (VAR_8->ccid2hctx_seqh == VAR_8->ccid2hctx_seqt)
  return;

 switch (FUNC_0(VAR_6)->dccpd_type) {
 case 129:
 case 128:
  break;
 default:
  return;
 }

 VAR_9 = FUNC_0(VAR_6)->dccpd_ack_seq;
 if (FUNC_3(VAR_9, VAR_8->ccid2hctx_high_ack))
  VAR_8->ccid2hctx_high_ack = VAR_9;

 VAR_11 = VAR_8->ccid2hctx_seqt;
 while (FUNC_4(VAR_11->ccid2s_seq, VAR_9)) {
  VAR_11 = VAR_11->ccid2s_next;
  if (VAR_11 == VAR_8->ccid2hctx_seqh) {
   VAR_11 = VAR_8->ccid2hctx_seqh->ccid2s_prev;
   break;
  }
 }






 if (VAR_8->ccid2hctx_cwnd < VAR_8->ccid2hctx_ssthresh)
  VAR_16 = FUNC_1(VAR_7->dccps_l_ack_ratio, 2);


 while ((VAR_14 = FUNC_6(VAR_5, VAR_6, VAR_14,
      &VAR_12, &VAR_13)) != -1) {

  while (VAR_13--) {
   const u8 VAR_17 = *VAR_12 & VAR_0;
   u64 VAR_18 = FUNC_2(VAR_9, VAR_17);

   FUNC_13("ackvec start:%llu end:%llu\n",
           (unsigned long long)VAR_9,
           (unsigned long long)VAR_18);




   while (FUNC_3(VAR_11->ccid2s_seq, VAR_9)) {
    if (VAR_11 == VAR_8->ccid2hctx_seqt) {
     VAR_15 = 1;
     break;
    }
    VAR_11 = VAR_11->ccid2s_prev;
   }
   if (VAR_15)
    break;




   while (FUNC_5(VAR_11->ccid2s_seq,VAR_18,VAR_9)) {
    const u8 VAR_19 = *VAR_12 &
       VAR_2;


    if (VAR_19 != VAR_3 &&
        !VAR_11->ccid2s_acked) {
     if (VAR_19 ==
         VAR_1) {
      FUNC_8(VAR_5,
               VAR_11);
     } else
      FUNC_12(VAR_5, VAR_11,
             &VAR_16);

     VAR_11->ccid2s_acked = 1;
     FUNC_13("Got ack for %llu\n",
             (unsigned long long)VAR_11->ccid2s_seq);
     FUNC_10(VAR_5);
    }
    if (VAR_11 == VAR_8->ccid2hctx_seqt) {
     VAR_15 = 1;
     break;
    }
    VAR_11 = VAR_11->ccid2s_prev;
   }
   if (VAR_15)
    break;

   VAR_9 = FUNC_2(VAR_18, 1);
   VAR_12++;
  }
  if (VAR_15)
   break;
 }




 VAR_11 = VAR_8->ccid2hctx_seqt;
 while (FUNC_4(VAR_11->ccid2s_seq, VAR_8->ccid2hctx_high_ack)) {
  VAR_11 = VAR_11->ccid2s_next;
  if (VAR_11 == VAR_8->ccid2hctx_seqh) {
   VAR_11 = VAR_8->ccid2hctx_seqh->ccid2s_prev;
   break;
  }
 }
 VAR_15 = 0;
 while (1) {
  if (VAR_11->ccid2s_acked) {
   VAR_15++;
   if (VAR_15 == VAR_4)
    break;
  }
  if (VAR_11 == VAR_8->ccid2hctx_seqt)
   break;
  VAR_11 = VAR_11->ccid2s_prev;
 }




 if (VAR_15 == VAR_4) {
  struct ccid2_seq *VAR_20 = VAR_11;


  while (1) {
   if (!VAR_11->ccid2s_acked) {
    FUNC_13("Packet lost: %llu\n",
            (unsigned long long)VAR_11->ccid2s_seq);




    FUNC_8(VAR_5, VAR_11);
    FUNC_10(VAR_5);
   }
   if (VAR_11 == VAR_8->ccid2hctx_seqt)
    break;
   VAR_11 = VAR_11->ccid2s_prev;
  }

  VAR_8->ccid2hctx_seqt = VAR_20;
 }


 while (VAR_8->ccid2hctx_seqt != VAR_8->ccid2hctx_seqh) {
  if (!VAR_8->ccid2hctx_seqt->ccid2s_acked)
   break;

  VAR_8->ccid2hctx_seqt = VAR_8->ccid2hctx_seqt->ccid2s_next;
 }

 FUNC_9(VAR_8);
}
