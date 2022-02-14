
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hostapd_hw_modes {int num_channels; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {scalar_t__ freq; } ;


 int FUNC_0 (struct hostapd_channel_data*,int ,int,int) ;
 int FUNC_1 (struct hostapd_channel_data*) ;
 int FUNC_2 (struct hostapd_channel_data*,int) ;
 struct hostapd_channel_data* FUNC_3 (struct hostapd_hw_modes*,scalar_t__,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hostapd_hw_modes *VAR_0,
        int VAR_1, int VAR_2,
        int VAR_3)
{
 struct hostapd_channel_data *VAR_4, *VAR_5;
 int VAR_6;
 u32 VAR_7 = FUNC_4(VAR_2);

 if (VAR_1 + VAR_2 > VAR_0->num_channels)
  return 0;

 VAR_4 = &VAR_0->channels[VAR_1];




 if (!FUNC_1(VAR_4))
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = FUNC_3(VAR_0, VAR_4->freq + VAR_6 * 20,
      VAR_1);
  if (!VAR_5)
   return 0;



  if (!FUNC_0(VAR_5, VAR_7, 1, !VAR_6))
   return 0;

  if (!FUNC_2(VAR_5, VAR_3))
   return 0;
 }

 return 1;
}
