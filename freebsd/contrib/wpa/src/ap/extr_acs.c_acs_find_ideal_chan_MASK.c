
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long double u32 ;
struct hostapd_iface {TYPE_1__* current_mode; TYPE_2__* conf; } ;
struct hostapd_channel_data {long double chan; long double interference_factor; long double freq; } ;
struct acs_bias {scalar_t__ channel; long double bias; } ;
struct TYPE_4__ {int secondary_channel; unsigned int num_acs_chan_bias; struct acs_bias* acs_chan_bias; scalar_t__ ieee80211ax; scalar_t__ ieee80211ac; scalar_t__ ieee80211n; } ;
struct TYPE_3__ {int num_channels; scalar_t__ mode; struct hostapd_channel_data* channels; } ;


 long double VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hostapd_channel_data* FUNC_0 (struct hostapd_iface*,long double) ;
 scalar_t__ FUNC_1 (struct hostapd_channel_data*) ;
 int FUNC_2 (struct hostapd_channel_data*) ;
 int FUNC_3 (struct hostapd_channel_data*) ;
 int FUNC_4 (struct hostapd_channel_data*) ;
 int FUNC_5 (struct hostapd_channel_data*,long double,int,int) ;
 int FUNC_6 (struct hostapd_channel_data*) ;
 int const FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct hostapd_iface*,struct hostapd_channel_data*) ;
 long double FUNC_11 (int) ;
 int FUNC_12 (int ,char*,...) ;

