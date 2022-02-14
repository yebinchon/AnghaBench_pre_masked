
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_hist; int ccid3hctx_no_feedback_timer; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ) ;
 struct ccid3_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct ccid3_hc_tx_sock *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);
 FUNC_2(VAR_1, &VAR_2->ccid3hctx_no_feedback_timer);

 FUNC_3(&VAR_2->ccid3hctx_hist);
}
