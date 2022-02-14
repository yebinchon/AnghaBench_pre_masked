
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eh_region {int region_number; scalar_t__ label; scalar_t__ landing_pad; } ;
typedef scalar_t__ rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int last_region_number; scalar_t__ built_landing_pads; int region_array; int * region_tree; scalar_t__ exception_handler_label_map; } ;


 scalar_t__ VAR_0 ;
 struct eh_region* FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__,struct eh_region*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;

void
FUNC_4 (void)
{
  int VAR_6;

  if (VAR_1->eh->exception_handler_label_map)
    FUNC_3 (VAR_1->eh->exception_handler_label_map);
  else
    {


      VAR_1->eh->exception_handler_label_map
        = FUNC_2 (VAR_1->eh->last_region_number * 3 / 2,
      VAR_4, VAR_3, ((void*)0));
    }

  if (VAR_1->eh->region_tree == ((void*)0))
    return;

  for (VAR_6 = VAR_1->eh->last_region_number; VAR_6 > 0; --VAR_6)
    {
      struct eh_region *VAR_7;
      rtx VAR_8;

      VAR_7 = FUNC_0 (VAR_2, VAR_1->eh->region_array, VAR_6);
      if (! VAR_7 || VAR_7->region_number != VAR_6)
 continue;
      if (VAR_1->eh->built_landing_pads)
 VAR_8 = VAR_7->landing_pad;
      else
 VAR_8 = VAR_7->label;

      if (VAR_8)
 FUNC_1 (VAR_8, VAR_7);
    }



  if (VAR_0 && ! VAR_1->eh->built_landing_pads)
    FUNC_1 (VAR_5, ((void*)0));
}
