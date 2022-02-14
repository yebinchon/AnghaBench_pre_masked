
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zone {int dummy; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;


 int VAR_0 ;
 int FUNC_0 (struct zone*) ;
 int FUNC_1 (struct zone*) ;

void FUNC_2(pg_data_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct zone *VAR_3 = &VAR_1->node_zones[VAR_2];
  if (!FUNC_1(VAR_3))
   continue;


  FUNC_0(VAR_3);
 }
}
