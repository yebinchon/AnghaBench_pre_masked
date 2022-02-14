
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hostapd_hw_modes {int dummy; } ;
struct dpp_bootstrap_info {unsigned int num_freq; unsigned int* freq; } ;
struct dpp_authentication {unsigned int* freq; unsigned int curr_freq; int num_freq; struct dpp_bootstrap_info* peer_bi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_hw_modes*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int*,int ,unsigned int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct dpp_authentication *VAR_1,
     struct hostapd_hw_modes *VAR_2,
     u16 VAR_3)
{
 struct dpp_bootstrap_info *VAR_4 = VAR_1->peer_bi;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_freq; VAR_5++) {
  VAR_6 = VAR_4->freq[VAR_5];
  if (FUNC_1(VAR_1->freq, VAR_1->num_freq, VAR_6))
   continue;
  if (FUNC_0(VAR_2, VAR_3, VAR_6))
   VAR_1->freq[VAR_1->num_freq++] = VAR_6;
 }
 if (!VAR_1->num_freq) {
  FUNC_2(VAR_0,
      "DPP: No available channels for initiating DPP Authentication");
  return -1;
 }
 VAR_1->curr_freq = VAR_1->freq[0];
 return 0;
}
