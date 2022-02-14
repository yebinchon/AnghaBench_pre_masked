
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * gregset_t ;
typedef int greg_t ;
struct TYPE_2__ {int pc; int cause; int hi; int lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int) ;
 int VAR_4 ;
 int * VAR_5 ;
 TYPE_1__* FUNC_1 (int ) ;

void
FUNC_2 (gregset_t *VAR_6, int VAR_7)
{
  int VAR_8;
  greg_t *VAR_9 = &(*VAR_6)[0];

  for (VAR_8 = 0; VAR_8 <= 32; VAR_8++)
    if ((VAR_7 == -1) || (VAR_7 == VAR_8))
      *(VAR_9 + VAR_8) = *(greg_t *) & VAR_5[FUNC_0 (VAR_8)];

  if ((VAR_7 == -1) || (VAR_7 == FUNC_1 (VAR_4)->pc))
    *(VAR_9 + VAR_1) = *(greg_t *) & VAR_5[FUNC_0 (FUNC_1 (VAR_4)->pc)];

  if ((VAR_7 == -1) || (VAR_7 == FUNC_1 (VAR_4)->cause))
    *(VAR_9 + VAR_0) = *(greg_t *) & VAR_5[FUNC_0 (FUNC_1 (VAR_4)->cause)];

  if ((VAR_7 == -1) || (VAR_7 == FUNC_1 (VAR_4)->hi))
    *(VAR_9 + VAR_2) = *(greg_t *) & VAR_5[FUNC_0 (FUNC_1 (VAR_4)->hi)];

  if ((VAR_7 == -1) || (VAR_7 == FUNC_1 (VAR_4)->lo))
    *(VAR_9 + VAR_3) = *(greg_t *) & VAR_5[FUNC_0 (FUNC_1 (VAR_4)->lo)];
}
