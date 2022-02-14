
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct cgraph_node {struct cgraph_node* next_clone; } ;
struct cgraph_edge {int dummy; } ;
struct TYPE_12__ {int transform_call_graph_edges; scalar_t__ eh_region_offset; scalar_t__ eh_region; int src_cfun; struct cgraph_node* dst_node; struct cgraph_node* src_node; } ;
typedef TYPE_2__ copy_body_data ;
typedef int block_stmt_iterator ;
typedef TYPE_3__* basic_block ;
struct TYPE_13__ {int count; int frequency; TYPE_1__* prev_bb; } ;
struct TYPE_11__ {scalar_t__ aux; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct cgraph_edge*,struct cgraph_node*,scalar_t__,int,int,int) ;
 struct cgraph_edge* FUNC_9 (struct cgraph_node*,scalar_t__) ;
 int FUNC_10 (struct cgraph_edge*,scalar_t__) ;
 int VAR_4 ;
 TYPE_3__* FUNC_11 (int *,void*,TYPE_3__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__*,int ,TYPE_2__*,int *) ;

__attribute__((used)) static basic_block
FUNC_21 (copy_body_data *VAR_5, basic_block VAR_6, int VAR_7, int VAR_8)
{
  block_stmt_iterator VAR_9, VAR_10;
  basic_block VAR_11;



  VAR_11 = FUNC_11 (((void*)0), (void *) 0,
                                         (basic_block) VAR_6->prev_bb->aux);
  VAR_11->count = VAR_6->count * VAR_8 / VAR_3;
  VAR_11->frequency = (VAR_6->frequency
         * VAR_7 / VAR_3);
  VAR_10 = FUNC_6 (VAR_11);

  for (VAR_9 = FUNC_6 (VAR_6);
       !FUNC_3 (VAR_9); FUNC_5 (&VAR_9))
    {
      tree VAR_12 = FUNC_7 (VAR_9);
      tree VAR_13 = VAR_12;

      FUNC_20 (&VAR_12, VAR_4, VAR_5, ((void*)0));



      if (VAR_12)
 {
   tree VAR_14, VAR_15;



   if (FUNC_0 (VAR_12) == VAR_1
       && FUNC_0 (FUNC_1 (VAR_12, 1)) == VAR_2
       && !FUNC_17 (FUNC_1 (FUNC_1 (VAR_12, 1), 0)))
     FUNC_16 (&VAR_12);

          FUNC_4 (&VAR_10, VAR_12, VAR_0);
   VAR_14 = FUNC_14 (VAR_12);


   if (VAR_14 && (VAR_15 = FUNC_15 (VAR_14)))
     {
       struct cgraph_node *VAR_16;
       struct cgraph_edge *VAR_17;

       switch (VAR_5->transform_call_graph_edges)
  {
  case 130:
    VAR_17 = FUNC_9 (VAR_5->src_node, VAR_13);
    if (VAR_17)
      FUNC_8 (VAR_17, VAR_5->dst_node, VAR_12,
           VAR_3, 1, 1);
    break;

  case 128:
    for (VAR_16 = VAR_5->dst_node->next_clone;
         VAR_16;
         VAR_16 = VAR_16->next_clone)
      {
        VAR_17 = FUNC_9 (VAR_16, VAR_13);
        FUNC_12 (VAR_17);
        FUNC_10 (VAR_17, VAR_12);
      }


  case 129:
    VAR_17 = FUNC_9 (VAR_5->dst_node, VAR_13);
    if (VAR_17)
      FUNC_10 (VAR_17, VAR_12);
    break;

  default:
    FUNC_13 ();
  }
     }


   FUNC_12 (FUNC_18 (VAR_5->src_cfun, VAR_13)
        != 0);

   if (FUNC_19 (VAR_12))
     {
       int VAR_18 = FUNC_18 (VAR_5->src_cfun, VAR_13);




       if (VAR_18 > 0)
  FUNC_2 (VAR_12, VAR_18 + VAR_5->eh_region_offset);





       if ((FUNC_18 (VAR_5->src_cfun,
          VAR_13) <= 0
     && VAR_5->eh_region > 0)
    && FUNC_19 (VAR_12))
  FUNC_2 (VAR_12, VAR_5->eh_region);
     }
 }
    }
  return VAR_11;
}
