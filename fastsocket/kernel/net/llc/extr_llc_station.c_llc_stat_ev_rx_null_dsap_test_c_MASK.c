
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_station_state_ev {scalar_t__ type; } ;
struct llc_pdu_un {int dsap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_1 (struct llc_pdu_un*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct llc_pdu_un*) ;
 struct llc_pdu_un* FUNC_3 (struct sk_buff*) ;
 struct llc_station_state_ev* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2)
{
 struct llc_station_state_ev *VAR_3 = FUNC_4(VAR_2);
 struct llc_pdu_un *VAR_4 = FUNC_3(VAR_2);

 return VAR_3->type == VAR_1 &&
        FUNC_0(VAR_4) &&
        FUNC_1(VAR_4) &&
        FUNC_2(VAR_4) == VAR_0 &&
        !VAR_4->dsap ? 0 : 1;
}
