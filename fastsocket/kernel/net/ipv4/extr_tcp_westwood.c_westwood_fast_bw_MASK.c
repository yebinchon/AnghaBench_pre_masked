
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct westwood {scalar_t__ snd_una; int bk; } ;
struct tcp_sock {scalar_t__ snd_una; } ;
struct sock {int dummy; } ;


 struct westwood* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct westwood*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_1(VAR_0);
 struct westwood *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(VAR_0);

 VAR_2->bk += VAR_1->snd_una - VAR_2->snd_una;
 VAR_2->snd_una = VAR_1->snd_una;
 FUNC_2(VAR_2);
}
