
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {TYPE_1__* zone_pgdat; } ;
struct TYPE_2__ {int kswapd_max_order; int kswapd_wait; int node_id; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 int FUNC_0 (struct zone*,int ) ;
 int FUNC_1 (struct zone*) ;
 int FUNC_2 (struct zone*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct zone*) ;
 scalar_t__ FUNC_7 (struct zone*,int,int ,int ,int ) ;

void FUNC_8(struct zone *VAR_1, int VAR_2)
{
 pg_data_t *VAR_3;

 if (!FUNC_2(VAR_1))
  return;

 if (!FUNC_0(VAR_1, VAR_0))
  return;
 VAR_3 = VAR_1->zone_pgdat;
 if (VAR_3->kswapd_max_order < VAR_2)
  VAR_3->kswapd_max_order = VAR_2;
 if (!FUNC_4(&VAR_3->kswapd_wait))
  return;
 if (FUNC_7(VAR_1, VAR_2, FUNC_1(VAR_1), 0, 0))
  return;

 FUNC_3(VAR_3->node_id, FUNC_6(VAR_1), VAR_2);
 FUNC_5(&VAR_3->kswapd_wait);
}
