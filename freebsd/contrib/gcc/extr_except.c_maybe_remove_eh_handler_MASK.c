
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ehl_map_entry {struct eh_region* region; int label; } ;
struct eh_region {scalar_t__ type; int label; } ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int exception_handler_label_map; scalar_t__ built_landing_pads; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,void**) ;
 scalar_t__ FUNC_1 (int ,struct ehl_map_entry*,int ) ;
 int FUNC_2 (struct eh_region*) ;

void
FUNC_3 (rtx VAR_4)
{
  struct ehl_map_entry **VAR_5, VAR_6;
  struct eh_region *VAR_7;





  if (VAR_3->eh->built_landing_pads)
    return;

  VAR_6.label = VAR_4;
  VAR_5 = (struct ehl_map_entry **)
    FUNC_1 (VAR_3->eh->exception_handler_label_map, &VAR_6, VAR_1);
  if (! VAR_5)
    return;
  VAR_7 = (*VAR_5)->region;
  if (! VAR_7)
    return;





  if (VAR_7->type == VAR_0)
    {
      FUNC_0 (VAR_3->eh->exception_handler_label_map, (void **) VAR_5);
      VAR_7->label = VAR_2;
    }
  else
    FUNC_2 (VAR_7);
}
