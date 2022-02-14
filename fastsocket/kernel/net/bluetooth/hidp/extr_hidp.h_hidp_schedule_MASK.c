
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_sleep; } ;
struct hidp_session {TYPE_2__* intr_sock; TYPE_1__* ctrl_sock; } ;
struct TYPE_4__ {struct sock* sk; } ;
struct TYPE_3__ {struct sock* sk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct hidp_session *VAR_0)
{
 struct sock *VAR_1 = VAR_0->ctrl_sock->sk;
 struct sock *VAR_2 = VAR_0->intr_sock->sk;

 FUNC_0(VAR_1->sk_sleep);
 FUNC_0(VAR_2->sk_sleep);
}
