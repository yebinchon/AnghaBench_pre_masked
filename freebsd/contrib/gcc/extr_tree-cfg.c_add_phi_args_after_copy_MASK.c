
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (basic_block *VAR_1, unsigned VAR_2)
{
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    VAR_1[VAR_3]->flags |= VAR_0;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    FUNC_0 (VAR_1[VAR_3]);

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    VAR_1[VAR_3]->flags &= ~VAR_0;
}
