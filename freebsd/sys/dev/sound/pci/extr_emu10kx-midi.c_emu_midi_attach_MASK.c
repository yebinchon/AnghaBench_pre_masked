
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sndcard_func {scalar_t__ varinfo; } ;
struct emu_midiinfo {scalar_t__ port; int card; } ;
struct emu_midi_softc {scalar_t__ port; int card; scalar_t__ is_emu10k1; int mtx; int ihandle; int * mpu; int mpu_intr; int dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sndcard_func* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct emu_midi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *,struct emu_midi_softc*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_6 (int *,struct emu_midi_softc*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_12)
{
 struct emu_midi_softc * VAR_13;
 struct sndcard_func *VAR_14;
 struct emu_midiinfo *VAR_15;
 uint32_t VAR_16, VAR_17;

 VAR_13 = FUNC_2(VAR_12);
 VAR_14 = FUNC_0(VAR_12);

 VAR_13->dev = VAR_12;
 VAR_15 = (struct emu_midiinfo *)VAR_14->varinfo;
 VAR_13->port = VAR_15->port;
 VAR_13->card = VAR_15->card;

 FUNC_8(&VAR_13->mtx, FUNC_1(VAR_12), "midi softc", VAR_8);

 if (VAR_13->is_emu10k1) {

  VAR_16 = 0;

  VAR_16 |= VAR_2;
  VAR_17 = VAR_6;
  VAR_17 |= VAR_5;
 } else {
  if (VAR_13->port == VAR_0) {

   VAR_16 = 0;

   VAR_16 |= VAR_2;
   VAR_17 = VAR_6;
   VAR_17 |= VAR_5;
  } else {

   VAR_16 = 0;

   VAR_16 |= VAR_1;
   VAR_17 = VAR_4;
   VAR_17 |= VAR_3;
  }
 }

 VAR_13->ihandle = FUNC_4(VAR_13->card, VAR_16, VAR_17, &VAR_9, VAR_13);

 VAR_13->mpu = FUNC_6(&VAR_11, VAR_13, VAR_10, &VAR_13->mpu_intr);
 if (VAR_13->mpu == ((void*)0)) {
  FUNC_5(VAR_13->card, VAR_13->ihandle);
  FUNC_7(&VAR_13->mtx);
  return (VAR_7);
 }





 if (VAR_13->is_emu10k1)
  FUNC_3(VAR_13->card);
 else {
  if (VAR_13->port == VAR_0)
   FUNC_3(VAR_13->card);
 }

 return (0);
}
