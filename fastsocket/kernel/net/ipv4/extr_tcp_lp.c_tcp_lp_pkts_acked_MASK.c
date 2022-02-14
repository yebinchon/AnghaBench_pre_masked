
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rcv_tsecr; } ;
struct tcp_sock {unsigned int snd_cwnd; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct lp {int inference; scalar_t__ last_drop; int flag; int sowd; int owd_min; int owd_max; int owd_max_rsv; int remote_hz; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp* FUNC_0 (struct sock*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*,int,unsigned int,int ,int,int,int) ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3, u32 VAR_4, s32 VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_4(VAR_3);
 struct lp *VAR_7 = FUNC_0(VAR_3);

 if (VAR_5 > 0)
  FUNC_3(VAR_3, VAR_5);


 if (VAR_2 > VAR_6->rx_opt.rcv_tsecr)
  VAR_7->inference = 3 * (VAR_2 - VAR_6->rx_opt.rcv_tsecr);


 if (VAR_7->last_drop && (VAR_2 - VAR_7->last_drop < VAR_7->inference))
  VAR_7->flag |= VAR_0;
 else
  VAR_7->flag &= ~VAR_0;


 if (VAR_7->sowd >> 3 <
     VAR_7->owd_min + 15 * (VAR_7->owd_max - VAR_7->owd_min) / 100)
  VAR_7->flag |= VAR_1;
 else
  VAR_7->flag &= ~VAR_1;

 FUNC_2("TCP-LP: %05o|%5u|%5u|%15u|%15u|%15u\n", VAR_7->flag,
   VAR_6->snd_cwnd, VAR_7->remote_hz, VAR_7->owd_min, VAR_7->owd_max,
   VAR_7->sowd >> 3);

 if (VAR_7->flag & VAR_1)
  return;




 VAR_7->owd_min = VAR_7->sowd >> 3;
 VAR_7->owd_max = VAR_7->sowd >> 2;
 VAR_7->owd_max_rsv = VAR_7->sowd >> 2;



 if (VAR_7->flag & VAR_0)
  VAR_6->snd_cwnd = 1U;



 else
  VAR_6->snd_cwnd = FUNC_1(VAR_6->snd_cwnd >> 1U, 1U);


 VAR_7->last_drop = VAR_2;
}
