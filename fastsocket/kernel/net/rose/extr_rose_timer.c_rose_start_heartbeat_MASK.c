
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; scalar_t__ expires; int * function; } ;
struct sock {TYPE_1__ sk_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct sock *VAR_3)
{
 FUNC_1(&VAR_3->sk_timer);

 VAR_3->sk_timer.data = (unsigned long)VAR_3;
 VAR_3->sk_timer.function = &VAR_2;
 VAR_3->sk_timer.expires = VAR_1 + 5 * VAR_0;

 FUNC_0(&VAR_3->sk_timer);
}
