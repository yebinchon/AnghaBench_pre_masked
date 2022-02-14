
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_no_feedback_timer; int * ccid3hctx_hist; int ccid3hctx_state; } ;
struct ccid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccid3_hc_tx_sock* FUNC_0 (struct ccid*) ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ccid *VAR_2, struct sock *VAR_3)
{
 struct ccid3_hc_tx_sock *VAR_4 = FUNC_0(VAR_2);

 VAR_4->ccid3hctx_state = VAR_0;
 VAR_4->ccid3hctx_hist = ((void*)0);
 FUNC_1(&VAR_4->ccid3hctx_no_feedback_timer,
   VAR_1, (unsigned long)VAR_3);

 return 0;
}
