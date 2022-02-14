
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u32 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct dccp_sock {long dccps_syn_rtt; int dccps_hc_tx_insert_options; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_state; scalar_t__ ccid3hctx_s; long ccid3hctx_rtt; scalar_t__ ccid3hctx_x; int ccid3hctx_t_ipi; void* ccid3hctx_t_nom; int ccid3hctx_last_win_count; int ccid3hctx_delta; void* ccid3hctx_t_ld; void* ccid3hctx_t_last_win_count; int ccid3hctx_no_feedback_timer; } ;
typedef int s64 ;
typedef void* ktime_t ;
struct TYPE_2__ {int dccpd_ccval; } ;


 int FUNC_0 (char*,int ,struct sock*) ;
 long VAR_0 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_2 (struct sock*,int) ;
 struct ccid3_hc_tx_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct ccid3_hc_tx_sock*,void*) ;
 int FUNC_5 (char*,long) ;
 int FUNC_6 (struct ccid3_hc_tx_sock*) ;
 int FUNC_7 (struct sock*) ;
 struct dccp_sock* FUNC_8 (struct sock*) ;
 scalar_t__ VAR_4 ;
 void* FUNC_9 (void*,int ) ;
 void* FUNC_10 () ;
 int FUNC_11 (void*,void*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct dccp_sock *VAR_7 = FUNC_8(VAR_5);
 struct ccid3_hc_tx_sock *VAR_8 = FUNC_3(VAR_5);
 ktime_t VAR_9 = FUNC_10();
 s64 VAR_10;






 if (FUNC_14(VAR_6->len == 0))
  return -VAR_1;

 switch (VAR_8->ccid3hctx_state) {
 case 129:
  FUNC_13(VAR_5, &VAR_8->ccid3hctx_no_feedback_timer,
          (VAR_4 +
    FUNC_15(VAR_3)));
  VAR_8->ccid3hctx_last_win_count = 0;
  VAR_8->ccid3hctx_t_last_win_count = VAR_9;


  VAR_8->ccid3hctx_t_nom = VAR_9;

  VAR_8->ccid3hctx_s = VAR_6->len;






  if (VAR_7->dccps_syn_rtt) {
   FUNC_5("SYN RTT = %uus\n", VAR_7->dccps_syn_rtt);
   VAR_8->ccid3hctx_rtt = VAR_7->dccps_syn_rtt;
   VAR_8->ccid3hctx_x = FUNC_12(VAR_5);
   VAR_8->ccid3hctx_t_ld = VAR_9;
  } else {






   VAR_8->ccid3hctx_rtt = VAR_0;
   VAR_8->ccid3hctx_x = VAR_8->ccid3hctx_s;
   VAR_8->ccid3hctx_x <<= 6;
  }
  FUNC_6(VAR_8);

  FUNC_2(VAR_5, 130);
  break;
 case 130:
 case 131:
  VAR_10 = FUNC_11(VAR_8->ccid3hctx_t_nom, VAR_9);
  FUNC_5("delay=%ld\n", (long)VAR_10);
  if (VAR_10 - (s64)VAR_8->ccid3hctx_delta >= 1000)
   return (u32)VAR_10 / 1000L;

  FUNC_4(VAR_8, VAR_9);
  break;
 case 128:
  FUNC_0("%s(%p) - Illegal state TERM", FUNC_7(VAR_5), VAR_5);
  return -VAR_2;
 }


 VAR_7->dccps_hc_tx_insert_options = 1;
 FUNC_1(VAR_6)->dccpd_ccval = VAR_8->ccid3hctx_last_win_count;


 VAR_8->ccid3hctx_t_nom = FUNC_9(VAR_8->ccid3hctx_t_nom,
          VAR_8->ccid3hctx_t_ipi);
 return 0;
}
