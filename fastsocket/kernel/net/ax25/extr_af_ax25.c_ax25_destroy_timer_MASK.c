
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {struct sock* sk; } ;
typedef TYPE_1__ ax25_cb ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 ax25_cb *VAR_1=(ax25_cb *)VAR_0;
 struct sock *VAR_2;

 VAR_2=VAR_1->sk;

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
}
