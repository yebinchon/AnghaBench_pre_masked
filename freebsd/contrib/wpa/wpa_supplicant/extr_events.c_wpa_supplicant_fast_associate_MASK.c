
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ last_scan_res_used; int last_scan; scalar_t__ ignore_post_flush_scan_res; } ;
struct os_reltime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct os_reltime*) ;
 scalar_t__ FUNC_1 (struct os_reltime*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int) ;

int FUNC_4(struct wpa_supplicant *VAR_1)
{



 struct os_reltime VAR_2;

 VAR_1->ignore_post_flush_scan_res = 0;

 if (VAR_1->last_scan_res_used == 0)
  return -1;

 FUNC_0(&VAR_2);
 if (FUNC_1(&VAR_2, &VAR_1->last_scan, 5)) {
  FUNC_2(VAR_0, "Fast associate: Old scan results");
  return -1;
 }

 return FUNC_3(VAR_1, 0, 1);

}
