
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef TYPE_1__* basic_block ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,TYPE_1__*) ;

unsigned
FUNC_2 (enum cdi_direction VAR_1, basic_block *VAR_2,
    unsigned VAR_3, basic_block *VAR_4)
{
  unsigned VAR_5 = 0, VAR_6;
  basic_block VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    VAR_2[VAR_6]->flags |= VAR_0;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    for (VAR_7 = FUNC_0 (VAR_1, VAR_2[VAR_6]);
  VAR_7;
  VAR_7 = FUNC_1 (VAR_1, VAR_7))
      if (!(VAR_7->flags & VAR_0))
 VAR_4[VAR_5++] = VAR_7;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    VAR_2[VAR_6]->flags &= ~VAR_0;

  return VAR_5;
}
