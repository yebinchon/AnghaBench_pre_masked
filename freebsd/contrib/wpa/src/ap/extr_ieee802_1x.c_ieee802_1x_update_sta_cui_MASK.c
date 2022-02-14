
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct sta_info {struct eapol_state_machine* eapol_sm; } ;
struct radius_msg {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct eapol_state_machine {struct wpabuf* radius_cui; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radius_msg*,int ,int **,size_t*,int *) ;
 struct wpabuf* FUNC_1 (int *,size_t) ;
 int FUNC_2 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_1,
          struct sta_info *VAR_2,
          struct radius_msg *VAR_3)
{
 struct eapol_state_machine *VAR_4 = VAR_2->eapol_sm;
 struct wpabuf *VAR_5;
 u8 *VAR_6;
 size_t VAR_7;

 if (VAR_4 == ((void*)0))
  return;

 if (FUNC_0(VAR_3, VAR_0,
        &VAR_6, &VAR_7, ((void*)0)) < 0)
  return;

 VAR_5 = FUNC_1(VAR_6, VAR_7);
 if (VAR_5 == ((void*)0))
  return;

 FUNC_2(VAR_4->radius_cui);
 VAR_4->radius_cui = VAR_5;
}
