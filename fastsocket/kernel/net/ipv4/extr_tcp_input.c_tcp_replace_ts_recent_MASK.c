
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ saw_tstamp; } ;
struct tcp_sock {TYPE_1__ rx_opt; int rcv_wup; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct tcp_sock*) ;

__attribute__((used)) static inline void FUNC_3(struct tcp_sock *VAR_0, u32 VAR_1)
{
 if (VAR_0->rx_opt.saw_tstamp && !FUNC_0(VAR_1, VAR_0->rcv_wup)) {







  if (FUNC_1(&VAR_0->rx_opt, 0))
   FUNC_2(VAR_0);
 }
}
