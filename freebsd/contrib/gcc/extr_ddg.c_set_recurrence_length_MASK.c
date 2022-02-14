
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ddg_scc_ptr ;
typedef int ddg_ptr ;
typedef TYPE_2__* ddg_node_ptr ;
typedef TYPE_3__* ddg_edge_ptr ;
struct TYPE_7__ {int distance; scalar_t__ latency; TYPE_2__* src; TYPE_2__* dest; } ;
struct TYPE_6__ {int cuid; } ;
struct TYPE_5__ {int num_backarcs; int recurrence_length; int nodes; TYPE_3__** backarcs; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (ddg_scc_ptr VAR_0, ddg_ptr VAR_1)
{
  int VAR_2;
  int VAR_3 = -1;

  for (VAR_2 = 0; VAR_2 < VAR_0->num_backarcs; VAR_2++)
    {
      ddg_edge_ptr VAR_4 = VAR_0->backarcs[VAR_2];
      int VAR_5;
      int VAR_6 = VAR_4->distance;
      ddg_node_ptr VAR_7 = VAR_4->dest;
      ddg_node_ptr VAR_8 = VAR_4->src;

      VAR_5 = FUNC_1 (VAR_1, VAR_7->cuid, VAR_8->cuid, VAR_0->nodes);
      if (VAR_5 < 0 )
 {

   continue;
 }
      VAR_5 += VAR_4->latency;
      VAR_3 = FUNC_0 (VAR_3, (VAR_5 / VAR_6));
    }
  VAR_0->recurrence_length = VAR_3;
}
