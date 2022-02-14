
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vegas {int baseRTT; } ;
struct sock {int dummy; } ;


 struct vegas* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0)
{
 struct vegas *VAR_1 = FUNC_0(VAR_0);

 VAR_1->baseRTT = 0x7fffffff;
 FUNC_1(VAR_0);
}
