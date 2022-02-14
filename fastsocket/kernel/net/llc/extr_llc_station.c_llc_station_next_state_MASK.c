
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct llc_station_state_trans {scalar_t__ next_state; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct llc_station_state_trans*,struct sk_buff*) ;
 struct llc_station_state_trans* FUNC_1 (struct sk_buff*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_3(struct sk_buff *VAR_2)
{
 u16 VAR_3 = 1;
 struct llc_station_state_trans *VAR_4;

 if (VAR_1.state > VAR_0)
  goto out;
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {




  VAR_3 = FUNC_0(VAR_4, VAR_2);
  if (!VAR_3)



   VAR_1.state = VAR_4->next_state;
 } else



  VAR_3 = 0;
out:
 FUNC_2(VAR_2);
 return VAR_3;
}
