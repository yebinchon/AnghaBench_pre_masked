
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;
struct p2p_srv_bonjour {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*) ;
 struct p2p_srv_bonjour* FUNC_1 (struct wpa_supplicant*,struct wpabuf const*) ;
 int FUNC_2 (struct p2p_srv_bonjour*) ;

int FUNC_3(struct wpa_supplicant *VAR_0,
     const struct wpabuf *VAR_1)
{
 struct p2p_srv_bonjour *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return -1;
 FUNC_2(VAR_2);
 FUNC_0(VAR_0);
 return 0;
}
