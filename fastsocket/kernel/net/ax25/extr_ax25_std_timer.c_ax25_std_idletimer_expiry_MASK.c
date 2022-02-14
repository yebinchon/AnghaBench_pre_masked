
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* sk; int state; scalar_t__ n2count; } ;
typedef TYPE_1__ ax25_cb ;
struct TYPE_15__ {int (* sk_state_change ) (TYPE_2__*) ;int sk_shutdown; scalar_t__ sk_err; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;

void FUNC_11(ax25_cb *VAR_7)
{
 FUNC_1(VAR_7);

 VAR_7->n2count = 0;
 FUNC_2(VAR_7, VAR_1, VAR_2, VAR_0);
 VAR_7->state = VAR_3;

 FUNC_0(VAR_7);
 FUNC_3(VAR_7);
 FUNC_4(VAR_7);
 FUNC_5(VAR_7);

 if (VAR_7->sk != ((void*)0)) {
  FUNC_6(VAR_7->sk);
  VAR_7->sk->sk_state = VAR_6;
  VAR_7->sk->sk_err = 0;
  VAR_7->sk->sk_shutdown |= VAR_4;
  if (!FUNC_8(VAR_7->sk, VAR_5)) {
   VAR_7->sk->sk_state_change(VAR_7->sk);
   FUNC_9(VAR_7->sk, VAR_5);
  }
  FUNC_7(VAR_7->sk);
 }
}
