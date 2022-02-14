
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_hc_rx_insert_options; } ;
struct ccid3_hc_rx_sock {scalar_t__ ccid3hcrx_state; unsigned int ccid3hcrx_pinv; scalar_t__ ccid3hcrx_bytes_recv; int ccid3hcrx_last_counter; int ccid3hcrx_tstamp_last_feedback; int ccid3hcrx_x_recv; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
typedef enum ccid3_fback_type { ____Placeholder_ccid3_fback_type } ccid3_fback_type ;
struct TYPE_2__ {int dccph_ccval; } ;





 int FUNC_0 (char*,long) ;
 scalar_t__ VAR_0 ;
 struct ccid3_hc_rx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,long,int ,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (struct sock*) ;
 struct dccp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_1,
          const struct sk_buff *VAR_2,
          enum ccid3_fback_type VAR_3)
{
 struct ccid3_hc_rx_sock *VAR_4 = FUNC_1(VAR_1);
 struct dccp_sock *VAR_5 = FUNC_5(VAR_1);
 ktime_t VAR_6;
 s64 VAR_7 = 0;

 if (FUNC_9(VAR_4->ccid3hcrx_state == VAR_0))
  return;

 VAR_6 = FUNC_6();

 switch (VAR_3) {
 case 130:
  VAR_4->ccid3hcrx_x_recv = 0;
  VAR_4->ccid3hcrx_pinv = ~0U;
  break;
 case 129:
  if (VAR_4->ccid3hcrx_x_recv > 0)
   break;

 case 128:
  VAR_7 = FUNC_7(VAR_6, VAR_4->ccid3hcrx_tstamp_last_feedback);
  if (VAR_7 <= 0)
   FUNC_0("delta (%ld) <= 0", (long)VAR_7);
  else
   VAR_4->ccid3hcrx_x_recv =
    FUNC_8(VAR_4->ccid3hcrx_bytes_recv, VAR_7);
  break;
 default:
  return;
 }

 FUNC_2("Interval %ldusec, X_recv=%u, 1/p=%u\n", (long)VAR_7,
         VAR_4->ccid3hcrx_x_recv, VAR_4->ccid3hcrx_pinv);

 VAR_4->ccid3hcrx_tstamp_last_feedback = VAR_6;
 VAR_4->ccid3hcrx_last_counter = FUNC_3(VAR_2)->dccph_ccval;
 VAR_4->ccid3hcrx_bytes_recv = 0;

 VAR_5->dccps_hc_rx_insert_options = 1;
 FUNC_4(VAR_1);
}
