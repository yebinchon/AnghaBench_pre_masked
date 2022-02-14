
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* basic_block ;
struct TYPE_5__ {scalar_t__ object; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

void
FUNC_2 (void)
{
  int VAR_3;
  basic_block VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    if (VAR_1[VAR_3].object
 && FUNC_1 (VAR_1[VAR_3].object)
 && (VAR_4 = FUNC_0 (VAR_1[VAR_3].object)))
      VAR_4->flags |= VAR_0;

  VAR_2 = 0;
}
