
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int ato; scalar_t__ pingpong; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_1)
{
 struct inet_connection_sock *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 VAR_2->icsk_ack.pingpong = 0;
 VAR_2->icsk_ack.ato = VAR_0;
}
