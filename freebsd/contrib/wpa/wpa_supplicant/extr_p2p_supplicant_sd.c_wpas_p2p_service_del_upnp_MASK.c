
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dummy; } ;
struct p2p_srv_upnp {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*) ;
 struct p2p_srv_upnp* FUNC_1 (struct wpa_supplicant*,int ,char const*) ;
 int FUNC_2 (struct p2p_srv_upnp*) ;

int FUNC_3(struct wpa_supplicant *VAR_0, u8 VAR_1,
         const char *VAR_2)
{
 struct p2p_srv_upnp *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return -1;
 FUNC_2(VAR_3);
 FUNC_0(VAR_0);
 return 0;
}
