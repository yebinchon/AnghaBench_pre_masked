
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct bwi_rf {scalar_t__* rf_nrssi_table; } ;
struct bwi_mac {struct bwi_rf mac_rf; TYPE_1__* mac_sc; } ;
struct TYPE_2__ {int sc_card_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bwi_mac*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct bwi_mac *VAR_4)
{
 uint16_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2);
 VAR_6 = (int)VAR_5;

 if (VAR_4->mac_sc->sc_card_flags & VAR_0) {
  struct bwi_rf *VAR_7 = &VAR_4->mac_rf;

  if (VAR_6 >= VAR_3)
   VAR_6 = VAR_3 - 1;

  VAR_6 = ((31 - (int)VAR_7->rf_nrssi_table[VAR_6]) * -131) / 128;
  VAR_6 -= 67;
 } else {
  VAR_6 = ((31 - VAR_6) * -149) / 128;
  VAR_6 -= 68;
 }
 return VAR_6;
}
