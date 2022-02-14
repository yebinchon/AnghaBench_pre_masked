
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_station_state_ev {scalar_t__ reason; int type; } ;


 int VAR_0 ;
 struct llc_station_state_ev* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1)
{
 struct llc_station_state_ev *VAR_2 = FUNC_0(VAR_1);

 VAR_2->type = VAR_0;
 VAR_2->reason = 0;
 FUNC_1(VAR_1);
}
