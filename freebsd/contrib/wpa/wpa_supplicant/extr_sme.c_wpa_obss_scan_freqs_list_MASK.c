
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int ht_sec_chan; } ;
struct TYPE_4__ {int num_modes; int modes; } ;
struct wpa_supplicant {int assoc_freq; TYPE_2__ sme; scalar_t__ current_bss; TYPE_1__ hw; } ;
struct wpa_driver_scan_params {int* freqs; } ;
struct hostapd_hw_modes {int num_channels; TYPE_3__* channels; } ;
struct TYPE_6__ {int flag; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 struct hostapd_hw_modes* FUNC_0 (int ,int ,int ) ;
 int* FUNC_1 (int,int) ;
 int* FUNC_2 (int) ;
 int* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,char*,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct wpa_supplicant *VAR_7,
         struct wpa_driver_scan_params *VAR_8)
{

 struct hostapd_hw_modes *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_0(VAR_7->hw.modes, VAR_7->hw.num_modes,
   VAR_1);
 if (VAR_9 == ((void*)0)) {

  VAR_8->freqs = FUNC_2(sizeof(int));
  return;
 }

 if (VAR_7->sme.ht_sec_chan == 128 &&
     VAR_7->current_bss) {
  const u8 *VAR_14;

  VAR_14 = FUNC_3(VAR_7->current_bss, VAR_6);
  if (VAR_14 && VAR_14[1] >= 2) {
   u8 VAR_15;

   VAR_15 = VAR_14[3] & VAR_4;
   if (VAR_15 == VAR_2)
    VAR_7->sme.ht_sec_chan = 130;
   else if (VAR_15 == VAR_3)
    VAR_7->sme.ht_sec_chan = 129;
  }
 }

 VAR_12 = VAR_7->assoc_freq - 10;
 VAR_13 = VAR_7->assoc_freq + 10;
 switch (VAR_7->sme.ht_sec_chan) {
 case 128:

  if (VAR_7->assoc_freq <= 2452)
   VAR_12 -= 20;

  if (VAR_7->assoc_freq >= 2432)
   VAR_13 += 20;
  break;
 case 130:
  VAR_13 += 20;
  break;
 case 129:
  VAR_12 -= 20;
  break;
 }
 FUNC_4(VAR_5,
     "OBSS: assoc_freq %d possible affected range %d-%d",
     VAR_7->assoc_freq, VAR_12, VAR_13);

 VAR_8->freqs = FUNC_1(VAR_9->num_channels + 1, sizeof(int));
 if (VAR_8->freqs == ((void*)0))
  return;
 for (VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9->num_channels; VAR_11++) {
  int VAR_16;

  if (VAR_9->channels[VAR_11].flag & VAR_0)
   continue;
  VAR_16 = VAR_9->channels[VAR_11].freq;
  if (VAR_16 - 10 >= VAR_13 || VAR_16 + 10 <= VAR_12)
   continue;
  VAR_8->freqs[VAR_10++] = VAR_16;
 }
}
