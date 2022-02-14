
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ probe_size; scalar_t__ search_high; } ;
struct inet_connection_sock {TYPE_1__ icsk_mtup; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0)
{
 struct inet_connection_sock *VAR_1 = FUNC_0(VAR_0);

 VAR_1->icsk_mtup.search_high = VAR_1->icsk_mtup.probe_size - 1;
 VAR_1->icsk_mtup.probe_size = 0;
}
