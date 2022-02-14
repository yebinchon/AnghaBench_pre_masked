
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int ** dom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_3 ;

void
FUNC_2 (enum cdi_direction VAR_4, basic_block VAR_5)
{
  FUNC_1 (VAR_2[VAR_4]);

  FUNC_0 (VAR_5->dom[VAR_4]);
  VAR_5->dom[VAR_4] = ((void*)0);
  VAR_3[VAR_4]--;

  if (VAR_2[VAR_4] == VAR_1)
    VAR_2[VAR_4] = VAR_0;
}
