
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_24__ {unsigned int index; TYPE_7__* lines; struct TYPE_24__* next; } ;
typedef TYPE_6__ source_t ;
struct TYPE_23__ {TYPE_11__* branches; TYPE_10__* blocks; } ;
struct TYPE_25__ {int exists; TYPE_5__ u; scalar_t__ count; } ;
typedef TYPE_7__ line_t ;
struct TYPE_26__ {unsigned int num_blocks; size_t line; int name; TYPE_4__* src; int blocks_executed; TYPE_10__* blocks; } ;
typedef TYPE_8__ function_t ;
struct TYPE_27__ {int lines_executed; int lines; } ;
typedef TYPE_9__ coverage_t ;
struct TYPE_20__ {unsigned int ident; int * arc; } ;
struct TYPE_19__ {unsigned int* encoding; unsigned int num; } ;
struct TYPE_21__ {TYPE_2__ cycle; TYPE_1__ line; } ;
struct TYPE_17__ {TYPE_11__* succ; struct TYPE_17__* chain; TYPE_3__ u; scalar_t__ count; } ;
typedef TYPE_10__ block_t ;
struct TYPE_18__ {int is_unconditional; struct TYPE_18__* line_next; struct TYPE_18__* succ_next; } ;
typedef TYPE_11__ arc_t ;
struct TYPE_22__ {TYPE_7__* lines; } ;


 int FUNC_0 (TYPE_9__*,TYPE_11__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (unsigned int*) ;
 TYPE_6__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3 (coverage_t *VAR_5, function_t *VAR_6)
{
  unsigned VAR_7;
  line_t *VAR_8 = ((void*)0);



  for (VAR_7 = 0; VAR_7 != VAR_6->num_blocks; VAR_7++)
    {
      block_t *VAR_9 = &VAR_6->blocks[VAR_7];
      unsigned *VAR_10;
      const source_t *VAR_11 = ((void*)0);
      unsigned VAR_12;

      if (VAR_9->count && VAR_7 && VAR_7 + 1 != VAR_6->num_blocks)
 VAR_6->blocks_executed++;
      for (VAR_12 = 0, VAR_10 = VAR_9->u.line.encoding;
    VAR_12 != VAR_9->u.line.num; VAR_12++, VAR_10++)
 if (!*VAR_10)
   {
     unsigned VAR_13 = *++VAR_10;

     for (VAR_11 = VAR_3; VAR_11->index != VAR_13; VAR_11 = VAR_11->next)
       continue;
     VAR_12++;
   }
 else
   {
     VAR_8 = &VAR_11->lines[*VAR_10];

     if (VAR_5)
       {
  if (!VAR_8->exists)
    VAR_5->lines++;
  if (!VAR_8->count && VAR_9->count)
    VAR_5->lines_executed++;
       }
     VAR_8->exists = 1;
     VAR_8->count += VAR_9->count;
   }
      FUNC_2 (VAR_9->u.line.encoding);
      VAR_9->u.cycle.arc = ((void*)0);
      VAR_9->u.cycle.ident = ~0U;

      if (!VAR_7 || VAR_7 + 1 == VAR_6->num_blocks)
                          ;
      else if (VAR_1)
 {
   line_t *VAR_14 = VAR_8 ? VAR_8 : &VAR_6->src->lines[VAR_6->line];

   VAR_9->chain = VAR_14->u.blocks;
   VAR_14->u.blocks = VAR_9;
 }
      else if (VAR_2)
 {
   arc_t *VAR_15;

   for (VAR_15 = VAR_9->succ; VAR_15; VAR_15 = VAR_15->succ_next)
     {
       VAR_15->line_next = VAR_8->u.branches;
       VAR_8->u.branches = VAR_15;
       if (VAR_5 && !VAR_15->is_unconditional)
  FUNC_0 (VAR_5, VAR_15);
     }
 }
    }
  if (!VAR_8)
    FUNC_1 (VAR_4, "%s:no lines for '%s'\n", VAR_0, VAR_6->name);
}
