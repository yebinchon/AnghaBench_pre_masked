
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_scan_results {size_t num; int * res; } ;


 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;

void FUNC_2(struct wpa_supplicant *VAR_0,
        struct wpa_scan_results *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num; VAR_2++)
  FUNC_1(VAR_0, VAR_1->res[VAR_2]);

 FUNC_0(VAR_0);
}
