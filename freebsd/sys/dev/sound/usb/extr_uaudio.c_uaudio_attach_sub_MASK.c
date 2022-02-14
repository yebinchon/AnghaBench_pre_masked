
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_alt; int feedback_rate; } ;
struct TYPE_3__ {scalar_t__ num_alt; } ;
struct uaudio_softc {int sc_mix_info; int sc_mixer_init; int sc_pcm_registered; TYPE_2__ sc_play_chan; TYPE_1__ sc_rec_chan; scalar_t__ sc_pcm_bitperfect; scalar_t__ sc_uq_audio_swap_lr; } ;
typedef int status ;
typedef int kobj_class_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct uaudio_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,struct uaudio_softc*) ;
 int FUNC_10 (int ,int ,int ,struct uaudio_softc*) ;
 scalar_t__ FUNC_11 (int ,struct uaudio_softc*,int,int) ;
 int FUNC_12 (int ,char*) ;
 int VAR_10 ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct uaudio_softc*) ;
 int FUNC_16 (struct uaudio_softc*,int ) ;
 int FUNC_17 (int ,int ) ;

int
FUNC_18(device_t VAR_11, kobj_class_t VAR_12, kobj_class_t VAR_13)
{
 struct uaudio_softc *VAR_14 = FUNC_5(FUNC_4(VAR_11));
 char VAR_15[VAR_8];

 FUNC_15(VAR_14);

 if (VAR_14->sc_uq_audio_swap_lr) {
  FUNC_0("hardware has swapped left and right\n");

 }
 if (!(VAR_14->sc_mix_info & VAR_9)) {

  FUNC_0("emulating master volume\n");





  FUNC_17(VAR_11, VAR_7);
 }
 if (VAR_14->sc_pcm_bitperfect) {
  FUNC_0("device needs bitperfect by default\n");
  FUNC_17(VAR_11, VAR_5);
 }
 if (FUNC_9(VAR_11, VAR_12, VAR_14))
  goto detach;
 VAR_14->sc_mixer_init = 1;

 FUNC_8(VAR_11);

 FUNC_13(VAR_15, sizeof(VAR_15), "at ? %s", FUNC_1(VAR_10));

 if (FUNC_11(VAR_11, VAR_14,
     (VAR_14->sc_play_chan.num_alt > 0) ? 1 : 0,
     (VAR_14->sc_rec_chan.num_alt > 0) ? 1 : 0)) {
  goto detach;
 }

 FUNC_17(VAR_11, VAR_6);
 VAR_14->sc_pcm_registered = 1;

 if (VAR_14->sc_play_chan.num_alt > 0) {
  FUNC_10(VAR_11, VAR_3, VAR_13, VAR_14);
 }
 if (VAR_14->sc_rec_chan.num_alt > 0) {
  FUNC_10(VAR_11, VAR_4, VAR_13, VAR_14);
 }
 FUNC_12(VAR_11, VAR_15);

 FUNC_16(VAR_14, VAR_11);

 FUNC_2(FUNC_6(VAR_11),
     FUNC_3(FUNC_7(VAR_11)), VAR_2,
     "feedback_rate", VAR_0, &VAR_14->sc_play_chan.feedback_rate,
     0, "Feedback sample rate in Hz");

 return (0);

detach:
 FUNC_14(VAR_11);
 return (VAR_1);
}
