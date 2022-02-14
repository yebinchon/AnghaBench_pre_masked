
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wpa_state; scalar_t__ key_mgmt; scalar_t__ mgmt_group_cipher; scalar_t__ group_cipher; scalar_t__ pairwise_cipher; } ;
typedef enum wpa_states { ____Placeholder_wpa_states } wpa_states ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*,int ) ;
 int FUNC_1 (struct wpa_supplicant*,int,int) ;

void FUNC_2(struct wpa_supplicant *VAR_2)
{
 enum wpa_states VAR_3 = VAR_2->wpa_state;

 VAR_2->pairwise_cipher = 0;
 VAR_2->group_cipher = 0;
 VAR_2->mgmt_group_cipher = 0;
 VAR_2->key_mgmt = 0;
 if (VAR_2->wpa_state != VAR_1)
  FUNC_0(VAR_2, VAR_0);

 if (VAR_2->wpa_state != VAR_3)
  FUNC_1(VAR_2, VAR_2->wpa_state, VAR_3);
}
