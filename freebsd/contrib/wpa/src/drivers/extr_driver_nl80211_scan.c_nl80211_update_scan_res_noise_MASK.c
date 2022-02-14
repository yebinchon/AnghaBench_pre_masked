
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_res {int freq; int flags; int noise; } ;
struct nl80211_noise_info {unsigned int count; int * noise; scalar_t__* freq; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wpa_scan_res *VAR_1,
       struct nl80211_noise_info *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_1 && VAR_3 < VAR_2->count; VAR_3++) {
  if ((int) VAR_2->freq[VAR_3] != VAR_1->freq ||
      !(VAR_1->flags & VAR_0))
   continue;
  VAR_1->noise = VAR_2->noise[VAR_3];
  VAR_1->flags &= ~VAR_0;
 }
}
