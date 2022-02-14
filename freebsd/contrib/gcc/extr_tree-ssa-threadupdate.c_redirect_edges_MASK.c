
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct redirection_data {struct el* incoming_edges; TYPE_3__* outgoing_edge; TYPE_11__* dup_block; } ;
struct local_info {int jumps_threaded; TYPE_7__* bb; } ;
struct el {struct el* next; TYPE_4__* e; } ;
typedef TYPE_4__* edge ;
struct TYPE_24__ {int index; } ;
struct TYPE_23__ {int flags; } ;
struct TYPE_22__ {int num_threaded_edges; } ;
struct TYPE_21__ {TYPE_2__* dest; TYPE_1__* src; scalar_t__ count; int * aux; } ;
struct TYPE_20__ {int dest; } ;
struct TYPE_19__ {int index; } ;
struct TYPE_18__ {int index; } ;
struct TYPE_17__ {int count; } ;
struct TYPE_16__ {int index; int frequency; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 TYPE_13__* FUNC_1 (TYPE_11__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__,char*,int,...) ;
 int FUNC_4 (struct el*) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,TYPE_11__*) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 TYPE_6__* FUNC_7 (TYPE_7__*) ;
 TYPE_5__ VAR_7 ;

__attribute__((used)) static int
FUNC_8 (void **VAR_8, void *VAR_9)
{
  struct redirection_data *VAR_10 = (struct redirection_data *) *VAR_8;
  struct local_info *VAR_11 = (struct local_info *)VAR_9;
  struct el *VAR_12, *VAR_13;



  for (VAR_13 = VAR_10->incoming_edges; VAR_13; VAR_13 = VAR_12)
    {
      edge VAR_14 = VAR_13->e;




      VAR_12 = VAR_13->next;
      FUNC_4 (VAR_13);



      VAR_14->aux = ((void*)0);

      VAR_7.num_threaded_edges++;

      if (VAR_10->dup_block)
 {
   edge VAR_15;

   if (VAR_5 && (VAR_6 & VAR_4))
     FUNC_3 (VAR_5, "  Threaded jump %d --> %d to %d\n",
       VAR_14->src->index, VAR_14->dest->index, VAR_10->dup_block->index);

   VAR_10->dup_block->count += VAR_14->count;
   VAR_10->dup_block->frequency += FUNC_0 (VAR_14);
   FUNC_1 (VAR_10->dup_block, 0)->count += VAR_14->count;


   VAR_15 = FUNC_5 (VAR_14, VAR_10->dup_block);
   FUNC_2 (VAR_15);

   if ((VAR_5 && (VAR_6 & VAR_4))
       && VAR_14->src != VAR_15->src)
     FUNC_3 (VAR_5, "    basic block %d created\n", VAR_15->src->index);
 }
      else
 {
   if (VAR_5 && (VAR_6 & VAR_4))
     FUNC_3 (VAR_5, "  Threaded jump %d --> %d to %d\n",
       VAR_14->src->index, VAR_14->dest->index, VAR_11->bb->index);



   FUNC_6 (VAR_11->bb,
           VAR_10->outgoing_edge->dest);


   FUNC_7 (VAR_11->bb)->flags
     &= ~(VAR_3 | VAR_2 | VAR_0);
   FUNC_7 (VAR_11->bb)->flags |= VAR_1;
 }
    }


  if (VAR_10->incoming_edges)
    VAR_11->jumps_threaded = 1;

  return 1;
}
