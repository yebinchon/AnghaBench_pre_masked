
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nr_sock {int condition; scalar_t__ n2count; } ;


 int VAR_0 ;
 struct nr_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;

void FUNC_6(struct sock *VAR_1)
{
 struct nr_sock *VAR_2 = FUNC_0(VAR_1);

 VAR_2->condition = 0x00;
 VAR_2->n2count = 0;

 FUNC_5(VAR_1, VAR_0);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
