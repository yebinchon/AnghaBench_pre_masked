
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_timer; int sk_state; } ;


 int FUNC_0 (char*,struct sock*,int ,long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sock*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1, long VAR_2)
{
 FUNC_0("sock %p state %d timeout %ld", VAR_1, VAR_1->sk_state, VAR_2);
 FUNC_1(VAR_1, &VAR_1->sk_timer, VAR_0 + VAR_2);
}
