
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_3)
{
 struct sock *VAR_4 = (struct sock *)VAR_3;

 FUNC_0(VAR_4);
 if (FUNC_3(VAR_4))
  goto restart_heartbeat;

 switch (FUNC_6(VAR_4)->state) {

  case 129:





   if (FUNC_2(VAR_4, VAR_1) ||
       (VAR_4->sk_state == VAR_2 &&
        FUNC_2(VAR_4, VAR_0))) {
    FUNC_1(VAR_4);
    FUNC_5(VAR_4);
    return;
   }
   break;

  case 128:



   FUNC_4(VAR_4);
   break;
 }
restart_heartbeat:
 FUNC_7(VAR_4);
 FUNC_1(VAR_4);
}
