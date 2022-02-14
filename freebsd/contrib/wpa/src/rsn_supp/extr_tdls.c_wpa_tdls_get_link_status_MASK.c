
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_peer {int tpk_success; int addr; struct wpa_tdls_peer* next; } ;
struct wpa_sm {struct wpa_tdls_peer* tdls; int tdls_supported; scalar_t__ tdls_disabled; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;

const char * FUNC_1(struct wpa_sm *VAR_1, const u8 *VAR_2)
{
 struct wpa_tdls_peer *VAR_3;

 if (VAR_1->tdls_disabled || !VAR_1->tdls_supported)
  return "disabled";

 for (VAR_3 = VAR_1->tdls; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_0(VAR_3->addr, VAR_2, VAR_0) == 0)
   break;
 }

 if (VAR_3 == ((void*)0))
  return "peer does not exist";

 if (!VAR_3->tpk_success)
  return "peer not connected";

 return "connected";
}
