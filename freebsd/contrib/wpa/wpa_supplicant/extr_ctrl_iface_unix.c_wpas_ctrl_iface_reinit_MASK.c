
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct ctrl_iface_priv {int sock; scalar_t__ android_control_socket; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct wpa_supplicant*,struct ctrl_iface_priv*) ;

__attribute__((used)) static int FUNC_3(struct wpa_supplicant *VAR_0,
      struct ctrl_iface_priv *VAR_1)
{
 int VAR_2;

 if (VAR_1->sock <= 0)
  return -1;
 if (VAR_1->android_control_socket)
  return VAR_1->sock;

 FUNC_1(VAR_1->sock);
 FUNC_0(VAR_1->sock);
 VAR_1->sock = -1;
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return -1;
 return VAR_1->sock;
}
