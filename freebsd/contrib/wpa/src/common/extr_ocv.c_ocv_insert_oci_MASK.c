
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wpa_channel_info {int seg1_idx; int sec_channel; int chanwidth; int frequency; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,void**,void**) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct wpa_channel_info *VAR_1, u8 **VAR_2)
{
 u8 VAR_3, VAR_4;
 u8 *VAR_5 = *VAR_2;

 if (FUNC_0(VAR_1->frequency, VAR_1->chanwidth,
       VAR_1->sec_channel,
       &VAR_3, &VAR_4) < 0) {
  FUNC_1(VAR_0,
      "Cannot determine operating class and channel for OCI element");
  return -1;
 }

 *VAR_5++ = VAR_3;
 *VAR_5++ = VAR_4;
 *VAR_5++ = VAR_1->seg1_idx;

 *VAR_2 = VAR_5;
 return 0;
}
