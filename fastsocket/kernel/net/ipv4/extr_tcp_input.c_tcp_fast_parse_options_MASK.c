
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int doff; } ;
struct TYPE_2__ {scalar_t__ tstamp_ok; scalar_t__ saw_tstamp; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcp_sock*,struct tcphdr*) ;
 int FUNC_1 (struct sk_buff*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct tcphdr *VAR_2,
      struct tcp_sock *VAR_3)
{
 if (VAR_2->doff == sizeof(struct tcphdr) >> 2) {
  VAR_3->rx_opt.saw_tstamp = 0;
  return 0;
 } else if (VAR_3->rx_opt.tstamp_ok &&
     VAR_2->doff == (sizeof(struct tcphdr)>>2)+(VAR_0>>2)) {
  if (FUNC_0(VAR_3, VAR_2))
   return 1;
 }
 FUNC_1(VAR_1, &VAR_3->rx_opt, 1);
 return 1;
}
