
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_station_state_ev {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 struct llc_station_state_ev* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_0(0, VAR_0);

 if (VAR_3) {
  struct llc_station_state_ev *VAR_4 = FUNC_1(VAR_3);

  VAR_4->type = VAR_1;
  FUNC_2(VAR_3);
 }
}
