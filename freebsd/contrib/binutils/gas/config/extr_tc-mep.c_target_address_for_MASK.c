
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_3__ {int fr_offset; int * fr_symbol; } ;
typedef TYPE_1__ fragS ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1 (fragS *VAR_0)
{
  int VAR_1 = VAR_0->fr_offset;
  symbolS *VAR_2 = VAR_0->fr_symbol;

  if (VAR_2)
    VAR_1 += FUNC_0 (VAR_2);

  return VAR_1;
}
