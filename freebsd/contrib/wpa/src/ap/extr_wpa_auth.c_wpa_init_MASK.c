
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct wpa_auth_config {int ip_addr_start; int ip_addr_end; } const wpa_auth_config ;
typedef struct wpa_auth_config u8 ;
struct TYPE_2__ {scalar_t__ wpa_group_rekey; scalar_t__ wpa_gmk_rekey; } ;
struct wpa_authenticator {int ip_pool; TYPE_1__ conf; int * pmksa; struct wpa_authenticator* wpa_ie; struct wpa_authenticator* group; int * ft_pmk_cache; void* cb_ctx; struct wpa_auth_callbacks const* cb; TYPE_1__* addr; } ;
struct wpa_auth_callbacks {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ,int ,struct wpa_authenticator*,int *) ;
 int FUNC_3 (struct wpa_authenticator*) ;
 int FUNC_4 (TYPE_1__*,struct wpa_auth_config const*,int) ;
 struct wpa_authenticator* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,struct wpa_authenticator*) ;
 scalar_t__ FUNC_8 (struct wpa_authenticator*) ;
 int VAR_2 ;
 int * FUNC_9 () ;
 struct wpa_authenticator* FUNC_10 (struct wpa_authenticator*,int ,int) ;
 int FUNC_11 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

struct wpa_authenticator * FUNC_12(const u8 *VAR_5,
        struct wpa_auth_config *VAR_6,
        const struct wpa_auth_callbacks *VAR_7,
        void *VAR_8)
{
 struct wpa_authenticator *VAR_9;

 VAR_9 = FUNC_5(sizeof(struct wpa_authenticator));
 if (VAR_9 == ((void*)0))
  return ((void*)0);
 FUNC_4(VAR_9->addr, VAR_5, VAR_0);
 FUNC_4(&VAR_9->conf, VAR_6, sizeof(*VAR_6));
 VAR_9->cb = VAR_7;
 VAR_9->cb_ctx = VAR_8;

 if (FUNC_8(VAR_9)) {
  FUNC_11(VAR_1, "Could not generate WPA IE.");
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 VAR_9->group = FUNC_10(VAR_9, 0, 1);
 if (VAR_9->group == ((void*)0)) {
  FUNC_3(VAR_9->wpa_ie);
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 VAR_9->pmksa = FUNC_7(VAR_2,
      VAR_9);
 if (VAR_9->pmksa == ((void*)0)) {
  FUNC_11(VAR_1, "PMKSA cache initialization failed.");
  FUNC_3(VAR_9->group);
  FUNC_3(VAR_9->wpa_ie);
  FUNC_3(VAR_9);
  return ((void*)0);
 }
 if (VAR_9->conf.wpa_gmk_rekey) {
  FUNC_2(VAR_9->conf.wpa_gmk_rekey, 0,
           VAR_3, VAR_9, ((void*)0));
 }

 if (VAR_9->conf.wpa_group_rekey) {
  FUNC_2(VAR_9->conf.wpa_group_rekey, 0,
           VAR_4, VAR_9, ((void*)0));
 }
 return VAR_9;
}
