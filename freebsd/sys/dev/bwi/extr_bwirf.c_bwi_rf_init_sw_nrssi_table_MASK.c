
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_rf {int* rf_nrssi; int rf_nrssi_slope; int* rf_nrssi_table; } ;
struct bwi_mac {struct bwi_rf mac_rf; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct bwi_mac *VAR_1)
{
 struct bwi_rf *VAR_2 = &VAR_1->mac_rf;
 int VAR_3, VAR_4;

 VAR_3 = 0x1f - VAR_2->rf_nrssi[0];
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  int VAR_5;

  VAR_5 = (((VAR_4 - VAR_3) * VAR_2->rf_nrssi_slope) / 0x10000) + 0x3a;
  if (VAR_5 < 0)
   VAR_5 = 0;
  else if (VAR_5 > 0x3f)
   VAR_5 = 0x3f;

  VAR_2->rf_nrssi_table[VAR_4] = VAR_5;
 }
}
