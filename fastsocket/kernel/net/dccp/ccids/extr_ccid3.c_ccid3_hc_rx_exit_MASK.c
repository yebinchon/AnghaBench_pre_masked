
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ccid3_hc_rx_sock {int ccid3hcrx_li_hist; int ccid3hcrx_hist; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ) ;
 struct ccid3_hc_rx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct ccid3_hc_rx_sock *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1, VAR_0);

 FUNC_3(&VAR_2->ccid3hcrx_hist);
 FUNC_2(&VAR_2->ccid3hcrx_li_hist);
}
