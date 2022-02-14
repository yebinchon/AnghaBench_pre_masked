
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct llc_station_state_ev {scalar_t__ type; } ;
struct TYPE_2__ {scalar_t__ retry_count; scalar_t__ maximum_retry; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct llc_station_state_ev* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2)
{
 struct llc_station_state_ev *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->type == VAR_0 &&
  VAR_1.retry_count ==
  VAR_1.maximum_retry ? 0 : 1;
}
