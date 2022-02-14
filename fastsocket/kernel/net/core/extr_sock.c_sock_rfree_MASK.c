
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_rmem_alloc; } ;
struct sk_buff {int truesize; struct sock* sk; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct sock*,int ) ;

void FUNC_2(struct sk_buff *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 FUNC_0(VAR_0->truesize, &VAR_1->sk_rmem_alloc);
 FUNC_1(VAR_0->sk, VAR_0->truesize);
}
