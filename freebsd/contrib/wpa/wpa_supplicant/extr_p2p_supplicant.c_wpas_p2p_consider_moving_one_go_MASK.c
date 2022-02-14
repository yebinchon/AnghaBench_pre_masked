
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct wpa_used_freq_data {int freq; unsigned int flags; } ;
struct TYPE_8__ {int num_modes; int modes; } ;
struct wpa_supplicant {int drv_flags; TYPE_5__* global; TYPE_6__* ap_iface; int p2p_group; TYPE_3__* conf; TYPE_2__ hw; TYPE_1__* current_ssid; } ;
struct TYPE_12__ {TYPE_4__* current_mode; } ;
struct TYPE_11__ {int p2p; } ;
struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_9__ {scalar_t__ p2p_go_freq_change_policy; } ;
struct TYPE_7__ {int frequency; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (unsigned int,int ,int ,struct wpa_supplicant*,int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_9 (TYPE_5__*,int) ;
 scalar_t__ FUNC_10 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_11 (struct wpa_supplicant*,int) ;
 int FUNC_12 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_14(struct wpa_supplicant *VAR_10,
         struct wpa_used_freq_data *VAR_11,
         unsigned int VAR_12)
{
 unsigned int VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 unsigned int VAR_17;
 int VAR_18;
 int VAR_19;

 FUNC_12(VAR_10);

 VAR_18 = VAR_10->current_ssid->frequency;
 VAR_19 = (VAR_10->drv_flags & VAR_7) &&
  FUNC_4(VAR_18, VAR_10->hw.modes, VAR_10->hw.num_modes);
 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_12; VAR_13++) {
  if (VAR_11[VAR_13].freq == VAR_18) {
   VAR_16 = VAR_11[VAR_13].flags;


   if (!FUNC_7(VAR_10->global->p2p, VAR_18) &&
       !VAR_19) {
    FUNC_8(VAR_10, VAR_0,
     "P2P: Freq=%d MHz no longer valid for GO",
     VAR_18);
    VAR_14 = 1;
   }
  } else if (VAR_11[VAR_13].flags == 0) {

   continue;
  } else if (!FUNC_6(VAR_10->global->p2p,
            VAR_11[VAR_13].freq) && !VAR_19) {

   continue;
  } else if (VAR_10->conf->p2p_go_freq_change_policy ==
      VAR_2) {
   VAR_15 = 1;
  } else if (VAR_10->conf->p2p_go_freq_change_policy ==
      VAR_4 &&
      FUNC_11(VAR_10, VAR_11[VAR_13].freq)) {
   VAR_15 = 1;
  } else if ((VAR_10->conf->p2p_go_freq_change_policy ==
       VAR_3) &&
      FUNC_11(VAR_10, VAR_11[VAR_13].freq)) {
   if (!FUNC_5(VAR_10->p2p_group)) {
    VAR_15 = 1;
   } else if ((VAR_10->drv_flags &
        VAR_6) &&
       FUNC_10(VAR_10)) {
    u8 VAR_20;





    if (VAR_10->ap_iface->current_mode->mode ==
        FUNC_3(VAR_11[VAR_13].freq,
          &VAR_20))
     VAR_15 = 1;
   }
  }
 }

 FUNC_8(VAR_10, VAR_0,
  "P2P: GO move: invalid_freq=%u, policy_move=%u, flags=0x%X",
  VAR_14, VAR_15, VAR_16);





 if (!VAR_14 || VAR_15) {
  FUNC_8(VAR_10, VAR_0,
   "P2P: Cancel a GO move from freq=%d MHz", VAR_18);
  FUNC_0(VAR_8, VAR_10, ((void*)0));

  if (FUNC_13(VAR_10)) {
   FUNC_8(VAR_10, VAR_0,
    "P2P: GO move: policy CS is not allowed - setting timeout to re-consider GO move");
   FUNC_0(VAR_9,
          VAR_10, ((void*)0));
   FUNC_1(VAR_5, 0,
            VAR_9,
            VAR_10, ((void*)0));
   return;
  }
 }

 if (!VAR_14 && (!VAR_15 || VAR_16 != 0)) {
  FUNC_8(VAR_10, VAR_0,
   "P2P: Not initiating a GO frequency change");
  return;
 }





 if (FUNC_2(VAR_10->ap_iface)) {
  FUNC_8(VAR_10, VAR_0,
   "P2P: Not initiating a GO frequency change - CSA is in progress");
  return;
 }

 if (VAR_14 && !FUNC_9(VAR_10->global, VAR_18))
  VAR_17 = VAR_1;
 else
  VAR_17 = 0;

 FUNC_8(VAR_10, VAR_0, "P2P: Move GO from freq=%d MHz in %d secs",
  VAR_18, VAR_17);
 FUNC_0(VAR_8, VAR_10, ((void*)0));
 FUNC_1(VAR_17, 0, VAR_8, VAR_10, ((void*)0));
}
