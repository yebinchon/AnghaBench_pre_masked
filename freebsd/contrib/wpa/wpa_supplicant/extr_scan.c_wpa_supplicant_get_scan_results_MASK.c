
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ ignore_post_flush_scan_res; } ;
struct TYPE_3__ {scalar_t__ sec; } ;
struct wpa_scan_results {size_t num; TYPE_1__ fetch_time; struct wpa_scan_res** res; } ;
struct wpa_scan_res {int dummy; } ;
struct scan_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_scan_results*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_scan_results*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct wpa_scan_res**,size_t,int,int (*) (void const*,void const*)) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_scan_res*) ;
 int FUNC_5 (struct wpa_scan_res*) ;
 int FUNC_6 (struct wpa_supplicant*,struct scan_info*,int) ;
 int FUNC_7 (struct wpa_supplicant*,struct wpa_scan_res*,TYPE_1__*) ;
 int FUNC_8 (struct wpa_supplicant*) ;
 int FUNC_9 (struct wpa_supplicant*,int ,char*) ;
 struct wpa_scan_results* FUNC_10 (struct wpa_supplicant*) ;
 int FUNC_11 (void const*,void const*) ;
 int FUNC_12 (void const*,void const*) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*) ;

struct wpa_scan_results *
FUNC_14(struct wpa_supplicant *VAR_1,
    struct scan_info *VAR_2, int VAR_3)
{
 struct wpa_scan_results *VAR_4;
 size_t VAR_5;
 int (*VAR_6)(const void *, const void *) = FUNC_11;

 VAR_4 = FUNC_10(VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_9(VAR_1, VAR_0, "Failed to get scan results");
  return ((void*)0);
 }
 if (VAR_4->fetch_time.sec == 0) {




  FUNC_2(&VAR_4->fetch_time);
 }
 FUNC_1(VAR_1, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4->num; VAR_5++) {
  struct wpa_scan_res *VAR_7 = VAR_4->res[VAR_5];

  FUNC_5(VAR_7);
  FUNC_4(VAR_1, VAR_7);
 }
 if (VAR_4->res) {
  FUNC_3(VAR_4->res, VAR_4->num,
        sizeof(struct wpa_scan_res *), VAR_6);
 }
 FUNC_0(VAR_4);

 if (VAR_1->ignore_post_flush_scan_res) {



  FUNC_9(VAR_1, VAR_0,
   "Do not update BSS table based on pending post-FLUSH scan results");
  VAR_1->ignore_post_flush_scan_res = 0;
  return VAR_4;
 }

 FUNC_8(VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4->num; VAR_5++)
  FUNC_7(VAR_1, VAR_4->res[VAR_5],
     &VAR_4->fetch_time);
 FUNC_6(VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
