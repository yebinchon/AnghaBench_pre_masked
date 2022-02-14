
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {void (* handler ) (int ) ;struct breakpoint* next; int pc; int old_data; } ;
struct TYPE_2__ {int (* write_memory ) (int ,int *,int ) ;int (* read_memory ) (int ,int ,int ) ;} ;
typedef int CORE_ADDR ;


 int * VAR_0 ;
 int VAR_1 ;
 struct breakpoint* VAR_2 ;
 int FUNC_0 (char*) ;
 struct breakpoint* FUNC_1 (int) ;
 int FUNC_2 (struct breakpoint*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 TYPE_1__* VAR_3 ;

void
FUNC_5 (CORE_ADDR VAR_4, void (*VAR_5) (CORE_ADDR))
{
  struct breakpoint *VAR_6;

  if (VAR_0 == ((void*)0))
    FUNC_0 ("Target does not support breakpoints.");

  VAR_6 = FUNC_1 (sizeof (struct breakpoint));
  FUNC_2 (VAR_6, 0, sizeof (struct breakpoint));

  (*VAR_3->read_memory) (VAR_4, VAR_6->old_data,
         VAR_1);
  (*VAR_3->write_memory) (VAR_4, VAR_0,
          VAR_1);

  VAR_6->pc = VAR_4;
  VAR_6->handler = VAR_5;

  VAR_6->next = VAR_2;
  VAR_2 = VAR_6;
}
