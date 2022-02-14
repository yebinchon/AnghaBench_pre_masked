
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_timer; int sk_state; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int FUNC_1 (struct sock*,int *) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0)
{
 FUNC_0("sock %p state %d", VAR_0, VAR_0->sk_state);
 FUNC_1(VAR_0, &VAR_0->sk_timer);
}
