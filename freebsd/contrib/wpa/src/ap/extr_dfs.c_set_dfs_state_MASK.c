
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hostapd_iface {struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {scalar_t__ mode; } ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hostapd_iface*,int,int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct hostapd_iface *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, int VAR_8, int VAR_9,
    int VAR_10, u32 VAR_11)
{
 int VAR_12 = 1, VAR_13;
 struct hostapd_hw_modes *VAR_14;
 int VAR_15 = VAR_5;
 int VAR_16 = 0;

 VAR_14 = VAR_4->current_mode;
 if (VAR_14 == ((void*)0))
  return 0;

 if (VAR_14->mode != VAR_0) {
  FUNC_1(VAR_3, "current_mode != IEEE80211A");
  return 0;
 }


 switch (VAR_8) {
 case 130:
 case 131:
  VAR_12 = 1;
  if (VAR_15 == 0)
   VAR_15 = VAR_9;
  break;
 case 129:
  VAR_12 = 2;
  VAR_15 = VAR_9 - 10;
  break;
 case 128:
  VAR_12 = 4;
  VAR_15 = VAR_9 - 30;
  break;
 case 132:
  VAR_12 = 8;
  VAR_15 = VAR_9 - 70;
  break;
 default:
  FUNC_1(VAR_2, "DFS chan_width %d not supported",
      VAR_8);
  break;
 }

 FUNC_1(VAR_1, "DFS freq: %dMHz, n_chans: %d", VAR_15,
     VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_16 += FUNC_0(VAR_4, VAR_15, VAR_11);
  VAR_15 = VAR_15 + 20;
 }

 return VAR_16;
}
