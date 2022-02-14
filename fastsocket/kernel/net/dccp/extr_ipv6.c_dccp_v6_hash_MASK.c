
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {int * icsk_af_ops; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 if (VAR_2->sk_state != VAR_0) {
  if (FUNC_1(VAR_2)->icsk_af_ops == &VAR_1) {
   FUNC_2(VAR_2);
   return;
  }
  FUNC_3();
  FUNC_0(VAR_2);
  FUNC_4();
 }
}
