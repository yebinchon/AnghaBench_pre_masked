
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {scalar_t__ ccid3hctx_state; int ccid3hctx_t_rto; scalar_t__ ccid3hctx_p; int ccid3hctx_x; int ccid3hctx_x_calc; int ccid3hctx_x_recv; int ccid3hctx_t_ipi; int ccid3hctx_no_feedback_timer; scalar_t__ ccid3hctx_s; } ;
typedef int __u64 ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 struct ccid3_hc_tx_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int *) ;
 int FUNC_6 (char*,unsigned long long,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct ccid3_hc_tx_sock*) ;
 int FUNC_9 (struct sock*) ;
 scalar_t__ VAR_5 ;
 void* FUNC_10 (int,int) ;
 int FUNC_11 (struct sock*,int *,scalar_t__) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (unsigned long) ;

__attribute__((used)) static void FUNC_16(unsigned long VAR_6)
{
 struct sock *VAR_7 = (struct sock *)VAR_6;
 struct ccid3_hc_tx_sock *VAR_8 = FUNC_4(VAR_7);
 unsigned long VAR_9 = VAR_4 / 5;

 FUNC_1(VAR_7);
 if (FUNC_12(VAR_7)) {


  goto restart_timer;
 }

 FUNC_6("%s(%p, state=%s) - entry \n", FUNC_9(VAR_7), VAR_7,
         FUNC_7(VAR_8->ccid3hctx_state));

 if (VAR_8->ccid3hctx_state == VAR_1)
  FUNC_3(VAR_7, VAR_2);
 else if (VAR_8->ccid3hctx_state != VAR_2)
  goto out;




 if (VAR_8->ccid3hctx_t_rto == 0 ||
     VAR_8->ccid3hctx_p == 0) {


  VAR_8->ccid3hctx_x = FUNC_10(VAR_8->ccid3hctx_x / 2,
     (((__u64)VAR_8->ccid3hctx_s) << 6) /
            VAR_3);
  FUNC_8(VAR_8);
 } else {
  FUNC_0(VAR_8->ccid3hctx_p && !VAR_8->ccid3hctx_x_calc);

  if (VAR_8->ccid3hctx_x_calc > (VAR_8->ccid3hctx_x_recv >> 5))
   VAR_8->ccid3hctx_x_recv =
    FUNC_10(VAR_8->ccid3hctx_x_recv / 2,
        (((__u64)VAR_8->ccid3hctx_s) << 6) /
             (2 * VAR_3));
  else {
   VAR_8->ccid3hctx_x_recv = VAR_8->ccid3hctx_x_calc;
   VAR_8->ccid3hctx_x_recv <<= 4;
  }
  FUNC_5(VAR_7, ((void*)0));
 }
 FUNC_6("Reduced X to %llu/64 bytes/sec\n",
   (unsigned long long)VAR_8->ccid3hctx_x);





 if (FUNC_14(VAR_8->ccid3hctx_t_rto == 0))
  VAR_9 = VAR_0;
 else
  VAR_9 = FUNC_10(VAR_8->ccid3hctx_t_rto, 2 * VAR_8->ccid3hctx_t_ipi);

restart_timer:
 FUNC_11(VAR_7, &VAR_8->ccid3hctx_no_feedback_timer,
      VAR_5 + FUNC_15(VAR_9));
out:
 FUNC_2(VAR_7);
 FUNC_13(VAR_7);
}
