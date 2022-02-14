
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_4__ {int fr_address; int fr_fix; int fr_symbol; } ;
typedef TYPE_1__ fragS ;
typedef int asection ;
typedef int addressT ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,long) ;

__attribute__((used)) static int
FUNC_3 (fragS *VAR_0, asection *VAR_1, long VAR_2)
{
  addressT VAR_3;
  offsetT VAR_4;


  if (!FUNC_1(VAR_0->fr_symbol)
      || VAR_1 != FUNC_0 (VAR_0->fr_symbol))
    return 4;

  VAR_4 = FUNC_2(VAR_0, VAR_2);
  VAR_3 = VAR_0->fr_address + VAR_0->fr_fix;
  VAR_3 = (VAR_3 + 4) & ~3;

  if (VAR_4 & 3)
    return 4;
  VAR_4 -= VAR_3;
  if (VAR_4 < 0 || VAR_4 > 1020)
    return 4;
  return 2;
}
