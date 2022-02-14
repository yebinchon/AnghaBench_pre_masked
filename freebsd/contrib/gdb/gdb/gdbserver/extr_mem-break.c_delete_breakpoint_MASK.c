
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct breakpoint {int old_data; int pc; struct breakpoint* next; } ;
struct TYPE_2__ {int (* write_memory ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 struct breakpoint* VAR_1 ;
 int FUNC_0 (struct breakpoint*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (struct breakpoint *VAR_3)
{
  struct breakpoint *VAR_4;

  if (VAR_1 == VAR_3)
    {
      VAR_1 = VAR_3->next;
      (*VAR_2->write_memory) (VAR_3->pc, VAR_3->old_data,
       VAR_0);
      FUNC_0 (VAR_3);
      return;
    }
  VAR_4 = VAR_1;
  while (VAR_4->next)
    {
      if (VAR_4->next == VAR_3)
 {
   VAR_4->next = VAR_3->next;
   (*VAR_2->write_memory) (VAR_3->pc, VAR_3->old_data,
           VAR_0);
   FUNC_0 (VAR_3);
   return;
 }
    }
  FUNC_3 ("Could not find breakpoint in list.");
}
