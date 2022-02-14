
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int sk_rcvbuf; int sk_rmem_alloc; int sk_state; } ;
struct TYPE_6__ {int state; int condition; struct sock* sk; } ;
typedef TYPE_1__ ax25_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

void FUNC_9(ax25_cb *VAR_8)
{
 struct sock *VAR_9 = VAR_8->sk;

 if (VAR_9)
  FUNC_4(VAR_9);

 switch (VAR_8->state) {
 case 130:


  if (!VAR_9 || FUNC_6(VAR_9, VAR_6) ||
      (VAR_9->sk_state == VAR_7 &&
       FUNC_6(VAR_9, VAR_5))) {
   if (VAR_9) {
    FUNC_7(VAR_9);
    FUNC_1(VAR_8);
    FUNC_5(VAR_9);
    FUNC_8(VAR_9);
   } else
    FUNC_1(VAR_8);
   return;
  }
  break;

 case 129:
 case 128:



  if (VAR_9 != ((void*)0)) {
   if (FUNC_0(&VAR_9->sk_rmem_alloc) <
       (VAR_9->sk_rcvbuf >> 1) &&
       (VAR_8->condition & VAR_1)) {
    VAR_8->condition &= ~VAR_1;
    VAR_8->condition &= ~VAR_0;
    FUNC_2(VAR_8, VAR_4, VAR_2, VAR_3);
    break;
   }
  }
 }

 if (VAR_9)
  FUNC_5(VAR_9);

 FUNC_3(VAR_8);
}
