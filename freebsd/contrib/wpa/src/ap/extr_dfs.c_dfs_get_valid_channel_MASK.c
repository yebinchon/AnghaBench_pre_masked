
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct hostapd_iface {TYPE_1__* conf; struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {scalar_t__ mode; } ;
struct hostapd_channel_data {int dummy; } ;
typedef int _rand ;
struct TYPE_2__ {scalar_t__ secondary_channel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_iface*,struct hostapd_channel_data*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct hostapd_iface*,struct hostapd_channel_data**,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static struct hostapd_channel_data *
FUNC_4(struct hostapd_iface *VAR_2,
        int *VAR_3,
        u8 *VAR_4,
        u8 *VAR_5,
        int VAR_6)
{
 struct hostapd_hw_modes *VAR_7;
 struct hostapd_channel_data *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10;
 u32 VAR_11;

 FUNC_3(VAR_1, "DFS: Selecting random channel");
 *VAR_3 = 0;
 *VAR_4 = 0;
 *VAR_5 = 0;

 if (VAR_2->current_mode == ((void*)0))
  return ((void*)0);

 VAR_7 = VAR_2->current_mode;
 if (VAR_7->mode != VAR_0)
  return ((void*)0);


 VAR_9 = FUNC_1(VAR_2, ((void*)0), 0, VAR_6);
 if (VAR_9 == 0)
  return ((void*)0);

 if (FUNC_2((u8 *) &VAR_11, sizeof(VAR_11)) < 0)
  return ((void*)0);
 VAR_10 = VAR_11 % VAR_9;
 FUNC_1(VAR_2, &VAR_8, VAR_10, VAR_6);


 if (VAR_2->conf->secondary_channel)
  *VAR_3 = 1;
 else
  *VAR_3 = 0;

 FUNC_0(VAR_2, VAR_8,
          *VAR_3,
          VAR_4,
          VAR_5);

 return VAR_8;
}
