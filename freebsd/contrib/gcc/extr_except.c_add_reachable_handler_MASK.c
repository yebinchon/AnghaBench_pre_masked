
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reachable_info {int saw_any_handlers; int callback_data; int (* callback ) (struct eh_region*,int ) ;} ;
struct eh_region {int dummy; } ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {scalar_t__ built_landing_pads; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct eh_region*,int ) ;
 int FUNC_1 (struct eh_region*,int ) ;

__attribute__((used)) static void
FUNC_2 (struct reachable_info *VAR_1,
         struct eh_region *VAR_2, struct eh_region *VAR_3)
{
  if (! VAR_1)
    return;

  VAR_1->saw_any_handlers = 1;

  if (VAR_0->eh->built_landing_pads)
    VAR_1->callback (VAR_2, VAR_1->callback_data);
  else
    VAR_1->callback (VAR_3, VAR_1->callback_data);
}
