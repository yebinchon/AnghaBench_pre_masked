
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void
FUNC_3(struct sock *VAR_1)
{
 if (VAR_1->sk_state == VAR_0)
  FUNC_1(FUNC_0(VAR_1));
 else
  FUNC_2(VAR_1);
}
