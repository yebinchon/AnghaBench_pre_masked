
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {TYPE_2__* eapol_sm; } ;
struct hostapd_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* eap_if; } ;
struct TYPE_3__ {int eapKeyAvailable; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct hostapd_data *VAR_1,
     struct sta_info *VAR_2, void *VAR_3)
{
 if (VAR_2->eapol_sm) {
  VAR_2->eapol_sm->eap_if->eapKeyAvailable = VAR_0;
  FUNC_0(VAR_2->eapol_sm);
 }
 return 0;
}
