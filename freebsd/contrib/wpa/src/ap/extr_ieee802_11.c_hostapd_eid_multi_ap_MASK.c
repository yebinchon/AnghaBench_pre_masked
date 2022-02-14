
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int multi_ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;

u8 * FUNC_1(struct hostapd_data *VAR_4, u8 *VAR_5)
{
 u8 VAR_6 = 0;

 if (!VAR_4->conf->multi_ap)
  return VAR_5;
 if (VAR_4->conf->multi_ap & VAR_0)
  VAR_6 |= VAR_2;
 if (VAR_4->conf->multi_ap & VAR_1)
  VAR_6 |= VAR_3;

 return VAR_5 + FUNC_0(VAR_5, 9, VAR_6);
}
