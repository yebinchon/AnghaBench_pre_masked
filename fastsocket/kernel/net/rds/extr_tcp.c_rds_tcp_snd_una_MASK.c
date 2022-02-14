
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rds_tcp_connection {TYPE_1__* t_sock; } ;
struct TYPE_4__ {int snd_una; } ;
struct TYPE_3__ {int sk; } ;


 TYPE_2__* FUNC_0 (int ) ;

u32 FUNC_1(struct rds_tcp_connection *VAR_0)
{
 return FUNC_0(VAR_0->t_sock->sk)->snd_una;
}
