
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rf {int rf_idle_tssi; int rf_base_tssi; scalar_t__* rf_txpower_map; } ;
struct bwi_mac {struct bwi_rf mac_rf; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct bwi_mac *VAR_2, int8_t VAR_3, int8_t *VAR_4)
{
 struct bwi_rf *VAR_5 = &VAR_2->mac_rf;
 int VAR_6;

 VAR_6 = VAR_5->rf_idle_tssi + (int)VAR_3 - VAR_5->rf_base_tssi;




 if (VAR_6 < 0)
  VAR_6 = 0;
 else if (VAR_6 >= VAR_0)
  VAR_6 = VAR_0 - 1;


 *VAR_4 = VAR_5->rf_txpower_map[VAR_6];
 return 0;
}
