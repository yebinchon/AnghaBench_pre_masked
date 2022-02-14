
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {scalar_t__* dom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int * VAR_3 ;

void
FUNC_2 (enum cdi_direction VAR_4, basic_block VAR_5)
{
  FUNC_1 (VAR_2[VAR_4]);
  FUNC_1 (!VAR_5->dom[VAR_4]);

  VAR_3[VAR_4]++;

  VAR_5->dom[VAR_4] = FUNC_0 (VAR_5);

  if (VAR_2[VAR_4] == VAR_1)
    VAR_2[VAR_4] = VAR_0;
}
