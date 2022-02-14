
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_4__ {scalar_t__ fr_fix; scalar_t__ fr_address; int fr_symbol; } ;
typedef TYPE_1__ fragS ;
typedef int asection ;
typedef scalar_t__ addressT ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,long) ;

__attribute__((used)) static int
FUNC_3 (fragS *VAR_0, asection *VAR_1, int VAR_2, long VAR_3)
{
  addressT VAR_4;
  offsetT VAR_5;
  offsetT VAR_6;


  if (!FUNC_1(VAR_0->fr_symbol)
      || VAR_1 != FUNC_0 (VAR_0->fr_symbol))
    return 4;

  VAR_5 = FUNC_2(VAR_0, VAR_3);
  VAR_4 = VAR_0->fr_address + VAR_0->fr_fix + 4;
  VAR_5 -= VAR_4;


  VAR_6 = 1 << VAR_2;
  if (VAR_5 >= VAR_6 || VAR_5 < -VAR_6)
    return 4;
  return 2;
}
