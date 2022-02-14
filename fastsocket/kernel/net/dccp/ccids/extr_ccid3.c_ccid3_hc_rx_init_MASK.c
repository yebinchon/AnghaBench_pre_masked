
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {int ccid3hcrx_hist; int ccid3hcrx_li_hist; int ccid3hcrx_state; } ;
struct ccid {int dummy; } ;


 int VAR_0 ;
 struct ccid3_hc_rx_sock* FUNC_0 (struct ccid*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ccid *VAR_1, struct sock *VAR_2)
{
 struct ccid3_hc_rx_sock *VAR_3 = FUNC_0(VAR_1);

 VAR_3->ccid3hcrx_state = VAR_0;
 FUNC_1(&VAR_3->ccid3hcrx_li_hist);
 return FUNC_2(&VAR_3->ccid3hcrx_hist);
}
