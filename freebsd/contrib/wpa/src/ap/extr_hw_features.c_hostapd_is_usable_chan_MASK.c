
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_iface {int current_mode; } ;
struct hostapd_channel_data {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hostapd_channel_data*) ;
 struct hostapd_channel_data* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,char*,int,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct hostapd_iface *VAR_4,
      int VAR_5, int VAR_6)
{
 struct hostapd_channel_data *VAR_7;

 if (!VAR_4->current_mode)
  return 0;

 VAR_7 = FUNC_1(VAR_4->current_mode, VAR_5, ((void*)0));
 if (!VAR_7)
  return 0;

 if ((VAR_6 && FUNC_0(VAR_7)) ||
     (!VAR_6 && !(VAR_7->flag & VAR_0)))
  return 1;

 FUNC_2(VAR_3,
     "Channel %d (%s) not allowed for AP mode, flags: 0x%x%s%s",
     VAR_5, VAR_6 ? "primary" : "secondary",
     VAR_7->flag,
     VAR_7->flag & VAR_1 ? " NO-IR" : "",
     VAR_7->flag & VAR_2 ? " RADAR" : "");
 return 0;
}
