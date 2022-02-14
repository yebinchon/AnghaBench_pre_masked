
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; scalar_t__ sk_err; int sk_state; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5)
{
 struct sock *VAR_6 = (struct sock *)VAR_5;

 FUNC_0(VAR_6);
 FUNC_2(VAR_6);

 FUNC_5(VAR_6, VAR_0);
 FUNC_3(VAR_6)->state = VAR_1;

 FUNC_4(VAR_6);

 VAR_6->sk_state = VAR_4;
 VAR_6->sk_err = 0;
 VAR_6->sk_shutdown |= VAR_2;

 if (!FUNC_6(VAR_6, VAR_3)) {
  VAR_6->sk_state_change(VAR_6);
  FUNC_7(VAR_6, VAR_3);
 }
 FUNC_1(VAR_6);
}
