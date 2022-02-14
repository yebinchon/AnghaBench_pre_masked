
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; int sk_receive_queue; } ;
struct TYPE_2__ {int peer_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 struct sock* FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, struct sock *VAR_3)
{
 if (!FUNC_0(&VAR_2->sk_receive_queue)) {
  FUNC_1(&VAR_2->sk_receive_queue);
  FUNC_6(&FUNC_5(VAR_2)->peer_wait);





  if (!FUNC_2(VAR_3, VAR_1) && FUNC_4(VAR_3) == VAR_2) {
   VAR_3->sk_err = VAR_0;
   VAR_3->sk_error_report(VAR_3);
  }
 }
}
