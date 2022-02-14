
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_gsr; } ;
struct ccid3_options_received {scalar_t__ ccid3or_seqno; unsigned char ccid3or_loss_intervals_len; void* ccid3or_receive_rate; scalar_t__ ccid3or_loss_intervals_idx; void* ccid3or_loss_event_rate; } ;
struct ccid3_hc_tx_sock {struct ccid3_options_received ccid3hctx_options_received; } ;
typedef int __be32 ;


 int FUNC_0 (char*,int ,struct sock*,unsigned char) ;
 int VAR_0 ;



 struct ccid3_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,int ,struct sock*,void*,...) ;
 int FUNC_3 (struct sock*) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_1, unsigned char VAR_2,
         unsigned char VAR_3, u16 VAR_4,
         unsigned char *VAR_5)
{
 int VAR_6 = 0;
 const struct dccp_sock *VAR_7 = FUNC_4(VAR_1);
 struct ccid3_hc_tx_sock *VAR_8 = FUNC_1(VAR_1);
 struct ccid3_options_received *VAR_9;
 __be32 VAR_10;

 VAR_9 = &VAR_8->ccid3hctx_options_received;

 if (VAR_9->ccid3or_seqno != VAR_7->dccps_gsr) {
  VAR_9->ccid3or_seqno = VAR_7->dccps_gsr;
  VAR_9->ccid3or_loss_event_rate = ~0;
  VAR_9->ccid3or_loss_intervals_idx = 0;
  VAR_9->ccid3or_loss_intervals_len = 0;
  VAR_9->ccid3or_receive_rate = 0;
 }

 switch (VAR_2) {
 case 130:
  if (FUNC_7(VAR_3 != 4)) {
   FUNC_0("%s(%p), invalid len %d "
      "for TFRC_OPT_LOSS_EVENT_RATE\n",
      FUNC_3(VAR_1), VAR_1, VAR_3);
   VAR_6 = -VAR_0;
  } else {
   VAR_10 = FUNC_5((__be32 *)VAR_5);
   VAR_9->ccid3or_loss_event_rate = FUNC_6(VAR_10);
   FUNC_2("%s(%p), LOSS_EVENT_RATE=%u\n",
           FUNC_3(VAR_1), VAR_1,
           VAR_9->ccid3or_loss_event_rate);
  }
  break;
 case 129:
  VAR_9->ccid3or_loss_intervals_idx = VAR_4;
  VAR_9->ccid3or_loss_intervals_len = VAR_3;
  FUNC_2("%s(%p), LOSS_INTERVALS=(%u, %u)\n",
          FUNC_3(VAR_1), VAR_1,
          VAR_9->ccid3or_loss_intervals_idx,
          VAR_9->ccid3or_loss_intervals_len);
  break;
 case 128:
  if (FUNC_7(VAR_3 != 4)) {
   FUNC_0("%s(%p), invalid len %d "
      "for TFRC_OPT_RECEIVE_RATE\n",
      FUNC_3(VAR_1), VAR_1, VAR_3);
   VAR_6 = -VAR_0;
  } else {
   VAR_10 = FUNC_5((__be32 *)VAR_5);
   VAR_9->ccid3or_receive_rate = FUNC_6(VAR_10);
   FUNC_2("%s(%p), RECEIVE_RATE=%u\n",
           FUNC_3(VAR_1), VAR_1,
           VAR_9->ccid3or_receive_rate);
  }
  break;
 }

 return VAR_6;
}
