
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct inet_cork {int dummy; } ;
struct TYPE_2__ {int cork; } ;


 int FUNC_0 (struct sock*,int *,struct inet_cork*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->sk_write_queue,
      (struct inet_cork *)&FUNC_1(VAR_0)->cork);
}
