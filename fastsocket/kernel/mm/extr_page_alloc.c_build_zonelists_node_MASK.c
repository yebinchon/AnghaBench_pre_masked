
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct zonelist {int * _zonerefs; } ;
struct zone {int dummy; } ;
struct TYPE_3__ {struct zone* node_zones; } ;
typedef TYPE_1__ pg_data_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct zone*) ;
 int FUNC_3 (struct zone*,int *) ;

__attribute__((used)) static int FUNC_4(pg_data_t *VAR_1, struct zonelist *VAR_2,
    int VAR_3, enum zone_type VAR_4)
{
 struct zone *VAR_5;

 FUNC_0(VAR_4 >= VAR_0);
 VAR_4++;

 do {
  VAR_4--;
  VAR_5 = VAR_1->node_zones + VAR_4;
  if (FUNC_2(VAR_5)) {
   FUNC_3(VAR_5,
    &VAR_2->_zonerefs[VAR_3++]);
   FUNC_1(VAR_4);
  }

 } while (VAR_4);
 return VAR_3;
}
