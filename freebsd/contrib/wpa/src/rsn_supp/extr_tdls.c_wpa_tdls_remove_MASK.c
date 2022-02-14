
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_peer {int tpk_success; int addr; struct wpa_tdls_peer* next; } ;
struct wpa_sm {scalar_t__ tdls_external_setup; struct wpa_tdls_peer* tdls; int tdls_supported; scalar_t__ tdls_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct wpa_sm*,struct wpa_tdls_peer*,int ) ;

void FUNC_2(struct wpa_sm *VAR_2, const u8 *VAR_3)
{
 struct wpa_tdls_peer *VAR_4;

 if (VAR_2->tdls_disabled || !VAR_2->tdls_supported)
  return;

 for (VAR_4 = VAR_2->tdls; VAR_4; VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_4->addr, VAR_3, VAR_0) == 0)
   break;
 }

 if (VAR_4 == ((void*)0) || !VAR_4->tpk_success)
  return;

 if (VAR_2->tdls_external_setup) {




  FUNC_1(VAR_2, VAR_4,
         VAR_1);
 }
}
