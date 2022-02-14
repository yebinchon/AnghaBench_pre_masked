
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {scalar_t__ ieee80211w; scalar_t__ ocv; scalar_t__ wmm_enabled; int osen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int) ;

u8 * FUNC_3(struct hostapd_data *VAR_13, u8 *VAR_14)
{
 u8 *VAR_15;
 u16 VAR_16;

 if (!VAR_13->conf->osen)
  return VAR_14;

 *VAR_14++ = VAR_9;
 VAR_15 = VAR_14++;
 FUNC_1(VAR_14, VAR_3);
 VAR_14 += 3;
 *VAR_14++ = VAR_0;


 FUNC_0(VAR_14, VAR_6);
 VAR_14 += VAR_8;


 FUNC_2(VAR_14, 1);
 VAR_14 += 2;
 FUNC_0(VAR_14, VAR_5);
 VAR_14 += VAR_8;


 FUNC_2(VAR_14, 1);
 VAR_14 += 2;
 FUNC_0(VAR_14, VAR_4);
 VAR_14 += VAR_8;


 VAR_16 = 0;
 if (VAR_13->conf->wmm_enabled) {

  VAR_16 |= (VAR_7 << 2);
 }
 FUNC_2(VAR_14, VAR_16);
 VAR_14 += 2;

 *VAR_15 = VAR_14 - VAR_15 - 1;

 return VAR_14;
}
