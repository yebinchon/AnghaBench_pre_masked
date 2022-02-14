
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {struct ctrl_iface_priv* ctrl_iface; int * ifname; TYPE_1__* global; } ;
struct ctrl_iface_priv {scalar_t__ throttle_count; int ctrl_dst; int sock; int msg_queue; } ;
struct ctrl_iface_global_priv {scalar_t__ throttle_count; int ctrl_dst; int sock; int msg_queue; } ;
typedef enum wpa_msg_type { ____Placeholder_wpa_msg_type } wpa_msg_type ;
struct TYPE_2__ {struct ctrl_iface_global_priv* ctrl_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (struct wpa_supplicant*,int *,int ,int *,int,char const*,size_t,struct ctrl_iface_priv*,struct ctrl_iface_global_priv*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,struct wpa_supplicant*,int,int,char const*,size_t) ;
 int FUNC_5 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_4, int VAR_5,
          enum wpa_msg_type VAR_6,
          const char *VAR_7, size_t VAR_8)
{
 struct wpa_supplicant *VAR_9 = VAR_4;
 struct ctrl_iface_priv *VAR_10;
 struct ctrl_iface_global_priv *VAR_11;

 if (VAR_9 == ((void*)0))
  return;

 VAR_11 = VAR_9->global->ctrl_iface;

 if (VAR_6 != VAR_1 && VAR_11 &&
     !FUNC_0(&VAR_11->ctrl_dst)) {
  if (!FUNC_0(&VAR_11->msg_queue) ||
      FUNC_3(VAR_11->sock)) {
   if (VAR_11->throttle_count == 0) {
    FUNC_1(VAR_0,
        "CTRL: Had to throttle global event message for sock %d",
        VAR_11->sock);
   }
   VAR_11->throttle_count++;
   FUNC_5(VAR_11->throttle_count,
        &VAR_11->msg_queue);
   FUNC_4(&VAR_11->msg_queue, VAR_9, VAR_5,
         VAR_6, VAR_7, VAR_8);
  } else {
   if (VAR_11->throttle_count) {
    FUNC_1(VAR_0,
        "CTRL: Had to throttle %u global event message(s) for sock %d",
        VAR_11->throttle_count, VAR_11->sock);
   }
   VAR_11->throttle_count = 0;
   FUNC_2(
    VAR_9,
    VAR_6 != VAR_3 ?
    ((void*)0) : VAR_9->ifname,
    VAR_11->sock, &VAR_11->ctrl_dst, VAR_5,
    VAR_7, VAR_8, ((void*)0), VAR_11);
  }
 }

 VAR_10 = VAR_9->ctrl_iface;

 if (VAR_6 != VAR_2 && VAR_10) {
  if (!FUNC_0(&VAR_10->msg_queue) ||
      FUNC_3(VAR_10->sock)) {
   if (VAR_10->throttle_count == 0) {
    FUNC_1(VAR_0,
        "CTRL: Had to throttle event message for sock %d",
        VAR_10->sock);
   }
   VAR_10->throttle_count++;
   FUNC_5(VAR_10->throttle_count,
        &VAR_10->msg_queue);
   FUNC_4(&VAR_10->msg_queue, VAR_9, VAR_5,
         VAR_6, VAR_7, VAR_8);
  } else {
   if (VAR_10->throttle_count) {
    FUNC_1(VAR_0,
        "CTRL: Had to throttle %u event message(s) for sock %d",
        VAR_10->throttle_count, VAR_10->sock);
   }
   VAR_10->throttle_count = 0;
   FUNC_2(VAR_9, ((void*)0), VAR_10->sock,
             &VAR_10->ctrl_dst, VAR_5,
             VAR_7, VAR_8, VAR_10, ((void*)0));
  }
 }
}
