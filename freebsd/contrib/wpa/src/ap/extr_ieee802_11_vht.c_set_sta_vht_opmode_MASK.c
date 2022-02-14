
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {int vht_opmode; int flags; } ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

u16 FUNC_0(struct hostapd_data *VAR_2, struct sta_info *VAR_3,
         const u8 *VAR_4)
{
 if (!VAR_4) {
  VAR_3->flags &= ~VAR_1;
  return VAR_0;
 }

 VAR_3->flags |= VAR_1;
 VAR_3->vht_opmode = *VAR_4;
 return VAR_0;
}
