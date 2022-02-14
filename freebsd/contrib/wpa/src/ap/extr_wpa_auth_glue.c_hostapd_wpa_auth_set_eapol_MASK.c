
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wpa_eapol_variable ;
typedef int u8 ;
struct sta_info {TYPE_2__* eapol_sm; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_5__ {int dot1xAuthEapolFramesTx; void* keyDone; TYPE_1__* eap_if; void* keyRun; int portControl; } ;
struct TYPE_4__ {void* eapKeyAvailable; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (struct hostapd_data*,struct sta_info*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_3, const u8 *VAR_4,
           wpa_eapol_variable VAR_5, int VAR_6)
{
 struct hostapd_data *VAR_7 = VAR_3;
 struct sta_info *VAR_8 = FUNC_0(VAR_7, VAR_4);
 if (VAR_8 == ((void*)0))
  return;
 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_8->eapol_sm, VAR_6);
  break;
 case 128:
  FUNC_2(VAR_8->eapol_sm, VAR_6);
  break;
 case 135:
  FUNC_3(VAR_7, VAR_8, VAR_6);
  break;
 case 130:
  if (VAR_8->eapol_sm)
   VAR_8->eapol_sm->portControl = VAR_0;
  break;
 case 131:
  if (VAR_8->eapol_sm)
   VAR_8->eapol_sm->keyRun = VAR_6 ? VAR_2 : VAR_1;
  break;
 case 133:
  if (VAR_8->eapol_sm)
   VAR_8->eapol_sm->eap_if->eapKeyAvailable =
    VAR_6 ? VAR_2 : VAR_1;
  break;
 case 132:
  if (VAR_8->eapol_sm)
   VAR_8->eapol_sm->keyDone = VAR_6 ? VAR_2 : VAR_1;
  break;
 case 134:
  if (VAR_8->eapol_sm)
   VAR_8->eapol_sm->dot1xAuthEapolFramesTx++;
  break;
 }
}
