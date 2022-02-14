
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {scalar_t__ reinserting; int pc; } ;
struct TYPE_2__ {int (* write_memory ) (int ,int ,int ) ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct breakpoint* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;

void
FUNC_3 (CORE_ADDR VAR_3)
{
  struct breakpoint *VAR_4;

  VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4 == ((void*)0))
    FUNC_0 ("Could not find breakpoint in list (uninserting).");
  if (! VAR_4->reinserting)
    FUNC_0 ("Breakpoint already inserted at reinsert time.");

  (*VAR_2->write_memory) (VAR_4->pc, VAR_0,
          VAR_1);
  VAR_4->reinserting = 0;
}
