
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {int dummy; } ;
struct autoscan_periodic_data {int periodic_interval; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1,
      struct wpa_scan_results *VAR_2)
{
 struct autoscan_periodic_data *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "autoscan periodic: scan result notification");

 return VAR_3->periodic_interval;
}
