
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcv_tsecr; scalar_t__ saw_tstamp; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct sock*,scalar_t__ const,int const) ;
 int FUNC_1 (struct sock*,int const) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_0, const int VAR_1,
          const s32 VAR_2)
{
 const struct tcp_sock *VAR_3 = FUNC_2(VAR_0);

 if (VAR_3->rx_opt.saw_tstamp && VAR_3->rx_opt.rcv_tsecr)
  FUNC_1(VAR_0, VAR_1);
 else if (VAR_2 >= 0)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}
