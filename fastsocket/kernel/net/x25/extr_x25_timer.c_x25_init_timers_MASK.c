
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {int timer; } ;
struct TYPE_2__ {unsigned long data; int * function; } ;
struct sock {TYPE_1__ sk_timer; } ;


 int FUNC_0 (int *,int ,unsigned long) ;
 int VAR_0 ;
 struct x25_sock* FUNC_1 (struct sock*) ;
 int VAR_1 ;

void FUNC_2(struct sock *VAR_2)
{
 struct x25_sock *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_3->timer, VAR_1, (unsigned long)VAR_2);


 VAR_2->sk_timer.data = (unsigned long)VAR_2;
 VAR_2->sk_timer.function = &VAR_0;
}
