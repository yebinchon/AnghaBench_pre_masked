
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_station_state_ev {scalar_t__ type; scalar_t__ prim_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct llc_station_state_ev* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2)
{
 struct llc_station_state_ev *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->type == VAR_1 &&
        VAR_3->prim_type ==
   VAR_0 ? 0 : 1;
}
