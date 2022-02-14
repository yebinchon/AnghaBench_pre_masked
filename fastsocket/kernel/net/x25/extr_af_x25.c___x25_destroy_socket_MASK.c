
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; scalar_t__ expires; } ;
struct sock {TYPE_2__ sk_timer; int sk_receive_queue; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 struct sk_buff* FUNC_4 (int *) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int VAR_4 ;
 int FUNC_7 (struct sock*) ;
 TYPE_1__* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_5)
{
 struct sk_buff *VAR_6;

 FUNC_10(VAR_5);
 FUNC_11(VAR_5);

 FUNC_7(VAR_5);
 FUNC_6(VAR_5);

 while ((VAR_6 = FUNC_4(&VAR_5->sk_receive_queue)) != ((void*)0)) {
  if (VAR_6->sk != VAR_5) {



   FUNC_5(VAR_6->sk, VAR_1);
   FUNC_9(VAR_6->sk);
   FUNC_8(VAR_6->sk)->state = VAR_2;
  }

  FUNC_2(VAR_6);
 }

 if (FUNC_3(VAR_5)) {

  VAR_5->sk_timer.expires = VAR_3 + 10 * VAR_0;
  VAR_5->sk_timer.function = VAR_4;
  VAR_5->sk_timer.data = (unsigned long)VAR_5;
  FUNC_1(&VAR_5->sk_timer);
 } else {

  FUNC_0(VAR_5);
 }
}
