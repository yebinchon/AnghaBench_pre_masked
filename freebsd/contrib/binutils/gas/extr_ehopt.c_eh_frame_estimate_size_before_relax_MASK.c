
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_3__ {int fr_subtype; int fr_symbol; } ;
typedef TYPE_1__ fragS ;


 int FUNC_0 (int ) ;

int
FUNC_1 (fragS *VAR_0)
{
  offsetT VAR_1;
  int VAR_2 = VAR_0->fr_subtype >> 3;
  int VAR_3;

  VAR_1 = FUNC_0 (VAR_0->fr_symbol);

  if (VAR_2 > 0 && VAR_1 % VAR_2 == 0 && VAR_1 / VAR_2 < 0x40)
    VAR_3 = 0;
  else if (VAR_1 < 0x100)
    VAR_3 = 1;
  else if (VAR_1 < 0x10000)
    VAR_3 = 2;
  else
    VAR_3 = 4;

  VAR_0->fr_subtype = (VAR_0->fr_subtype & ~7) | VAR_3;

  return VAR_3;
}
