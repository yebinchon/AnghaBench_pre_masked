
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_sleep; } ;
struct cmtp_session {TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct cmtp_session *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sock->sk;

 FUNC_0(VAR_1->sk_sleep);
}
