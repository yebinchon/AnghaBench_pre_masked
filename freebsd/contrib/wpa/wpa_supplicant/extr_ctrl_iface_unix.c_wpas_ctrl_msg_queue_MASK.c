
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct dl_list {int dummy; } ;
struct ctrl_iface_msg {int level; int type; char const* txt; size_t len; int list; struct wpa_supplicant* wpa_s; } ;
typedef enum wpa_msg_type { ____Placeholder_wpa_msg_type } wpa_msg_type ;


 int FUNC_0 (struct dl_list*,int *) ;
 int FUNC_1 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int ,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_3 (struct ctrl_iface_msg*,char const*,size_t) ;
 struct ctrl_iface_msg* FUNC_4 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct dl_list *VAR_1,
    struct wpa_supplicant *VAR_2, int VAR_3,
    enum wpa_msg_type VAR_4,
    const char *VAR_5, size_t VAR_6)
{
 struct ctrl_iface_msg *VAR_7;

 VAR_7 = FUNC_4(sizeof(*VAR_7) + VAR_6);
 if (!VAR_7)
  return;

 VAR_7->wpa_s = VAR_2;
 VAR_7->level = VAR_3;
 VAR_7->type = VAR_4;
 FUNC_3(VAR_7 + 1, VAR_5, VAR_6);
 VAR_7->txt = (const char *) (VAR_7 + 1);
 VAR_7->len = VAR_6;
 FUNC_0(VAR_1, &VAR_7->list);
 FUNC_1(VAR_0, VAR_2, ((void*)0));
 FUNC_2(0, 0, VAR_0, VAR_2, ((void*)0));
}
