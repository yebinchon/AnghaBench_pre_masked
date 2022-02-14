
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int rcv_mss; unsigned int quick; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;
struct TYPE_4__ {int rcv_wnd; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 TYPE_2__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct inet_connection_sock *VAR_2 = FUNC_0(VAR_1);
 unsigned VAR_3 = FUNC_2(VAR_1)->rcv_wnd / (2 * VAR_2->icsk_ack.rcv_mss);

 if (VAR_3 == 0)
  VAR_3 = 2;
 if (VAR_3 > VAR_2->icsk_ack.quick)
  VAR_2->icsk_ack.quick = FUNC_1(VAR_3, VAR_0);
}
