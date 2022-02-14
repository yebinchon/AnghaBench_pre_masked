
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wpa_scan_results {scalar_t__ num; } ;
struct ieee80211req_scan_result {scalar_t__ isr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int *,int) ;
 struct wpa_scan_results* FUNC_1 (int) ;
 int FUNC_2 (struct wpa_scan_results*,struct ieee80211req_scan_result*) ;
 int FUNC_3 (int ,char*,int,unsigned long) ;

struct wpa_scan_results *
FUNC_4(void *VAR_2)
{
 struct ieee80211req_scan_result *VAR_3;
 struct wpa_scan_results *VAR_4;
 int VAR_5, VAR_6;
 uint8_t VAR_7[24*1024], *VAR_8;

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_7, 24*1024);
 if (VAR_5 < 0)
  return ((void*)0);

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_8 = VAR_7;
 VAR_6 = VAR_5;
 while (VAR_6 >= sizeof(struct ieee80211req_scan_result)) {
  VAR_3 = (struct ieee80211req_scan_result *)VAR_8;
  FUNC_2(VAR_4, VAR_3);
  VAR_8 += VAR_3->isr_len;
  VAR_6 -= VAR_3->isr_len;
 }

 FUNC_3(VAR_1, "Received %d bytes of scan results (%lu BSSes)",
     VAR_5, (unsigned long)VAR_4->num);

 return VAR_4;
}
