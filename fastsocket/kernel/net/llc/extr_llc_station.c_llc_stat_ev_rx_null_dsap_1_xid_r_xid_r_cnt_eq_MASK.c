
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct llc_station_state_ev {scalar_t__ type; } ;
struct llc_pdu_un {int dsap; } ;
struct TYPE_2__ {int xid_r_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct llc_pdu_un*) ;
 scalar_t__ FUNC_1 (struct llc_pdu_un*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct llc_pdu_un*) ;
 TYPE_1__ VAR_2 ;
 struct llc_pdu_un* FUNC_3 (struct sk_buff*) ;
 struct llc_station_state_ev* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3)
{
 struct llc_station_state_ev *VAR_4 = FUNC_4(VAR_3);
 struct llc_pdu_un *VAR_5 = FUNC_3(VAR_3);

 return VAR_4->type == VAR_1 &&
        FUNC_0(VAR_5) &&
        FUNC_1(VAR_5) &&
        FUNC_2(VAR_5) == VAR_0 &&
        !VAR_5->dsap &&
        VAR_2.xid_r_count == 1 ? 0 : 1;
}
