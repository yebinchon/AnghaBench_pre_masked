
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {scalar_t__ t2; int t2timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct nr_sock* FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_1)
{
 struct nr_sock *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->t2timer, VAR_0 + VAR_2->t2);
}
