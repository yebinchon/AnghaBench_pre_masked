
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {int reinserting; int old_data; int pc; struct breakpoint* breakpoint_to_reinsert; } ;
struct TYPE_2__ {int (* write_memory ) (int ,int ,int ) ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct breakpoint* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;

void
FUNC_4 (CORE_ADDR VAR_3, CORE_ADDR VAR_4)
{
  struct breakpoint *VAR_5, *VAR_6;

  FUNC_2 (VAR_4, VAR_1);

  VAR_6 = FUNC_1 (VAR_3);
  if (VAR_6 == ((void*)0))
    FUNC_0 ("Could not find original breakpoint in list.");

  VAR_5 = FUNC_1 (VAR_4);
  if (VAR_5 == ((void*)0))
    FUNC_0 ("Could not find breakpoint in list (reinserting by breakpoint).");
  VAR_5->breakpoint_to_reinsert = VAR_6;

  (*VAR_2->write_memory) (VAR_6->pc, VAR_6->old_data,
          VAR_0);
  VAR_6->reinserting = 1;
}
