
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ddg_all_sccs {int dummy; } ;
typedef int sbitmap ;
typedef int ddg_scc_ptr ;
typedef TYPE_2__* ddg_ptr ;
typedef TYPE_3__* ddg_node_ptr ;
typedef TYPE_4__* ddg_edge_ptr ;
typedef TYPE_5__* ddg_all_sccs_ptr ;
struct TYPE_16__ {scalar_t__ num_sccs; int * sccs; TYPE_2__* ddg; } ;
struct TYPE_12__ {scalar_t__ count; } ;
struct TYPE_15__ {TYPE_1__ aux; TYPE_3__* dest; TYPE_3__* src; } ;
struct TYPE_14__ {int cuid; } ;
struct TYPE_13__ {int num_nodes; int num_backarcs; TYPE_4__** backarcs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

ddg_all_sccs_ptr
FUNC_9 (ddg_ptr VAR_1)
{
  int VAR_2;
  int VAR_3 = VAR_1->num_nodes;
  sbitmap VAR_4 = FUNC_5 (VAR_3);
  sbitmap VAR_5 = FUNC_5 (VAR_3);
  sbitmap VAR_6 = FUNC_5 (VAR_3);
  ddg_all_sccs_ptr VAR_7 = (ddg_all_sccs_ptr)
     FUNC_8 (sizeof (struct ddg_all_sccs));

  VAR_7->ddg = VAR_1;
  VAR_7->sccs = ((void*)0);
  VAR_7->num_sccs = 0;

  for (VAR_2 = 0; VAR_2 < VAR_1->num_backarcs; VAR_2++)
    {
      ddg_scc_ptr VAR_8;
      ddg_edge_ptr VAR_9 = VAR_1->backarcs[VAR_2];
      ddg_node_ptr VAR_10 = VAR_9->src;
      ddg_node_ptr VAR_11 = VAR_9->dest;


      if (VAR_9->aux.count == VAR_0)
 continue;

      FUNC_7 (VAR_4);
      FUNC_7 (VAR_5);
      FUNC_0 (VAR_4, VAR_11->cuid);
      FUNC_0 (VAR_5, VAR_10->cuid);

      if (FUNC_3 (VAR_6, VAR_1, VAR_4, VAR_5))
 {
   VAR_8 = FUNC_2 (VAR_1, VAR_6);
   FUNC_1 (VAR_7, VAR_8);
 }
    }
  FUNC_4 (VAR_7);
  FUNC_6 (VAR_4);
  FUNC_6 (VAR_5);
  FUNC_6 (VAR_6);
  return VAR_7;
}
