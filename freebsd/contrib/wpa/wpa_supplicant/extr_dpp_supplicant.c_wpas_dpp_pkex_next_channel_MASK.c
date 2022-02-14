
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct dpp_pkex {int freq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wpa_supplicant*,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1,
          struct dpp_pkex *VAR_2)
{
 if (VAR_2->freq == 2437)
  VAR_2->freq = 5745;
 else if (VAR_2->freq == 5745)
  VAR_2->freq = 5220;
 else if (VAR_2->freq == 5220)
  VAR_2->freq = 60480;
 else
  return -1;

 if (FUNC_1(VAR_1, VAR_2->freq) == 1) {
  FUNC_0(VAR_0, "DPP: Try to initiate on %u MHz",
      VAR_2->freq);
  return 0;
 }


 return FUNC_2(VAR_1, VAR_2);
}
