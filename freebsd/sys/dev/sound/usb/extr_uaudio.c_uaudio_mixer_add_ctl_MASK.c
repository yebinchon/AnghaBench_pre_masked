
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct uaudio_softc {int sc_audio_rev; int sc_udev; } ;
struct uaudio_mixer_node {size_t class; scalar_t__ type; int minval; int maxval; int mul; scalar_t__ nchan; int ctl; int wIndex; int * wValue; } ;
typedef int int32_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct uaudio_softc*,struct uaudio_mixer_node*) ;
 void* FUNC_2 (int ,int ,int ,struct uaudio_mixer_node*) ;

__attribute__((used)) static void
FUNC_3(struct uaudio_softc *VAR_8, struct uaudio_mixer_node *VAR_9)
{
 int32_t VAR_10;

 if (VAR_9->class < VAR_5) {
  FUNC_0("adding %s.%d\n",
      VAR_6[VAR_9->class], VAR_9->ctl);
 } else {
  FUNC_0("adding %d\n", VAR_9->ctl);
 }

 if (VAR_9->type == VAR_3) {
  VAR_9->minval = 0;
  VAR_9->maxval = 1;
 } else if (VAR_9->type == VAR_4) {
 } else {



  VAR_9->minval = FUNC_2(VAR_8->sc_udev,
      VAR_8->sc_audio_rev, VAR_1, VAR_9);
  VAR_9->maxval = FUNC_2(VAR_8->sc_udev,
      VAR_8->sc_audio_rev, VAR_0, VAR_9);



  if (VAR_9->maxval < VAR_9->minval) {
   VAR_10 = VAR_9->maxval;
   VAR_9->maxval = VAR_9->minval;
   VAR_9->minval = VAR_10;
  }


  VAR_9->mul = VAR_9->maxval - VAR_9->minval;
  if (VAR_9->mul == 0)
   VAR_9->mul = 1;


  VAR_10 = FUNC_2(VAR_8->sc_udev,
      VAR_8->sc_audio_rev, VAR_2, VAR_9);

  FUNC_0("Resolution = %d\n", (int)VAR_10);
 }

 FUNC_1(VAR_8, VAR_9);
}
