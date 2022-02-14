
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct llc_station_state_trans {scalar_t__ (* ev_actions ) (struct sk_buff*) ;} ;
typedef scalar_t__ (* llc_station_action_t ) (struct sk_buff*) ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_1(struct llc_station_state_trans *VAR_0,
       struct sk_buff *VAR_1)
{
 u16 VAR_2 = 0;
 llc_station_action_t *VAR_3 = &VAR_0->ev_actions;

 for (; VAR_3 && *VAR_3; VAR_3++)
  if ((*VAR_3)(VAR_1))
   VAR_2 = 1;
 return VAR_2;
}
