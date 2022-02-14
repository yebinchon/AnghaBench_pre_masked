
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct llc_station_state_trans {int (* ev ) (struct sk_buff*) ;} ;
struct llc_station_state {struct llc_station_state_trans** transitions; } ;
struct TYPE_2__ {int state; } ;


 TYPE_1__ VAR_0 ;
 struct llc_station_state* VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static struct llc_station_state_trans *
    FUNC_1(struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 struct llc_station_state_trans *VAR_4 = ((void*)0);
 struct llc_station_state_trans **VAR_5;
 struct llc_station_state *VAR_6 =
    &VAR_1[VAR_0.state - 1];

 for (VAR_5 = VAR_6->transitions; VAR_5[VAR_3]->ev; VAR_3++)
  if (!VAR_5[VAR_3]->ev(VAR_2)) {
   VAR_4 = VAR_5[VAR_3];
   break;
  }
 return VAR_4;
}
