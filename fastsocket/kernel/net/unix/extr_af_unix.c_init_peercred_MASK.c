
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ sk_peer_cred; int sk_peer_pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 FUNC_3(FUNC_4(VAR_1)->sk_peer_pid);
 if (FUNC_4(VAR_1)->sk_peer_cred)
  FUNC_2(FUNC_4(VAR_1)->sk_peer_cred);
 FUNC_4(VAR_1)->sk_peer_pid = FUNC_1(FUNC_5(VAR_0));
 FUNC_4(VAR_1)->sk_peer_cred = FUNC_0();
}
