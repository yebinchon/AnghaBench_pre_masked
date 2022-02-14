
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_station_state_ev {scalar_t__ type; scalar_t__ prim; scalar_t__ prim_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct llc_station_state_ev* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_3)
{
 struct llc_station_state_ev *VAR_4 = FUNC_0(VAR_3);

 return VAR_4->type == VAR_2 &&
        VAR_4->prim == VAR_0 &&
        VAR_4->prim_type == VAR_1 ? 0 : 1;
}
