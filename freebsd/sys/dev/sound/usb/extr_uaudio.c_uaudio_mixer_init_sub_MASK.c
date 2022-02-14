
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {int sc_mix_info; int sc_recsrc_info; int sc_mixer_lock; int sc_mixer_xfer; int sc_mixer_iface_index; int sc_udev; struct snd_mixer* sc_mixer_dev; } ;
struct snd_mixer {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct snd_mixer*,int) ;
 int FUNC_3 (struct snd_mixer*,int ,int ) ;
 int FUNC_4 (struct snd_mixer*,int ,int ) ;
 int FUNC_5 (struct snd_mixer*,int ) ;
 int FUNC_6 (struct snd_mixer*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ,int,struct uaudio_softc*,int ) ;

int
FUNC_8(struct uaudio_softc *VAR_6, struct snd_mixer *VAR_7)
{
 FUNC_0("\n");

 VAR_6->sc_mixer_lock = FUNC_6(VAR_7);
 VAR_6->sc_mixer_dev = VAR_7;

 if (FUNC_7(VAR_6->sc_udev, &VAR_6->sc_mixer_iface_index,
     VAR_6->sc_mixer_xfer, VAR_5, 1, VAR_6,
     VAR_6->sc_mixer_lock)) {
  FUNC_1(0, "could not allocate USB "
      "transfer for audio mixer!\n");
  return (VAR_0);
 }
 if (!(VAR_6->sc_mix_info & VAR_2)) {
  FUNC_3(VAR_7, VAR_4, VAR_1);
  FUNC_4(VAR_7, VAR_4, VAR_3);
 }
 FUNC_2(VAR_7, VAR_6->sc_mix_info);
 FUNC_5(VAR_7, VAR_6->sc_recsrc_info);
 return (0);
}
