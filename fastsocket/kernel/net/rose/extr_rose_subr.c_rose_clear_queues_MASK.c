
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct TYPE_2__ {int ack_queue; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sock *VAR_0)
{
 FUNC_1(&VAR_0->sk_write_queue);
 FUNC_1(&FUNC_0(VAR_0)->ack_queue);
}
