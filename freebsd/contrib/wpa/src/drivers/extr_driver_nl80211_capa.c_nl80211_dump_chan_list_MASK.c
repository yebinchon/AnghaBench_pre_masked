
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hostapd_hw_modes {int num_channels; int mode; struct hostapd_channel_data* channels; } ;
struct hostapd_channel_data {int flag; int freq; } ;
typedef int str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int ,char*,char*,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct hostapd_hw_modes *VAR_4,
       u16 VAR_5)
{
 int VAR_6;

 if (!VAR_4)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct hostapd_hw_modes *VAR_7 = &VAR_4[VAR_6];
  char VAR_8[200];
  char *VAR_9 = VAR_8;
  char *VAR_10 = VAR_9 + sizeof(VAR_8);
  int VAR_11, VAR_12;

  for (VAR_11 = 0; VAR_11 < VAR_7->num_channels; VAR_11++) {
   struct hostapd_channel_data *VAR_13 = &VAR_7->channels[VAR_11];

   VAR_12 = FUNC_1(VAR_9, VAR_10 - VAR_9, " %d%s%s%s",
       VAR_13->freq,
       (VAR_13->flag & VAR_0) ?
       "[DISABLED]" : "",
       (VAR_13->flag & VAR_1) ?
       "[NO_IR]" : "",
       (VAR_13->flag & VAR_2) ?
       "[RADAR]" : "");
   if (FUNC_2(VAR_10 - VAR_9, VAR_12))
    break;
   VAR_9 += VAR_12;
  }

  *VAR_9 = '\0';
  FUNC_3(VAR_3, "nl80211: Mode IEEE %s:%s",
      FUNC_0(VAR_7->mode), VAR_8);
 }
}
