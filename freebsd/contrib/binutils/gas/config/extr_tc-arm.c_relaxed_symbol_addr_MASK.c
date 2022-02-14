
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_5__ {scalar_t__ relax_marker; scalar_t__ fr_offset; int * fr_symbol; } ;
typedef TYPE_1__ fragS ;
typedef scalar_t__ addressT ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static addressT
FUNC_4(fragS *VAR_2, long VAR_3)
{
  fragS *VAR_4;
  addressT VAR_5;
  symbolS *VAR_6;

  VAR_6 = VAR_2->fr_symbol;
  VAR_4 = FUNC_3 (VAR_6);
  FUNC_2 (FUNC_0 (VAR_6) != VAR_0
 || VAR_4 == &VAR_1);
  VAR_5 = FUNC_1 (VAR_6) + VAR_2->fr_offset;






  if (VAR_3 != 0
      && VAR_4->relax_marker != VAR_2->relax_marker)
    VAR_5 += VAR_3;

  return VAR_5;
}
