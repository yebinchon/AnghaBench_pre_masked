
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct msghdr {int dummy; } ;
struct kiocb {int dummy; } ;
struct inet_sock {int dport; int daddr; int sport; int saddr; } ;
struct ccid3_hc_tx_sock {int ccid3hctx_x_recv; int ccid3hctx_x; int ccid3hctx_t_ipi; int ccid3hctx_x_calc; int ccid3hctx_p; int ccid3hctx_rtt; int ccid3hctx_s; } ;


 scalar_t__ VAR_0 ;
 struct ccid3_hc_tx_sock* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,int *,scalar_t__,int *,scalar_t__,size_t,...) ;

__attribute__((used)) static int FUNC_7(struct kiocb *VAR_2, struct sock *VAR_3,
    struct msghdr *VAR_4, size_t VAR_5)
{
 const struct inet_sock *VAR_6 = FUNC_3(VAR_3);
 struct ccid3_hc_tx_sock *VAR_7 = ((void*)0);

 if (FUNC_1(FUNC_2(VAR_3)) == VAR_0)
  VAR_7 = FUNC_0(VAR_3);

 if (VAR_1 == 0 || FUNC_5(VAR_6->dport) == VAR_1 ||
     FUNC_5(VAR_6->sport) == VAR_1) {
  if (VAR_7)
   FUNC_6("%pI4:%u %pI4:%u %d %d %d %d %u "
          "%llu %llu %d\n",
          &VAR_6->saddr, FUNC_5(VAR_6->sport),
          &VAR_6->daddr, FUNC_5(VAR_6->dport), VAR_5,
          VAR_7->ccid3hctx_s, VAR_7->ccid3hctx_rtt,
          VAR_7->ccid3hctx_p, VAR_7->ccid3hctx_x_calc,
          VAR_7->ccid3hctx_x_recv >> 6,
          VAR_7->ccid3hctx_x >> 6, VAR_7->ccid3hctx_t_ipi);
  else
   FUNC_6("%pI4:%u %pI4:%u %d\n",
          &VAR_6->saddr, FUNC_5(VAR_6->sport),
          &VAR_6->daddr, FUNC_5(VAR_6->dport), VAR_5);
 }

 FUNC_4();
 return 0;
}
