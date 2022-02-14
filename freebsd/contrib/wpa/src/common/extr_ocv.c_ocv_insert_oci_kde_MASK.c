
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_channel_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct wpa_channel_info*,int **) ;

int FUNC_2(struct wpa_channel_info *VAR_3, u8 **VAR_4)
{
 u8 *VAR_5 = *VAR_4;

 *VAR_5++ = VAR_2;
 *VAR_5++ = VAR_1 + 3;
 FUNC_0(VAR_5, VAR_0);
 VAR_5 += VAR_1;

 *VAR_4 = VAR_5;
 return FUNC_1(VAR_3, VAR_4);
}
