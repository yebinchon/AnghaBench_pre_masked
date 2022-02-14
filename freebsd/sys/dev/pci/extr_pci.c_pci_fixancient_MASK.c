
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdrtype; scalar_t__ baseclass; scalar_t__ subclass; } ;
typedef TYPE_1__ pcicfgregs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_0(pcicfgregs *VAR_5)
{
 if ((VAR_5->hdrtype & VAR_1) != VAR_3)
  return;


 if (VAR_5->baseclass == VAR_0 && VAR_5->subclass == VAR_4)
  VAR_5->hdrtype = VAR_2;
}
