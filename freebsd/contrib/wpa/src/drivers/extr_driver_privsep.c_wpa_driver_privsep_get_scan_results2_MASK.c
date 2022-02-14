
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_results {size_t num; int ie_len; int beacon_ie_len; struct wpa_scan_results** res; } ;
typedef struct wpa_scan_results u8 ;
struct wpa_scan_res {size_t num; int ie_len; int beacon_ie_len; struct wpa_scan_res** res; } ;
struct wpa_driver_privsep_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpa_scan_results** FUNC_0 (int,int) ;
 int FUNC_1 (struct wpa_scan_results*) ;
 struct wpa_scan_results* FUNC_2 (size_t) ;
 int FUNC_3 (int*,struct wpa_scan_results*,int) ;
 struct wpa_scan_results* FUNC_4 (struct wpa_scan_results*,int) ;
 struct wpa_scan_results* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct wpa_driver_privsep_data*,int ,int *,int ,struct wpa_scan_results*,size_t*) ;

__attribute__((used)) static struct wpa_scan_results *
FUNC_8(void *VAR_3)
{
 struct wpa_driver_privsep_data *VAR_4 = VAR_3;
 int VAR_5, VAR_6;
 u8 *VAR_7, *VAR_8, *VAR_9;
 size_t VAR_10 = 60000;
 struct wpa_scan_results *VAR_11;
 struct wpa_scan_res *VAR_12;

 VAR_7 = FUNC_2(VAR_10);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_5 = FUNC_7(VAR_4, VAR_2,
      ((void*)0), 0, VAR_7, &VAR_10);
 if (VAR_5 < 0) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 FUNC_6(VAR_0, "privsep: Received %lu bytes of scan results",
     (unsigned long) VAR_10);
 if (VAR_10 < sizeof(int)) {
  FUNC_6(VAR_0, "privsep: Invalid scan result len %lu",
      (unsigned long) VAR_10);
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 VAR_8 = VAR_7;
 VAR_9 = VAR_7 + VAR_10;
 FUNC_3(&VAR_6, VAR_8, sizeof(int));
 if (VAR_6 < 0 || VAR_6 > 1000) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }
 VAR_8 += sizeof(int);

 VAR_11 = FUNC_5(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 VAR_11->res = FUNC_0(VAR_6, sizeof(struct wpa_scan_res *));
 if (VAR_11->res == ((void*)0)) {
  FUNC_1(VAR_11);
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 while (VAR_11->num < (size_t) VAR_6 && VAR_9 - VAR_8 > (int) sizeof(int)) {
  int VAR_13;
  FUNC_3(&VAR_13, VAR_8, sizeof(int));
  VAR_8 += sizeof(int);
  if (VAR_13 < 0 || VAR_13 > 10000 || VAR_13 > VAR_9 - VAR_8)
   break;

  VAR_12 = FUNC_4(VAR_8, VAR_13);
  if (VAR_12 == ((void*)0))
   break;
  VAR_8 += VAR_13;
  if (sizeof(*VAR_12) + VAR_12->ie_len + VAR_12->beacon_ie_len > (size_t) VAR_13) {
   FUNC_6(VAR_1,
       "privsep: Invalid scan result len (%d + %d + %d > %d)",
       (int) sizeof(*VAR_12), (int) VAR_12->ie_len,
       (int) VAR_12->beacon_ie_len, VAR_13);
   FUNC_1(VAR_12);
   break;
  }

  VAR_11->res[VAR_11->num++] = VAR_12;
 }

 FUNC_1(VAR_7);
 return VAR_11;
}
