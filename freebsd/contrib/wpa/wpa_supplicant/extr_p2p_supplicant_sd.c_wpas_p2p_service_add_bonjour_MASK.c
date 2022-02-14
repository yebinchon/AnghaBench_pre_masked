
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_srv_bonjour {int list; struct wpabuf* resp; struct wpabuf* query; } ;
struct TYPE_2__ {int p2p_srv_bonjour; } ;


 int FUNC_0 (int *,int *) ;
 struct p2p_srv_bonjour* FUNC_1 (int) ;
 int FUNC_2 (struct wpa_supplicant*) ;

int FUNC_3(struct wpa_supplicant *VAR_0,
     struct wpabuf *VAR_1, struct wpabuf *VAR_2)
{
 struct p2p_srv_bonjour *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return -1;
 VAR_3->query = VAR_1;
 VAR_3->resp = VAR_2;
 FUNC_0(&VAR_0->global->p2p_srv_bonjour, &VAR_3->list);

 FUNC_2(VAR_0);
 return 0;
}
