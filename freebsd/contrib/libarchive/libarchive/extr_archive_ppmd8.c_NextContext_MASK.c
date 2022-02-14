
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ OrderFall; scalar_t__ MaxContext; scalar_t__ MinContext; int * UnitsStart; int FoundState; } ;
typedef scalar_t__ CTX_PTR ;
typedef TYPE_1__ CPpmd8 ;
typedef int Byte ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(CPpmd8 *VAR_0)
{
  CTX_PTR VAR_1 = FUNC_0(FUNC_1(VAR_0->FoundState));
  if (VAR_0->OrderFall == 0 && (Byte *)VAR_1 >= VAR_0->UnitsStart)
    VAR_0->MinContext = VAR_0->MaxContext = VAR_1;
  else
  {
    FUNC_2(VAR_0);
    VAR_0->MinContext = VAR_0->MaxContext;
  }
}
