
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ccid3_hc_tx_sock {int ccid3hctx_t_ipi; int ccid3hctx_x; scalar_t__ ccid3hctx_s; int ccid3hctx_delta; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,scalar_t__,unsigned int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ccid3_hc_tx_sock *VAR_2)
{

 VAR_2->ccid3hctx_t_ipi = FUNC_2(((u64)VAR_2->ccid3hctx_s) << 6,
          VAR_2->ccid3hctx_x);


 VAR_2->ccid3hctx_delta = FUNC_1(VAR_1, VAR_2->ccid3hctx_t_ipi / 2,
        VAR_0);

 FUNC_0("t_ipi=%u, delta=%u, s=%u, X=%u\n",
         VAR_2->ccid3hctx_t_ipi, VAR_2->ccid3hctx_delta,
         VAR_2->ccid3hctx_s, (unsigned)(VAR_2->ccid3hctx_x >> 6));

}
