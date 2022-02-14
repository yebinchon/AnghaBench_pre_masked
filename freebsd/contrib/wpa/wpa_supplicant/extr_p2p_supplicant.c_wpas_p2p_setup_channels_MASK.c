
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int num_modes; int * modes; } ;
struct wpa_supplicant {TYPE_3__* conf; TYPE_2__* global; TYPE_1__ hw; } ;
struct p2p_reg_class {size_t channels; scalar_t__* channel; scalar_t__ reg_class; } ;
struct p2p_channels {int reg_classes; struct p2p_reg_class* reg_class; } ;
struct oper_class_map {scalar_t__ p2p; scalar_t__ min_chan; scalar_t__ max_chan; scalar_t__ inc; scalar_t__ op_class; int bw; int mode; } ;
struct hostapd_hw_modes {scalar_t__ mode; } ;
typedef enum chan_allowed { ____Placeholder_chan_allowed } chan_allowed ;
struct TYPE_6__ {scalar_t__ p2p_add_cli_chan; } ;
struct TYPE_5__ {int p2p_24ghz_social_channels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hostapd_hw_modes* FUNC_0 (int *,int ,int ) ;
 struct oper_class_map* VAR_5 ;
 int FUNC_1 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpa_supplicant*,struct p2p_channels*,struct p2p_channels*) ;
 int FUNC_4 (struct wpa_supplicant*,struct hostapd_hw_modes*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_6,
       struct p2p_channels *VAR_7,
       struct p2p_channels *VAR_8)
{
 struct hostapd_hw_modes *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (VAR_6->hw.modes == ((void*)0)) {
  FUNC_2(VAR_2, "P2P: Driver did not support fetching "
      "of all supported channels; assume dualband "
      "support");
  return FUNC_3(VAR_6, VAR_7, VAR_8);
 }

 VAR_10 = VAR_12 = 0;

 for (VAR_11 = 0; VAR_5[VAR_11].op_class; VAR_11++) {
  const struct oper_class_map *VAR_13 = &VAR_5[VAR_11];
  u8 VAR_14;
  struct p2p_reg_class *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);

  if (VAR_13->p2p == VAR_4)
   continue;

  VAR_9 = FUNC_0(VAR_6->hw.modes, VAR_6->hw.num_modes, VAR_13->mode);
  if (VAR_9 == ((void*)0))
   continue;
  if (VAR_9->mode == VAR_1)
   VAR_6->global->p2p_24ghz_social_channels = 1;
  for (VAR_14 = VAR_13->min_chan; VAR_14 <= VAR_13->max_chan; VAR_14 += VAR_13->inc) {
   enum chan_allowed VAR_17;
   VAR_17 = FUNC_4(VAR_6, VAR_9, VAR_14, VAR_13->bw);
   if (VAR_17 == VAR_0) {
    if (VAR_15 == ((void*)0)) {
     FUNC_2(VAR_2, "P2P: Add operating class %u",
         VAR_13->op_class);
     VAR_15 = &VAR_7->reg_class[VAR_10];
     VAR_10++;
     VAR_15->reg_class = VAR_13->op_class;
    }
    VAR_15->channel[VAR_15->channels] = VAR_14;
    VAR_15->channels++;
   } else if (VAR_17 == VAR_3 &&
       VAR_6->conf->p2p_add_cli_chan) {
    if (VAR_16 == ((void*)0)) {
     FUNC_2(VAR_2, "P2P: Add operating class %u (client only)",
         VAR_13->op_class);
     VAR_16 = &VAR_8->reg_class[VAR_12];
     VAR_12++;
     VAR_16->reg_class = VAR_13->op_class;
    }
    VAR_16->channel[VAR_16->channels] = VAR_14;
    VAR_16->channels++;
   }
  }
  if (VAR_15) {
   FUNC_1(VAR_2, "P2P: Channels",
        VAR_15->channel, VAR_15->channels);
  }
  if (VAR_16) {
   FUNC_1(VAR_2, "P2P: Channels (client only)",
        VAR_16->channel, VAR_16->channels);
  }
 }

 VAR_7->reg_classes = VAR_10;
 VAR_8->reg_classes = VAR_12;

 return 0;
}
