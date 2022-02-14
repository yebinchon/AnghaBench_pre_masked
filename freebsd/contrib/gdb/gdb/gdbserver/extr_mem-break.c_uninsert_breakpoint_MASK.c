
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {int reinserting; int old_data; int pc; } ;
struct TYPE_2__ {int (* write_memory ) (int ,int ,int ) ;} ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct breakpoint* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_1 ;

void
FUNC_3 (CORE_ADDR VAR_2)
{
  struct breakpoint *VAR_3;

  VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == ((void*)0))
    FUNC_0 ("Could not find breakpoint in list (uninserting).");

  (*VAR_1->write_memory) (VAR_3->pc, VAR_3->old_data,
          VAR_0);
  VAR_3->reinserting = 1;
}
