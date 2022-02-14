
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_sm {int key_mgmt; int network_ctx; int own_addr; int pmksa; int cur_pmksa; } ;


 int FUNC_0 (int ,int const*,size_t,int const*,int *,int ,int const*,int ,int ,int ,int const*) ;

void FUNC_1(struct wpa_sm *VAR_0, const u8 *VAR_1, size_t VAR_2,
       const u8 *VAR_3, const u8 *VAR_4,
       const u8 *VAR_5)
{
 VAR_0->cur_pmksa = FUNC_0(VAR_0->pmksa, VAR_1, VAR_2, VAR_3, ((void*)0), 0,
     VAR_4, VAR_0->own_addr, VAR_0->network_ctx,
     VAR_0->key_mgmt, VAR_5);
}
