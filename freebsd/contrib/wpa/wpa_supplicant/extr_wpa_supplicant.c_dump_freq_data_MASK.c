
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_used_freq_data {int flags; int freq; } ;
struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*,unsigned int,char const*,...) ;

void FUNC_1(struct wpa_supplicant *VAR_1, const char *VAR_2,
      struct wpa_used_freq_data *VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_1, VAR_0, "Shared frequencies (len=%u): %s",
  VAR_4, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct wpa_used_freq_data *VAR_6 = &VAR_3[VAR_5];
  FUNC_0(VAR_1, VAR_0, "freq[%u]: %d, flags=0x%X",
   VAR_5, VAR_6->freq, VAR_6->flags);
 }
}
