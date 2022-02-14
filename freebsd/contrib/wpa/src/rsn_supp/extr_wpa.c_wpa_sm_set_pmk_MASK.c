
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {size_t pmk_len; size_t xxkey_len; int key_mgmt; int network_ctx; int own_addr; int pmksa; int xxkey; int pmk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int ,int const*,size_t,int const*,int *,int ,int const*,int ,int ,int ,int *) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;

void FUNC_3(struct wpa_sm *VAR_1, const u8 *VAR_2, size_t VAR_3,
      const u8 *VAR_4, const u8 *VAR_5)
{
 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(VAR_0, "WPA: Set PMK based on external data",
   VAR_2, VAR_3);
 VAR_1->pmk_len = VAR_3;
 FUNC_0(VAR_1->pmk, VAR_2, VAR_3);







 if (VAR_5) {
  FUNC_1(VAR_1->pmksa, VAR_2, VAR_3, VAR_4, ((void*)0), 0,
    VAR_5, VAR_1->own_addr,
    VAR_1->network_ctx, VAR_1->key_mgmt, ((void*)0));
 }
}
