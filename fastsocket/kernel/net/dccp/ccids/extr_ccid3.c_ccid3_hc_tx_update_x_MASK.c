
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_x_recv; int ccid3hctx_x; scalar_t__ ccid3hctx_p; scalar_t__ ccid3hctx_x_calc; int ccid3hctx_t_ld; scalar_t__ ccid3hctx_rtt; scalar_t__ ccid3hctx_s; } ;
typedef scalar_t__ s64 ;
typedef int ktime_t ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (struct ccid3_hc_tx_sock*,int ) ;
 struct ccid3_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,unsigned int,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_3 (struct ccid3_hc_tx_sock*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 void* FUNC_6 (int,int) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_1, ktime_t *VAR_2)
{
 struct ccid3_hc_tx_sock *VAR_3 = FUNC_1(VAR_1);
 __u64 VAR_4 = 2 * VAR_3->ccid3hctx_x_recv;
 const __u64 VAR_5 = VAR_3->ccid3hctx_x;
 ktime_t VAR_6 = VAR_2 ? *VAR_2 : FUNC_4();







 if (FUNC_0(VAR_3, VAR_6) >= 2) {
  VAR_4 = FUNC_8(VAR_1);
  VAR_4 = FUNC_6(VAR_4, 2 * VAR_3->ccid3hctx_x_recv);
 }

 if (VAR_3->ccid3hctx_p > 0) {

  VAR_3->ccid3hctx_x = FUNC_7(((__u64)VAR_3->ccid3hctx_x_calc) << 6,
     VAR_4);
  VAR_3->ccid3hctx_x = FUNC_6(VAR_3->ccid3hctx_x,
     (((__u64)VAR_3->ccid3hctx_s) << 6) /
        VAR_0);

 } else if (FUNC_5(VAR_6, VAR_3->ccid3hctx_t_ld)
    - (s64)VAR_3->ccid3hctx_rtt >= 0) {

  VAR_3->ccid3hctx_x = FUNC_7(2 * VAR_3->ccid3hctx_x, VAR_4);
  VAR_3->ccid3hctx_x = FUNC_6(VAR_3->ccid3hctx_x,
       FUNC_9(((__u64)VAR_3->ccid3hctx_s) << 6,
           VAR_3->ccid3hctx_rtt));
  VAR_3->ccid3hctx_t_ld = VAR_6;
 }

 if (VAR_3->ccid3hctx_x != VAR_5) {
  FUNC_2("X_prev=%u, X_now=%u, X_calc=%u, "
          "X_recv=%u\n", (unsigned)(VAR_5 >> 6),
          (unsigned)(VAR_3->ccid3hctx_x >> 6),
          VAR_3->ccid3hctx_x_calc,
          (unsigned)(VAR_3->ccid3hctx_x_recv >> 6));

  FUNC_3(VAR_3);
 }
}
