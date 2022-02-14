
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_freq_range_list {int dummy; } ;
struct p2p_channels {int dummy; } ;


 scalar_t__ FUNC_0 (struct wpa_freq_range_list*,int) ;
 int FUNC_1 (int*,unsigned int) ;
 scalar_t__ FUNC_2 (struct p2p_channels*,int,int) ;

int FUNC_3(struct p2p_channels *VAR_0, u8 *VAR_1,
         u8 *VAR_2,
         struct wpa_freq_range_list *VAR_3,
         struct wpa_freq_range_list *VAR_4)
{
 u8 VAR_5[4];
 unsigned int VAR_6 = 0;







 if (FUNC_2(VAR_0, 81, 1) ||
     (FUNC_0(VAR_3, 2412) &&
      !FUNC_0(VAR_4, 2412)))
  VAR_5[VAR_6++] = 1;
 if (FUNC_2(VAR_0, 81, 6) ||
     (FUNC_0(VAR_3, 2437) &&
      !FUNC_0(VAR_4, 2437)))
  VAR_5[VAR_6++] = 6;
 if (FUNC_2(VAR_0, 81, 11) ||
     (FUNC_0(VAR_3, 2462) &&
      !FUNC_0(VAR_4, 2462)))
  VAR_5[VAR_6++] = 11;


 if (FUNC_2(VAR_0, 180, 2))
  VAR_5[VAR_6++] = 2;

 if (VAR_6 == 0)
  return -1;

 *VAR_2 = FUNC_1(VAR_5, VAR_6);
 if (*VAR_2 == 2)
  *VAR_1 = 180;
 else
  *VAR_1 = 81;

 return 0;
}
