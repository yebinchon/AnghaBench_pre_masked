
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {scalar_t__ reinserting; int pc; struct breakpoint* breakpoint_to_reinsert; } ;
struct TYPE_2__ {int (* write_memory ) (int ,int ,int ) ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct breakpoint*) ;
 int FUNC_1 (char*) ;
 struct breakpoint* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_4 (CORE_ADDR VAR_3)
{
  struct breakpoint *VAR_4, *VAR_5;

  VAR_4 = FUNC_2 (VAR_3);
  if (VAR_4 == ((void*)0))
    FUNC_1 ("lost the stopping breakpoint.");

  VAR_5 = VAR_4->breakpoint_to_reinsert;
  if (VAR_5 == ((void*)0))
    FUNC_1 ("no breakpoint to reinsert");

  (*VAR_2->write_memory) (VAR_5->pc, VAR_0,
          VAR_1);
  VAR_5->reinserting = 0;
  FUNC_0 (VAR_4);
}
