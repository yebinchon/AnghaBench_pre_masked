
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pFreeSRB; } ;
struct TYPE_5__ {struct TYPE_5__* pNextSRB; } ;
typedef TYPE_1__* PSRB ;
typedef TYPE_2__* PACB ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static PSRB
FUNC_2(PACB VAR_0)
{
 int VAR_1;
 PSRB VAR_2;

 VAR_1 = FUNC_0();
     VAR_2 = VAR_0->pFreeSRB;
 if (VAR_2) {
  VAR_0->pFreeSRB = VAR_2->pNextSRB;
  VAR_2->pNextSRB = ((void*)0);
 }
 FUNC_1(VAR_1);
     return (VAR_2);
}
