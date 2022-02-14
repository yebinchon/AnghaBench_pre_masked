
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sbitmap ;
typedef TYPE_2__* ddg_node_ptr ;
typedef TYPE_3__* ddg_edge_ptr ;
struct TYPE_7__ {scalar_t__ distance; scalar_t__ latency; TYPE_2__* dest; struct TYPE_7__* next_out; } ;
struct TYPE_5__ {scalar_t__ count; } ;
struct TYPE_6__ {int cuid; TYPE_1__ aux; TYPE_3__* out; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2 (ddg_node_ptr VAR_0, sbitmap VAR_1, sbitmap VAR_2)
{
  ddg_edge_ptr VAR_3;
  int VAR_4 = 0;

  for (VAR_3 = VAR_0->out; VAR_3; VAR_3 = VAR_3->next_out)
    {
      ddg_node_ptr VAR_5 = VAR_3->dest;
      int VAR_6 = VAR_5->cuid;

      if (FUNC_1 (VAR_1, VAR_6)
   && (VAR_3->distance == 0)
   && (VAR_5->aux.count < VAR_0->aux.count + VAR_3->latency))
 {
   VAR_5->aux.count = VAR_0->aux.count + VAR_3->latency;
   FUNC_0 (VAR_2, VAR_6);
   VAR_4 = 1;
 }
    }
  return VAR_4;
}
