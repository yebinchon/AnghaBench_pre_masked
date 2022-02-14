
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ieee80211req_scan_result {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct ieee80211_scan_entry {int* se_ssid; int* se_meshid; TYPE_1__ se_ies; } ;


 size_t FUNC_0 (size_t,int) ;

__attribute__((used)) static size_t
FUNC_1(const struct ieee80211_scan_entry *VAR_0, int *VAR_1)
{
 size_t VAR_2;

 *VAR_1 = VAR_0->se_ies.len;





 VAR_2 = sizeof(struct ieee80211req_scan_result) + VAR_0->se_ssid[1] +
     VAR_0->se_meshid[1] + *VAR_1;
 return FUNC_0(VAR_2, sizeof(uint32_t));
}
