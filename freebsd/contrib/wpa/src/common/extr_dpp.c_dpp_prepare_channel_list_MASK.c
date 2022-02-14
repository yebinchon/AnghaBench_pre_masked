
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hostapd_hw_modes {int dummy; } ;
struct dpp_authentication {unsigned int num_freq; int * freq; int curr_freq; scalar_t__ freq_idx; TYPE_1__* peer_bi; } ;
typedef int freqs ;
struct TYPE_2__ {scalar_t__ num_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpp_authentication*,struct hostapd_hw_modes*,int ) ;
 int FUNC_1 (struct dpp_authentication*,struct hostapd_hw_modes*,int ) ;
 int FUNC_2 (int *,unsigned int,int) ;
 int FUNC_3 (char*,int,char*,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct dpp_authentication *VAR_2,
        struct hostapd_hw_modes *VAR_3,
        u16 VAR_4)
{
 int VAR_5;
 char VAR_6[VAR_0 * 6 + 10], *VAR_7, *VAR_8;
 unsigned int VAR_9;

 if (VAR_2->peer_bi->num_freq > 0)
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;



 FUNC_2(VAR_2->freq, VAR_2->num_freq, 2462);
 FUNC_2(VAR_2->freq, VAR_2->num_freq, 2412);
 FUNC_2(VAR_2->freq, VAR_2->num_freq, 2437);

 VAR_2->freq_idx = 0;
 VAR_2->curr_freq = VAR_2->freq[0];

 VAR_7 = VAR_6;
 VAR_8 = VAR_7 + sizeof(VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_2->num_freq; VAR_9++) {
  VAR_5 = FUNC_3(VAR_7, VAR_8 - VAR_7, " %u", VAR_2->freq[VAR_9]);
  if (FUNC_4(VAR_8 - VAR_7, VAR_5))
   break;
  VAR_7 += VAR_5;
 }
 *VAR_7 = '\0';
 FUNC_5(VAR_1, "DPP: Possible frequencies for initiating:%s",
     VAR_6);

 return 0;
}
