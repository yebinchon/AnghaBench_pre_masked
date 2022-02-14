
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ehl_map_entry {int label; } ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int * exception_handler_label_map; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct ehl_map_entry**) ;
 int FUNC_1 (int *,void**) ;
 scalar_t__ FUNC_2 (int *,struct ehl_map_entry*,int ) ;

__attribute__((used)) static void
FUNC_3 (rtx VAR_2)
{
  struct ehl_map_entry **VAR_3, VAR_4;



  if (VAR_1->eh->exception_handler_label_map == ((void*)0))
    return;

  VAR_4.label = VAR_2;
  VAR_3 = (struct ehl_map_entry **)
    FUNC_2 (VAR_1->eh->exception_handler_label_map, &VAR_4, VAR_0);
  FUNC_0 (VAR_3);

  FUNC_1 (VAR_1->eh->exception_handler_label_map, (void **) VAR_3);
}
