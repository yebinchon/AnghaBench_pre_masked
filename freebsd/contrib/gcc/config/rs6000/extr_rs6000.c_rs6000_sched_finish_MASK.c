
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_head; int next_tail; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_6, int VAR_7)
{
  int VAR_8;

  if (VAR_7)
    FUNC_0 (VAR_6, "=== Finishing schedule.\n");

  if (VAR_1 && VAR_2)
    {
      if (VAR_3 == VAR_4)
 return;

      if (VAR_3 == VAR_5)
 VAR_8 = FUNC_1 (VAR_6, VAR_7,
          VAR_0->prev_head,
          VAR_0->next_tail);
      else
 VAR_8 = FUNC_3 (VAR_6, VAR_7,
        VAR_0->prev_head,
        VAR_0->next_tail);

      if (VAR_7 >= 6)
 {
       FUNC_0 (VAR_6, "ngroups = %d\n", VAR_8);
   FUNC_2 (VAR_6, VAR_0->prev_head);
   FUNC_0 (VAR_6, "Done finish_sched\n");
 }
    }
}
