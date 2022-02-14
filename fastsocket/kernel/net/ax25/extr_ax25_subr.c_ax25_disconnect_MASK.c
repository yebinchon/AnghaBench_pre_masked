
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* sk; int state; } ;
typedef TYPE_1__ ax25_cb ;
struct TYPE_15__ {int sk_err; int (* sk_state_change ) (TYPE_2__*) ;int sk_shutdown; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;

void FUNC_13(ax25_cb *VAR_4, int VAR_5)
{
 FUNC_0(VAR_4);

 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
 FUNC_2(VAR_4);

 VAR_4->state = VAR_0;

 FUNC_1(VAR_4, VAR_5);

 if (VAR_4->sk != ((void*)0)) {
  FUNC_8();
  FUNC_6(VAR_4->sk);
  VAR_4->sk->sk_state = VAR_3;
  VAR_4->sk->sk_err = VAR_5;
  VAR_4->sk->sk_shutdown |= VAR_1;
  if (!FUNC_10(VAR_4->sk, VAR_2)) {
   VAR_4->sk->sk_state_change(VAR_4->sk);
   FUNC_11(VAR_4->sk, VAR_2);
  }
  FUNC_7(VAR_4->sk);
  FUNC_9();
 }
}
