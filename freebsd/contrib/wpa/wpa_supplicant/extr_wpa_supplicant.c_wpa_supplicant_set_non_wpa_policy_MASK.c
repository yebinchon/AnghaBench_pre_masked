
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int key_mgmt; int pairwise_cipher; int group_cipher; int mgmt_group_cipher; int wpa; } ;
struct wpa_ssid {int key_mgmt; int* wep_key_len; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct wpa_supplicant *VAR_12,
           struct wpa_ssid *VAR_13)
{
 int VAR_14;

 if (VAR_13->key_mgmt & VAR_6)
  VAR_12->key_mgmt = VAR_6;
 else if (VAR_13->key_mgmt & VAR_4)
  VAR_12->key_mgmt = VAR_4;
 else
  VAR_12->key_mgmt = VAR_5;
 FUNC_2(VAR_12->wpa, ((void*)0), 0);
 FUNC_1(VAR_12->wpa, ((void*)0), 0);
 FUNC_3(VAR_12->wpa, ((void*)0), 0);
 VAR_12->pairwise_cipher = VAR_1;
 VAR_12->group_cipher = VAR_1;
 VAR_12->mgmt_group_cipher = 0;

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  if (VAR_13->wep_key_len[VAR_14] > 5) {
   VAR_12->pairwise_cipher = VAR_2;
   VAR_12->group_cipher = VAR_2;
   break;
  } else if (VAR_13->wep_key_len[VAR_14] > 0) {
   VAR_12->pairwise_cipher = VAR_3;
   VAR_12->group_cipher = VAR_3;
   break;
  }
 }

 FUNC_4(VAR_12->wpa, VAR_11, 0);
 FUNC_4(VAR_12->wpa, VAR_8, VAR_12->key_mgmt);
 FUNC_4(VAR_12->wpa, VAR_10,
    VAR_12->pairwise_cipher);
 FUNC_4(VAR_12->wpa, VAR_7, VAR_12->group_cipher);





 FUNC_0(VAR_12->wpa);
}
