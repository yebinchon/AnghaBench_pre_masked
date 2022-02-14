
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {int dummy; } ;
struct autoscan_exponential_data {int interval; int limit; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1,
         struct wpa_scan_results *VAR_2)
{
 struct autoscan_exponential_data *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "autoscan exponential: scan result "
     "notification");

 if (VAR_3->interval >= VAR_3->limit)
  return VAR_3->limit;

 if (VAR_3->interval <= 0)
  VAR_3->interval = VAR_3->base;
 else {
  VAR_3->interval = VAR_3->interval * VAR_3->base;
  if (VAR_3->interval > VAR_3->limit)
   return VAR_3->limit;
 }

 return VAR_3->interval;
}
