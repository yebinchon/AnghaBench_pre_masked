
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int mbo_enabled; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 struct sta_info* FUNC_1 (struct hostapd_data*,int const*) ;
 int FUNC_2 (struct sta_info*,int const,int const*,int,int*) ;
 int FUNC_3 (int ,char*,int const,int const) ;

void FUNC_4(struct hostapd_data *VAR_3, const u8 *VAR_4,
     const u8 *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7, *VAR_8;
 u8 VAR_9;
 struct sta_info *VAR_10;
 int VAR_11 = 1;

 if (!VAR_3->conf->mbo_enabled)
  return;

 VAR_10 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_10)
  return;

 VAR_7 = VAR_5;
 VAR_8 = VAR_5 + VAR_6;

 while (VAR_8 - VAR_7 > 1) {
  VAR_9 = VAR_7[1];

  if (2 + VAR_9 > VAR_8 - VAR_7)
   break;

  if (VAR_7[0] == VAR_2 &&
      VAR_9 >= 4 && FUNC_0(VAR_7 + 2) == VAR_1)
   FUNC_2(VAR_10, VAR_7[5],
        VAR_7 + 6, VAR_9 - 4,
        &VAR_11);
  else
   FUNC_3(VAR_0,
       "MBO: Ignore unknown WNM Notification element %u (len=%u)",
       VAR_7[0], VAR_7[1]);

  VAR_7 += 2 + VAR_7[1];
 }
}
