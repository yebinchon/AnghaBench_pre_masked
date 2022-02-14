
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct emu_sc_info {int dummy; } ;
struct TYPE_4__ {unsigned int* routing_left; int* amounts_left; unsigned int* routing_right; int* amounts_right; } ;
struct TYPE_3__ {unsigned int* routing_left; int* amounts_left; unsigned int* routing_right; int* amounts_right; } ;
struct emu_pcm_info {int is_emu10k1; int mch_disabled; int** emu10k1_volcache; uintptr_t route; scalar_t__ lock; int * codec; scalar_t__ pnum; struct emu_sc_info* card; int ihandle; TYPE_2__ rt_mono; TYPE_1__ rt; int * ac97_mixerclass; int dev; } ;
typedef int device_t ;


 void* FUNC_0 (int ,struct emu_pcm_info*,int ) ;
 uintptr_t FUNC_1 (int ,int ,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (struct emu_sc_info*,int ,int ,int *,struct emu_pcm_info*) ;
 int FUNC_9 (struct emu_pcm_info*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (struct emu_pcm_info*,int ) ;
 struct emu_pcm_info* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int ,int *,struct emu_pcm_info*) ;
 int FUNC_13 (int ,int ,int *,struct emu_pcm_info*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,struct emu_pcm_info*,int,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_22)
{
 struct emu_pcm_info *VAR_23;
 unsigned int VAR_24;
 char VAR_25[VAR_13];
 uint32_t VAR_26, VAR_27;
 uintptr_t VAR_28, VAR_29, VAR_30;

 VAR_23 = FUNC_11(sizeof(*VAR_23), VAR_7, VAR_8 | VAR_9);
 VAR_23->card = (struct emu_sc_info *)(FUNC_6(FUNC_5(VAR_22)));
 if (VAR_23->card == ((void*)0)) {
  FUNC_7(VAR_22, "cannot get bridge conf\n");
  FUNC_10(VAR_23, VAR_7);
  return (VAR_5);
 }

 VAR_23->lock = FUNC_18(FUNC_4(VAR_22), "snd_emu10kx pcm softc");
 VAR_23->dev = VAR_22;

 VAR_29 = FUNC_1(FUNC_5(VAR_22), VAR_22, VAR_2, &VAR_30);
 VAR_23->is_emu10k1 = VAR_30 ? 1 : 0;

 VAR_29 = FUNC_1(FUNC_5(VAR_22), VAR_22, VAR_3, &VAR_30);
 VAR_23->mch_disabled = VAR_30 ? 1 : 0;

 VAR_23->codec = ((void*)0);

 for (VAR_24 = 0; VAR_24 < 8; VAR_24++) {
  VAR_23->rt.routing_left[VAR_24] = VAR_24;
  VAR_23->rt.amounts_left[VAR_24] = 0x00;
  VAR_23->rt.routing_right[VAR_24] = VAR_24;
  VAR_23->rt.amounts_right[VAR_24] = 0x00;
 }

 for (VAR_24 = 0; VAR_24 < 8; VAR_24++) {
  VAR_23->rt_mono.routing_left[VAR_24] = VAR_24;
  VAR_23->rt_mono.amounts_left[VAR_24] = 0x00;
  VAR_23->rt_mono.routing_right[VAR_24] = VAR_24;
  VAR_23->rt_mono.amounts_right[VAR_24] = 0x00;
 }

 VAR_23->emu10k1_volcache[0][0] = 75;
 VAR_23->emu10k1_volcache[1][0] = 75;
 VAR_23->emu10k1_volcache[0][1] = 75;
 VAR_23->emu10k1_volcache[1][1] = 75;
 VAR_29 = FUNC_1(FUNC_5(VAR_22), VAR_22, VAR_4, &VAR_28);
 VAR_23->route = VAR_28;
 switch (VAR_28) {
 case 132:
  VAR_23->rt.amounts_left[0] = 0xff;
  VAR_23->rt.amounts_right[1] = 0xff;
  VAR_23->rt_mono.amounts_left[0] = 0xff;
  VAR_23->rt_mono.amounts_left[1] = 0xff;
  if (VAR_23->is_emu10k1)
   VAR_23->codec = FUNC_0(VAR_22, VAR_23, VAR_14);
  else
   VAR_23->codec = FUNC_0(VAR_22, VAR_23, VAR_15);
  VAR_23->ac97_mixerclass = ((void*)0);
  if (VAR_23->codec != ((void*)0))
   VAR_23->ac97_mixerclass = FUNC_3();
  if (FUNC_12(VAR_22, &VAR_17, VAR_23)) {
   FUNC_7(VAR_22, "failed to initialize DSP mixer\n");
   goto bad;
  }
  break;
 case 130:
  VAR_23->rt.amounts_left[2] = 0xff;
  VAR_23->rt.amounts_right[3] = 0xff;
  VAR_23->rt_mono.amounts_left[2] = 0xff;
  VAR_23->rt_mono.amounts_left[3] = 0xff;
  if (FUNC_12(VAR_22, &VAR_17, VAR_23)) {
   FUNC_7(VAR_22, "failed to initialize mixer\n");
   goto bad;
  }
  break;
 case 133:
  VAR_23->rt.amounts_left[4] = 0xff;
  VAR_23->rt_mono.amounts_left[4] = 0xff;
  if (FUNC_12(VAR_22, &VAR_17, VAR_23)) {
   FUNC_7(VAR_22, "failed to initialize mixer\n");
   goto bad;
  }
  break;
 case 128:
  VAR_23->rt.amounts_left[5] = 0xff;
  VAR_23->rt_mono.amounts_left[5] = 0xff;
  if (FUNC_12(VAR_22, &VAR_17, VAR_23)) {
   FUNC_7(VAR_22, "failed to initialize mixer\n");
   goto bad;
  }
  break;
 case 129:
  VAR_23->rt.amounts_left[6] = 0xff;
  VAR_23->rt.amounts_right[7] = 0xff;
  VAR_23->rt_mono.amounts_left[6] = 0xff;
  VAR_23->rt_mono.amounts_left[7] = 0xff;
  if (FUNC_12(VAR_22, &VAR_17, VAR_23)) {
   FUNC_7(VAR_22, "failed to initialize mixer\n");
   goto bad;
  }
  break;
 case 131:
  if (FUNC_12(VAR_22, &VAR_18, VAR_23)) {
   FUNC_7(VAR_22, "failed to initialize EFX mixer\n");
   goto bad;
  }
  break;
 default:
  FUNC_7(VAR_22, "invalid default route\n");
  goto bad;
 }

 VAR_26 = VAR_0;
 VAR_27 = VAR_1;
 VAR_23->ihandle = FUNC_8(VAR_23->card, VAR_26, VAR_27, &VAR_16, VAR_23);

 if (FUNC_9(VAR_23) == -1) {
  FUNC_7(VAR_22, "unable to initialize PCM part of the card\n");
  goto bad;
 }





 FUNC_16(VAR_22, FUNC_14(VAR_22) | VAR_12);


 if (FUNC_15(VAR_22, VAR_23, (VAR_28 == 132) ? VAR_6 : 1, (VAR_28 == 132) ? 1 : 0)) {
  FUNC_7(VAR_22, "can't register PCM channels!\n");
  goto bad;
 }
 VAR_23->pnum = 0;
 if (VAR_28 != 131)
  FUNC_13(VAR_22, VAR_10, &VAR_20, VAR_23);
 if (VAR_28 == 132) {
  for (VAR_24 = 1; VAR_24 < VAR_6; VAR_24++)
   FUNC_13(VAR_22, VAR_10, &VAR_20, VAR_23);
  FUNC_13(VAR_22, VAR_11, &VAR_21, VAR_23);
 }
 if (VAR_28 == 131)
  FUNC_13(VAR_22, VAR_11, &VAR_19, VAR_23);

 FUNC_20(VAR_25, VAR_13, "on %s", FUNC_4(FUNC_5(VAR_22)));
 FUNC_17(VAR_22, VAR_25);

 return (0);

bad:
 if (VAR_23->codec)
  FUNC_2(VAR_23->codec);
 if (VAR_23->lock)
  FUNC_19(VAR_23->lock);
 FUNC_10(VAR_23, VAR_7);
 return (VAR_5);
}
