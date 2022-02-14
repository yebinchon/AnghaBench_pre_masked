
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int offsetT ;
struct TYPE_3__ {int fr_offset; scalar_t__ fr_symbol; } ;
typedef TYPE_1__ fragS ;



__attribute__((used)) static int
FUNC_0 (fragS *VAR_0, int VAR_1, int VAR_2)
{
  offsetT VAR_3;
  offsetT VAR_4;
  offsetT VAR_5;


  if (VAR_0->fr_symbol)
    return 4;

  VAR_5 = (1 << VAR_2) - 1;
  VAR_4 = (1 << (VAR_2 + VAR_1)) - (1 << VAR_2);
  VAR_3 = VAR_0->fr_offset;

  if (VAR_3 & VAR_5)
    return 4;
  if (VAR_3 & ~VAR_4)
    return 4;
  return 2;
}
