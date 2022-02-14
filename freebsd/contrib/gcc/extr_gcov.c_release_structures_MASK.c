
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* lines; TYPE_3__* name; struct TYPE_10__* next; } ;
typedef TYPE_1__ source_t ;
struct TYPE_11__ {unsigned int num_blocks; TYPE_3__* counts; TYPE_3__* blocks; struct TYPE_11__* next; } ;
typedef TYPE_2__ function_t ;
struct TYPE_12__ {struct TYPE_12__* succ_next; struct TYPE_12__* succ; } ;
typedef TYPE_3__ block_t ;
typedef TYPE_3__ arc_t ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  function_t *VAR_6;
  source_t *VAR_7;

  FUNC_0 (VAR_0);
  FUNC_0 (VAR_3);
  VAR_3 = VAR_0 = ((void*)0);
  VAR_1 = 0;
  VAR_2 = 0;

  while ((VAR_7 = VAR_5))
    {
      VAR_5 = VAR_7->next;

      FUNC_0 (VAR_7->name);
      FUNC_0 (VAR_7->lines);
    }

  while ((VAR_6 = VAR_4))
    {
      unsigned VAR_8;
      block_t *VAR_9;

      VAR_4 = VAR_6->next;
      for (VAR_8 = VAR_6->num_blocks, VAR_9 = VAR_6->blocks; VAR_8--; VAR_9++)
 {
   arc_t *VAR_10, *VAR_11;

   for (VAR_10 = VAR_9->succ; VAR_10; VAR_10 = VAR_11)
     {
       VAR_11 = VAR_10->succ_next;
       FUNC_0 (VAR_10);
     }
 }
      FUNC_0 (VAR_6->blocks);
      FUNC_0 (VAR_6->counts);
    }
}
