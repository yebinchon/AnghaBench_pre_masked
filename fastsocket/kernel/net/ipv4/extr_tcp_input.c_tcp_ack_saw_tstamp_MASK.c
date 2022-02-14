
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rcv_tsecr; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;


 struct tcp_sock* FUNC_0 (struct sock*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sock*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, int VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0 - VAR_3->rx_opt.rcv_tsecr);
}
