
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hostapd_iface {struct hostapd_hw_modes* current_mode; } ;
struct hostapd_hw_modes {struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int flag; scalar_t__ chan; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_iface*,int,int) ;
 int FUNC_1 (struct hostapd_iface*,int*) ;
 int FUNC_2 (struct hostapd_iface*,int*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct hostapd_iface *VAR_3, int VAR_4,
           int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 struct hostapd_hw_modes *VAR_10;
 struct hostapd_channel_data *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = VAR_4, VAR_17 = 1;
 u8 VAR_18;
 int VAR_19 = 0;


 VAR_10 = VAR_3->current_mode;
 VAR_8 = FUNC_1(VAR_3, &VAR_9);
 VAR_12 = FUNC_2(VAR_3, &VAR_13);


 if (!FUNC_0(VAR_3, VAR_8, VAR_12))
  return 0;


 switch (VAR_5) {
 case 130:
 case 131:
  VAR_17 = 1;
  if (VAR_16 == 0)
   VAR_16 = VAR_6;
  break;
 case 129:
  VAR_17 = 2;
  VAR_16 = VAR_6 - 10;
  break;
 case 128:
  VAR_17 = 4;
  VAR_16 = VAR_6 - 30;
  break;
 case 132:
  VAR_17 = 8;
  VAR_16 = VAR_6 - 70;
  break;
 default:
  FUNC_4(VAR_2, "DFS chan_width %d not supported",
      VAR_5);
  break;
 }

 FUNC_3(VAR_16, &VAR_18);

 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_11 = &VAR_10->channels[VAR_8 + VAR_14];
  if (!(VAR_11->flag & VAR_0))
   continue;
  for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
   FUNC_4(VAR_1, "checking our: %d, radar: %d",
       VAR_11->chan, VAR_18 + VAR_15 * 4);
   if (VAR_11->chan == VAR_18 + VAR_15 * 4)
    VAR_19++;
  }
 }

 FUNC_4(VAR_1, "overlapped: %d", VAR_19);

 return VAR_19;
}
