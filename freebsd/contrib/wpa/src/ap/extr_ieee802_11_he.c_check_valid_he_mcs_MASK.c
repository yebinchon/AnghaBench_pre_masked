
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_he_capabilities {scalar_t__ optional; } ;
struct hostapd_data {TYPE_4__* iface; } ;
typedef enum ieee80211_op_mode { ____Placeholder_ieee80211_op_mode } ieee80211_op_mode ;
struct TYPE_8__ {TYPE_3__* conf; TYPE_2__* current_mode; } ;
struct TYPE_7__ {int he_oper_chwidth; } ;
struct TYPE_6__ {TYPE_1__* he_capab; } ;
struct TYPE_5__ {scalar_t__ mcs; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct hostapd_data *VAR_2, const u8 *VAR_3,
         enum ieee80211_op_mode VAR_4)
{
 u16 VAR_5, VAR_6;
 u8 VAR_7 = 0;
 const u16 *VAR_8, *VAR_9;
 int VAR_10;

 if (!VAR_2->iface->current_mode)
  return 1;
 VAR_8 = (u16 *) VAR_2->iface->current_mode->he_capab[VAR_4].mcs;
 VAR_9 = (u16 *) ((const struct ieee80211_he_capabilities *)
          VAR_3)->optional;







 switch (VAR_2->iface->conf->he_oper_chwidth) {
 case 128:
  VAR_7 = 3;
  break;
 case 129:
  VAR_7 = 2;
  break;
 default:
  VAR_7 = 1;
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  int VAR_11;


  VAR_5 = FUNC_0((const u8 *) &VAR_9[VAR_10 * 2]);
  VAR_6 = FUNC_0((const u8 *)
          &VAR_8[(VAR_10 * 2) + 1]);

  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   if (((VAR_6 >> (VAR_11 * 2)) & 0x3) == 3)
    continue;

   if (((VAR_5 >> (VAR_11 * 2)) & 0x3) == 3)
    continue;

   return 1;
  }
 }

 FUNC_1(VAR_1,
     "No matching HE MCS found between AP TX and STA RX");

 return 0;
}
