
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_hist; } ;
struct TYPE_2__ {int dccps_gss; } ;


 int FUNC_0 (char*) ;
 struct ccid3_hc_tx_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct ccid3_hc_tx_sock*,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, int VAR_1,
        unsigned int VAR_2)
{
 struct ccid3_hc_tx_sock *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3, VAR_2);

 if (FUNC_4(&VAR_3->ccid3hctx_hist, FUNC_3(VAR_0)->dccps_gss))
  FUNC_0("packet history - out of memory!");
}
