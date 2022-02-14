
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; int * ext_pw; int * ctrl_iface; int scard; int * eapol; int * wpa; } ;
struct extra_radius_attr {struct extra_radius_attr* next; struct extra_radius_attr* auth_server; struct extra_radius_attr* shared_secret; } ;
struct eapol_test_data {struct extra_radius_attr* extra_attrs; struct extra_radius_attr* radius_conf; struct extra_radius_attr* eap_identity; int * last_recv_radius; int last_eap_radius; int radius; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct extra_radius_attr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct eapol_test_data *VAR_0,
        struct wpa_supplicant *VAR_1)
{
 struct extra_radius_attr *VAR_2, *VAR_3;

 FUNC_7(VAR_1->wpa);
 VAR_1->wpa = ((void*)0);
 FUNC_3(VAR_0->radius);
 FUNC_9(VAR_0->last_eap_radius);
 FUNC_4(VAR_0->last_recv_radius);
 VAR_0->last_recv_radius = ((void*)0);
 FUNC_2(VAR_0->eap_identity);
 VAR_0->eap_identity = ((void*)0);
 FUNC_0(VAR_1->eapol);
 VAR_1->eapol = ((void*)0);
 if (VAR_0->radius_conf && VAR_0->radius_conf->auth_server) {
  FUNC_2(VAR_0->radius_conf->auth_server->shared_secret);
  FUNC_2(VAR_0->radius_conf->auth_server);
 }
 FUNC_2(VAR_0->radius_conf);
 VAR_0->radius_conf = ((void*)0);
 FUNC_5(VAR_1->scard);
 if (VAR_1->ctrl_iface) {
  FUNC_8(VAR_1->ctrl_iface);
  VAR_1->ctrl_iface = ((void*)0);
 }

 FUNC_1(VAR_1->ext_pw);
 VAR_1->ext_pw = ((void*)0);

 FUNC_6(VAR_1->conf);

 VAR_2 = VAR_0->extra_attrs;
 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_2(VAR_3);
 }
}
