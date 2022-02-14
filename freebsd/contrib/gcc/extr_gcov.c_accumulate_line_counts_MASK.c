
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_20__ {int lines_executed; int lines; } ;
struct TYPE_15__ {unsigned int num_lines; TYPE_9__ coverage; TYPE_5__* lines; TYPE_6__* functions; } ;
typedef TYPE_4__ source_t ;
struct TYPE_12__ {TYPE_7__* blocks; TYPE_8__* branches; } ;
struct TYPE_16__ {scalar_t__ count; scalar_t__ exists; TYPE_1__ u; } ;
typedef TYPE_5__ line_t ;
typedef scalar_t__ gcov_type ;
struct TYPE_17__ {struct TYPE_17__* line_next; } ;
typedef TYPE_6__ function_t ;
struct TYPE_13__ {unsigned int ident; TYPE_8__* arc; } ;
struct TYPE_14__ {TYPE_2__ cycle; } ;
struct TYPE_18__ {TYPE_3__ u; TYPE_8__* succ; struct TYPE_18__* chain; TYPE_8__* pred; } ;
typedef TYPE_7__ block_t ;
struct TYPE_19__ {scalar_t__ count; scalar_t__ cs_count; int cycle; struct TYPE_19__* succ_next; TYPE_7__* src; TYPE_7__* dst; struct TYPE_19__* pred_next; struct TYPE_19__* line_next; } ;
typedef TYPE_8__ arc_t ;


 int FUNC_0 (TYPE_9__*,TYPE_8__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1 (source_t *VAR_2)
{
  line_t *VAR_3;
  function_t *VAR_4, *VAR_5, *VAR_6;
  unsigned VAR_7;


  for (VAR_4 = VAR_2->functions, VAR_5 = ((void*)0); VAR_4;
       VAR_5 = VAR_4, VAR_4 = VAR_6)
    {
      VAR_6 = VAR_4->line_next;
      VAR_4->line_next = VAR_5;
    }
  VAR_2->functions = VAR_5;

  for (VAR_7 = VAR_2->num_lines, VAR_3 = VAR_2->lines; VAR_7--; VAR_3++)
    {
      if (!VAR_0)
 {
   arc_t *VAR_8, *VAR_9, *VAR_10;


   for (VAR_8 = VAR_3->u.branches, VAR_9 = ((void*)0); VAR_8;
        VAR_9 = VAR_8, VAR_8 = VAR_10)
     {
       VAR_10 = VAR_8->line_next;
       VAR_8->line_next = VAR_9;

       FUNC_0 (&VAR_2->coverage, VAR_8);
     }
   VAR_3->u.branches = VAR_9;
 }
      else if (VAR_3->u.blocks)
 {






   block_t *VAR_11, *VAR_12, *VAR_13;
   gcov_type VAR_14 = 0;


   for (VAR_11 = VAR_3->u.blocks, VAR_12 = ((void*)0); VAR_11;
        VAR_12 = VAR_11, VAR_11 = VAR_13)
     {
       VAR_13 = VAR_11->chain;
       VAR_11->chain = VAR_12;
       VAR_11->u.cycle.ident = VAR_7;
     }
   VAR_3->u.blocks = VAR_12;


   for (VAR_11 = VAR_3->u.blocks; VAR_11; VAR_11 = VAR_11->chain)
     {
       arc_t *VAR_15;

       for (VAR_15 = VAR_11->pred; VAR_15; VAR_15 = VAR_15->pred_next)
  {
    if (VAR_15->src->u.cycle.ident != VAR_7)
      VAR_14 += VAR_15->count;
    if (VAR_1)
      FUNC_0 (&VAR_2->coverage, VAR_15);
  }


       for (VAR_15 = VAR_11->succ; VAR_15; VAR_15 = VAR_15->succ_next)
  VAR_15->cs_count = VAR_15->count;
     }
   for (VAR_11 = VAR_3->u.blocks; VAR_11; VAR_11 = VAR_11->chain)
     {
       block_t *VAR_16 = VAR_11;
       arc_t *VAR_17;

     next_vertex:;
       VAR_17 = VAR_16->succ;
     current_vertex:;
       while (VAR_17)
  {
    block_t *VAR_18 = VAR_17->dst;
    if (
        VAR_17->cycle

        || VAR_18->u.cycle.ident != VAR_7

        || VAR_18->u.cycle.arc)
      {
        VAR_17 = VAR_17->succ_next;
        continue;
      }

    if (VAR_18 == VAR_11)
      {

        gcov_type VAR_19 = VAR_17->cs_count;
        arc_t *VAR_20 = VAR_17;
        arc_t *VAR_21;


        for (VAR_18 = VAR_16; (VAR_21 = VAR_18->u.cycle.arc);
      VAR_18 = VAR_21->src)
   if (VAR_19 > VAR_21->cs_count)
     {
       VAR_19 = VAR_21->cs_count;
       VAR_20 = VAR_21;
     }

        VAR_14 += VAR_19;
        VAR_20->cycle = 1;


        VAR_17->cs_count -= VAR_19;
        for (VAR_18 = VAR_16; (VAR_21 = VAR_18->u.cycle.arc);
      VAR_18 = VAR_21->src)
   VAR_21->cs_count -= VAR_19;


        while (VAR_16 != VAR_20->src)
   {
     VAR_17 = VAR_16->u.cycle.arc;
     VAR_16->u.cycle.arc = ((void*)0);
     VAR_16 = VAR_17->src;
   }

        VAR_17 = VAR_17->succ_next;
        continue;
      }


    VAR_18->u.cycle.arc = VAR_17;
    VAR_16 = VAR_18;
    goto next_vertex;
  }


       VAR_17 = VAR_16->u.cycle.arc;
       if (VAR_17)
  {

    VAR_16->u.cycle.arc = ((void*)0);
    VAR_16 = VAR_17->src;
    VAR_17 = VAR_17->succ_next;
    goto current_vertex;
  }

       VAR_11->u.cycle.ident = ~0U;
     }

   VAR_3->count = VAR_14;
 }

      if (VAR_3->exists)
 {
   VAR_2->coverage.lines++;
   if (VAR_3->count)
     VAR_2->coverage.lines_executed++;
 }
    }
}
