
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct TYPE_4__ {int * icsk_af_ops; } ;
struct TYPE_3__ {int (* hash ) (struct sock*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3)
{
 if (VAR_3->sk_state != VAR_0) {
  if (FUNC_1(VAR_3)->icsk_af_ops == &VAR_1) {
   VAR_2.hash(VAR_3);
   return;
  }
  FUNC_2();
  FUNC_0(VAR_3);
  FUNC_3();
 }
}
