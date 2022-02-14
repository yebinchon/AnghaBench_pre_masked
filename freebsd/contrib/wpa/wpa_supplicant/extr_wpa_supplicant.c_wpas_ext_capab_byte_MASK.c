
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_flags; int disable_fils; TYPE_1__* conf; } ;
struct TYPE_2__ {int ftm_initiator; int ftm_responder; int hs20; int interworking; int disable_btm; int coloc_intf_reporting; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wpa_supplicant *VAR_1, u8 *VAR_2, int VAR_3)
{
 *VAR_2 = 0x00;

 switch (VAR_3) {
 case 0:
  break;
 case 1:
  if (VAR_1->conf->coloc_intf_reporting) {

   *VAR_2 |= 0x20;
  }
  break;
 case 2:





  break;
 case 3:







  break;
 case 4:




  break;
 case 5:







  break;
 case 6:
  break;
 case 7:
  break;
 case 8:
  if (VAR_1->conf->ftm_responder)
   *VAR_2 |= 0x40;
  if (VAR_1->conf->ftm_initiator)
   *VAR_2 |= 0x80;
  break;
 case 9:




  break;
 }
}
