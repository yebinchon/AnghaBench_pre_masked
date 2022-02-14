
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int scan_interval; int new_connection; int fils_hlp_req; int bss_tmp_disallowed; scalar_t__ sched_scanning; struct wpa_supplicant* parent; struct wpa_supplicant* p2pdev; int scan_req; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct wpa_supplicant* FUNC_1 (int) ;

__attribute__((used)) static struct wpa_supplicant *
FUNC_2(struct wpa_supplicant *VAR_1)
{
 struct wpa_supplicant *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 VAR_2->scan_req = VAR_0;
 VAR_2->scan_interval = 5;
 VAR_2->new_connection = 1;
 VAR_2->parent = VAR_1 ? VAR_1 : VAR_2;
 VAR_2->p2pdev = VAR_2->parent;
 VAR_2->sched_scanning = 0;

 FUNC_0(&VAR_2->bss_tmp_disallowed);
 FUNC_0(&VAR_2->fils_hlp_req);

 return VAR_2;
}
