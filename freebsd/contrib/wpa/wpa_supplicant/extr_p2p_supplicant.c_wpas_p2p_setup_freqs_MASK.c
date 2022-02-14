
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_used_freq_data {int freq; } ;
struct TYPE_4__ {int num_modes; int modes; } ;
struct wpa_supplicant {int drv_flags; TYPE_3__* global; TYPE_2__* conf; TYPE_1__ hw; int num_multichan_concurrent; } ;
typedef enum wpa_driver_if_type { ____Placeholder_wpa_driver_if_type } wpa_driver_if_type ;
struct TYPE_6__ {int p2p; } ;
struct TYPE_5__ {int num_p2p_pref_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 struct wpa_used_freq_data* FUNC_1 (int ,int) ;
 int FUNC_2 (struct wpa_used_freq_data*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct wpa_supplicant*,int,unsigned int*,unsigned int*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (TYPE_3__*,unsigned int) ;
 int FUNC_8 (struct wpa_supplicant*) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int) ;
 unsigned int FUNC_10 (struct wpa_supplicant*,struct wpa_used_freq_data*,int ) ;

__attribute__((used)) static int FUNC_11(struct wpa_supplicant *VAR_4, int VAR_5,
    int *VAR_6, int *VAR_7, int VAR_8,
    unsigned int *VAR_9,
    unsigned int *VAR_10)
{
 struct wpa_used_freq_data *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15 = 0, VAR_16, VAR_17, VAR_18;

 VAR_18 = *VAR_10;
 *VAR_10 = 0;

 VAR_11 = FUNC_1(VAR_4->num_multichan_concurrent,
     sizeof(struct wpa_used_freq_data));
 if (!VAR_11)
  return -1;

 VAR_16 = FUNC_10(VAR_4, VAR_11,
     VAR_4->num_multichan_concurrent);






 VAR_14 = FUNC_8(VAR_4);

 FUNC_6(VAR_0,
     "P2P: Setup freqs: freq=%d num_MCC=%d shared_freqs=%u num_unused=%d",
     VAR_5, VAR_4->num_multichan_concurrent, VAR_16, VAR_14);

 if (VAR_5 > 0) {
  int VAR_19;
  if (VAR_8)
   VAR_19 = FUNC_3(VAR_4->global->p2p, VAR_5);
  else
   VAR_19 = FUNC_4(VAR_4->global->p2p, VAR_5);
  if (!VAR_19) {
   if ((VAR_4->drv_flags & VAR_1) &&
       FUNC_0(VAR_5, VAR_4->hw.modes,
          VAR_4->hw.num_modes)) {




    FUNC_6(VAR_0,
        "P2P: The forced channel for GO (%u MHz) is DFS, and DFS is offloaded to the driver",
        VAR_5);
   } else {
    FUNC_6(VAR_0,
        "P2P: The forced channel (%u MHz) is not supported for P2P uses",
        VAR_5);
    VAR_12 = -3;
    goto exit_free;
   }
  }

  for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
   if (VAR_11[VAR_17].freq == VAR_5)
    VAR_15 = 1;
  }

  if (VAR_14 <= 0 && !VAR_15) {
   FUNC_6(VAR_0, "P2P: Cannot start P2P group on %u MHz as there are no available channels",
       VAR_5);
   VAR_12 = -2;
   goto exit_free;
  }
  FUNC_6(VAR_0, "P2P: Trying to force us to use the "
      "requested channel (%u MHz)", VAR_5);
  *VAR_6 = VAR_5;
  goto exit_ok;
 }

 VAR_13 = FUNC_9(VAR_4, VAR_11, VAR_16);

 if (!VAR_4->conf->num_p2p_pref_chan && *VAR_7 == 0) {
  enum wpa_driver_if_type VAR_20;

  if (VAR_8)
   VAR_20 = VAR_3;
  else
   VAR_20 = VAR_2;

  FUNC_6(VAR_0, "P2P: best_freq=%d, go=%d",
      VAR_13, VAR_8);

  VAR_12 = FUNC_5(VAR_4, VAR_20,
       &VAR_18,
       VAR_9);
  if (!VAR_12 && VAR_18 > 0) {
   *VAR_10 = VAR_18;
   VAR_17 = 0;
   while (VAR_17 < *VAR_10 &&
          (!FUNC_3(VAR_4->global->p2p,
          VAR_9[VAR_17]) ||
    FUNC_7(VAR_4->global,
        VAR_9[VAR_17]))) {
    FUNC_6(VAR_0,
        "P2P: preferred_freq_list[%d]=%d is disallowed",
        VAR_17, VAR_9[VAR_17]);
    VAR_17++;
   }
   if (VAR_17 != *VAR_10) {
    VAR_13 = VAR_9[VAR_17];
    FUNC_6(VAR_0,
        "P2P: Using preferred_freq_list[%d]=%d",
        VAR_17, VAR_13);
   } else {
    FUNC_6(VAR_0,
        "P2P: All driver preferred frequencies are disallowed for P2P use");
    *VAR_10 = 0;
   }
  } else {
   FUNC_6(VAR_0,
       "P2P: No preferred frequency list available");
  }
 }


 if (VAR_13 > 0) {
  if (*VAR_7 == 0 && VAR_14 > 0) {
   FUNC_6(VAR_0, "P2P: Try to prefer a frequency (%u MHz) we are already using",
       VAR_13);
   *VAR_7 = VAR_13;
  } else {
   FUNC_6(VAR_0, "P2P: Try to force us to use frequency (%u MHz) which is already in use",
       VAR_13);
   *VAR_6 = VAR_13;
  }
 } else if (VAR_14 > 0) {
  FUNC_6(VAR_0,
      "P2P: Current operating channels are not available for P2P. Try to use another channel");
  *VAR_6 = 0;
 } else {
  FUNC_6(VAR_0,
      "P2P: All channels are in use and none of them are P2P enabled. Cannot start P2P group");
  VAR_12 = -2;
  goto exit_free;
 }

exit_ok:
 VAR_12 = 0;
exit_free:
 FUNC_2(VAR_11);
 return VAR_12;
}
