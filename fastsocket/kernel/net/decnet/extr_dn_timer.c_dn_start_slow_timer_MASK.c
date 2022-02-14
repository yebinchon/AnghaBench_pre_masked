
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; scalar_t__ expires; } ;
struct sock {TYPE_1__ sk_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(struct sock *VAR_3)
{
 VAR_3->sk_timer.expires = VAR_2 + VAR_0;
 VAR_3->sk_timer.function = VAR_1;
 VAR_3->sk_timer.data = (unsigned long)VAR_3;

 FUNC_0(&VAR_3->sk_timer);
}
