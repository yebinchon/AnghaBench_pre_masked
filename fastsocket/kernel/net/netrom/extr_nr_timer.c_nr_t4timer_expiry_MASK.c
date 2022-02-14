
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int condition; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct sock *VAR_2 = (struct sock *)VAR_1;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2)->condition &= ~VAR_0;
 FUNC_1(VAR_2);
}
