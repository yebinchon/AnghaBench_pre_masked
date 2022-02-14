
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zonelist {TYPE_1__* _zonerefs; } ;
struct TYPE_7__ {int node_id; struct zonelist* node_zonelists; } ;
typedef TYPE_2__ pg_data_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;
struct TYPE_6__ {scalar_t__ zone_idx; int * zone; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,struct zonelist*,int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(pg_data_t *VAR_2)
{
 int VAR_3, VAR_4;
 enum zone_type VAR_5;
 struct zonelist *VAR_6;

 VAR_4 = VAR_2->node_id;

 VAR_6 = &VAR_2->node_zonelists[0];
 VAR_5 = FUNC_1(VAR_2, VAR_6, 0, VAR_0 - 1);
 for (VAR_3 = VAR_4 + 1; VAR_3 < VAR_1; VAR_3++) {
  if (!FUNC_2(VAR_3))
   continue;
  VAR_5 = FUNC_1(FUNC_0(VAR_3), VAR_6, VAR_5,
       VAR_0 - 1);
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (!FUNC_2(VAR_3))
   continue;
  VAR_5 = FUNC_1(FUNC_0(VAR_3), VAR_6, VAR_5,
       VAR_0 - 1);
 }

 VAR_6->_zonerefs[VAR_5].zone = ((void*)0);
 VAR_6->_zonerefs[VAR_5].zone_idx = 0;
}
