
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next_tail; int prev_head; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_6 (FILE *VAR_2, int VAR_3)
{
  if (VAR_3)
    FUNC_5 (VAR_2, "// Finishing schedule.\n");
  if (!VAR_1)
    return;
  if (VAR_1)
    {
      FUNC_4 (VAR_2);
      FUNC_3 (VAR_2, VAR_3, VAR_0->prev_head,
  VAR_0->next_tail);
      if (VAR_3 && VAR_2)
 FUNC_5 (VAR_2, "//    finishing %d-%d\n",
   FUNC_0 (FUNC_1 (VAR_0->prev_head)),
   FUNC_0 (FUNC_2 (VAR_0->next_tail)));

      return;
    }
}
