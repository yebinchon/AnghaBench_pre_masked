
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;
struct sk_filter {int rcu; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (struct sk_filter*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, struct sk_filter *VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3, &VAR_1->sk_omem_alloc);
 FUNC_1(&VAR_2->rcu, VAR_0);
}
