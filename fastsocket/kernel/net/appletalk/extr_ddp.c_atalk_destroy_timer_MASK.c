
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct sock {TYPE_1__ sk_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct sock *VAR_3 = (struct sock *)VAR_2;

 if (FUNC_1(VAR_3)) {
  VAR_3->sk_timer.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_3->sk_timer);
 } else
  FUNC_2(VAR_3);
}
