
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_2__* ctrl_iface; int * ifname; TYPE_1__* global; } ;
struct ctrl_iface_global_priv {scalar_t__ ctrl_dst; int sock; } ;
typedef enum wpa_msg_type { ____Placeholder_wpa_msg_type } wpa_msg_type ;
struct TYPE_4__ {scalar_t__ ctrl_dst; int sock; } ;
struct TYPE_3__ {struct ctrl_iface_global_priv* ctrl_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_supplicant*,int *,int ,scalar_t__*,int,char const*,size_t) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, int VAR_4,
          enum wpa_msg_type VAR_5,
          const char *VAR_6, size_t VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_3;

 if (!VAR_8)
  return;

 if (VAR_5 != VAR_0 && VAR_8->global->ctrl_iface) {
  struct ctrl_iface_global_priv *VAR_9 = VAR_8->global->ctrl_iface;

  if (VAR_9->ctrl_dst) {
   FUNC_0(
    VAR_8,
    VAR_5 != VAR_2 ?
    ((void*)0) : VAR_8->ifname,
    VAR_9->sock, &VAR_9->ctrl_dst, VAR_4, VAR_6, VAR_7);
  }
 }

 if (VAR_5 == VAR_1 || !VAR_8->ctrl_iface)
  return;

 FUNC_0(VAR_8, ((void*)0), VAR_8->ctrl_iface->sock,
           &VAR_8->ctrl_iface->ctrl_dst,
           VAR_4, VAR_6, VAR_7);
}