__attribute__((used)) static struct hostapd_channel_data *
FUNC_13(struct hostapd_iface *VAR_6)
{
 struct hostapd_channel_data *VAR_7, *VAR_8, *VAR_9 = ((void*)0),
  *VAR_10 = ((void*)0);
 long double VAR_11, VAR_12 = 0;
 int VAR_13, VAR_14;
 int VAR_15 = 1;
 u32 VAR_16;
 unsigned int VAR_17;



 if (VAR_6->conf->ieee80211n &&
     VAR_6->conf->secondary_channel == -1) {
  FUNC_12(VAR_5, "ACS: HT40- is not supported yet. Please try HT40+");
  return ((void*)0);
 }

 if (VAR_6->conf->ieee80211n &&
     VAR_6->conf->secondary_channel)
  VAR_15 = 2;

 if (VAR_6->conf->ieee80211ac || VAR_6->conf->ieee80211ax) {
  switch (FUNC_7(VAR_6->conf)) {
  case 128:
   VAR_15 = 4;
   break;
  case 129:
   VAR_15 = 8;
   break;
  }
 }

 VAR_16 = FUNC_11(VAR_15);



 FUNC_12(VAR_4,
     "ACS: Survey analysis for selected bandwidth %d MHz", VAR_16);

 for (VAR_13 = 0; VAR_13 < VAR_6->current_mode->num_channels; VAR_13++) {
  double VAR_18;
  struct acs_bias *VAR_19, VAR_20;

  VAR_7 = &VAR_6->current_mode->channels[VAR_13];





  if (!FUNC_6(VAR_7))
   continue;

  if (!FUNC_10(VAR_6, VAR_7))
   continue;

  if (!FUNC_5(VAR_7, VAR_16, 1, 1)) {
   FUNC_12(VAR_4,
       "ACS: Channel %d: BW %u is not supported",
       VAR_7->chan, VAR_16);
   continue;
  }



  if (VAR_6->current_mode->mode == VAR_3 &&
      VAR_6->conf->ieee80211n &&
      VAR_6->conf->secondary_channel &&
      !FUNC_2(VAR_7)) {
   FUNC_12(VAR_4, "ACS: Channel %d: not allowed as primary channel for HT40",
       VAR_7->chan);
   continue;
  }

  if (VAR_6->current_mode->mode == VAR_3 &&
      (VAR_6->conf->ieee80211ac || VAR_6->conf->ieee80211ax)) {
   if (FUNC_7(VAR_6->conf) ==
       128 &&
       !FUNC_4(VAR_7)) {
    FUNC_12(VAR_4,
        "ACS: Channel %d: not allowed as primary channel for VHT80",
        VAR_7->chan);
    continue;
   }

   if (FUNC_7(VAR_6->conf) ==
       129 &&
       !FUNC_3(VAR_7)) {
    FUNC_12(VAR_4,
        "ACS: Channel %d: not allowed as primary channel for VHT160",
        VAR_7->chan);
    continue;
   }
  }

  VAR_11 = 0;
  if (FUNC_1(VAR_7))
   VAR_11 = VAR_7->interference_factor;
  VAR_18 = 1;

  for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++) {
   VAR_8 = FUNC_0(VAR_6, VAR_7->freq + (VAR_14 * 20));
   if (!VAR_8)
    break;

   if (!FUNC_5(VAR_8, VAR_16, 1, 0)) {
    FUNC_12(VAR_4,
        "ACS: PRI Channel %d: secondary channel %d BW %u is not supported",
        VAR_7->chan, VAR_8->chan, VAR_16);
    break;
   }

   if (FUNC_1(VAR_8)) {
    VAR_11 += VAR_8->interference_factor;
    VAR_18 += 1;
   }
  }

  if (VAR_14 != VAR_15) {
   FUNC_12(VAR_4, "ACS: Channel %d: not enough bandwidth",
       VAR_7->chan);
   continue;
  }



  if (FUNC_8(VAR_6->current_mode->mode)) {
   for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    VAR_8 = FUNC_0(VAR_6, VAR_7->freq +
        (VAR_14 * 20) - 5);
    if (VAR_8 && FUNC_1(VAR_8)) {
     VAR_11 += VAR_1 *
      VAR_8->interference_factor;
     VAR_18 += VAR_1;
    }

    VAR_8 = FUNC_0(VAR_6, VAR_7->freq +
        (VAR_14 * 20) - 10);
    if (VAR_8 && FUNC_1(VAR_8)) {
     VAR_11 += VAR_2 *
      VAR_8->interference_factor;
     VAR_18 += VAR_2;
    }

    VAR_8 = FUNC_0(VAR_6, VAR_7->freq +
        (VAR_14 * 20) + 5);
    if (VAR_8 && FUNC_1(VAR_8)) {
     VAR_11 += VAR_1 *
      VAR_8->interference_factor;
     VAR_18 += VAR_1;
    }

    VAR_8 = FUNC_0(VAR_6, VAR_7->freq +
        (VAR_14 * 20) + 10);
    if (VAR_8 && FUNC_1(VAR_8)) {
     VAR_11 += VAR_2 *
      VAR_8->interference_factor;
     VAR_18 += VAR_2;
    }
   }
  }

  VAR_11 /= VAR_18;

  VAR_19 = ((void*)0);
  if (VAR_6->conf->acs_chan_bias) {
   for (VAR_17 = 0; VAR_17 < VAR_6->conf->num_acs_chan_bias; VAR_17++) {
    VAR_19 = &VAR_6->conf->acs_chan_bias[VAR_17];
    if (VAR_19->channel == VAR_7->chan)
     break;
    VAR_19 = ((void*)0);
   }
  } else if (FUNC_8(VAR_6->current_mode->mode) &&
      FUNC_9(VAR_7->chan)) {
   VAR_20.channel = VAR_7->chan;
   VAR_20.bias = VAR_0;
   VAR_19 = &VAR_20;
  }

  if (VAR_19) {
   VAR_11 *= VAR_19->bias;
   FUNC_12(VAR_4,
       "ACS:  * channel %d: total interference = %Lg (%f bias)",
       VAR_7->chan, VAR_11, VAR_19->bias);
  } else {
   FUNC_12(VAR_4,
       "ACS:  * channel %d: total interference = %Lg",
       VAR_7->chan, VAR_11);
  }

  if (FUNC_1(VAR_7) &&
      (!VAR_9 || VAR_11 < VAR_12)) {
   VAR_12 = VAR_11;
   VAR_9 = VAR_7;
  }


  if (!VAR_10)
   VAR_10 = VAR_7;
 }

 if (VAR_9) {
  FUNC_12(VAR_4, "ACS: Ideal channel is %d (%d MHz) with total interference factor of %Lg",
      VAR_9->chan, VAR_9->freq, VAR_12);
  return VAR_9;
 }

 return VAR_10;
}
