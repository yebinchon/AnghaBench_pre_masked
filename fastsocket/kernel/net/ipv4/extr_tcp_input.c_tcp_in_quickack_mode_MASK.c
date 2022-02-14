
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int pingpong; scalar_t__ quick; } ;
struct inet_connection_sock {TYPE_1__ icsk_ack; } ;


 struct inet_connection_sock* FUNC_0 (struct sock const*) ;

__attribute__((used)) static inline int FUNC_1(const struct sock *VAR_0)
{
 const struct inet_connection_sock *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->icsk_ack.quick && !VAR_1->icsk_ack.pingpong;
}
