
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_srv_upnp {int list; int * service; int version; } ;
struct TYPE_2__ {int p2p_srv_upnp; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct p2p_srv_upnp*) ;
 int * FUNC_2 (char const*) ;
 struct p2p_srv_upnp* FUNC_3 (int) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,int ,char const*) ;

int FUNC_6(struct wpa_supplicant *VAR_0, u8 VAR_1,
         const char *VAR_2)
{
 struct p2p_srv_upnp *VAR_3;

 if (FUNC_5(VAR_0, VAR_1, VAR_2))
  return 0;
 VAR_3 = FUNC_3(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return -1;
 VAR_3->version = VAR_1;
 VAR_3->service = FUNC_2(VAR_2);
 if (VAR_3->service == ((void*)0)) {
  FUNC_1(VAR_3);
  return -1;
 }
 FUNC_0(&VAR_0->global->p2p_srv_upnp, &VAR_3->list);

 FUNC_4(VAR_0);
 return 0;
}
