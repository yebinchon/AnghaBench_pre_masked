
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sndcard_func {int func; } ;
struct sbc_softc {int bd_ver; void* child_midi2; void* child_midi1; void* child_pcm; int * ih; TYPE_1__* ihl; struct resource** irq; int * io; struct resource** drq; int dev; } ;
struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct sbc_softc* parent; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_0 (struct sbc_softc*) ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 int FUNC_3 (struct sbc_softc*,int) ;
 void* FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct sbc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (void*,struct sndcard_func*) ;
 int FUNC_9 (int ) ;
 struct sndcard_func* FUNC_10 (int,int ,int) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct sbc_softc*) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;
 int VAR_21 ;
 int FUNC_17 (struct sbc_softc*) ;
 scalar_t__ FUNC_18 (int ,struct resource*,int ,int ,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_22)
{
 char *VAR_23 = ((void*)0);
 struct sbc_softc *VAR_24;
 struct sndcard_func *VAR_25;
 u_int32_t VAR_26 = FUNC_9(VAR_22);
     int VAR_27 = FUNC_5(VAR_22);
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;

     if (!VAR_26 && (VAR_27 & VAR_9)) {
         FUNC_2(VAR_22, VAR_19, 1,
     VAR_27 & VAR_8, 1);
     }

 VAR_24 = FUNC_6(VAR_22);
 FUNC_3(VAR_24, sizeof(*VAR_24));
 VAR_24->dev = VAR_22;
 FUNC_17(VAR_24);
 VAR_23 = "alloc_resource";
 if (FUNC_0(VAR_24)) goto bad;

 VAR_23 = "sb_reset_dsp";
 if (FUNC_15(VAR_24->io[0])) goto bad;
 VAR_23 = "sb_identify_board";
 VAR_24->bd_ver = FUNC_14(VAR_24->io[0]) & 0x00000fff;
 if (VAR_24->bd_ver == 0) goto bad;
 VAR_28 = 0;
 if (VAR_26 == 0x01200000 && VAR_24->bd_ver < 0x0400) VAR_24->bd_ver = 0x0499;
 switch ((VAR_24->bd_ver & 0x0f00) >> 8) {
     case 1:
  break;

     case 2:
  VAR_28 |= VAR_0;
  if (VAR_24->bd_ver > 0x200) VAR_28 |= VAR_2;
  break;

 case 5:
  VAR_28 |= VAR_1;
  VAR_24->bd_ver = 0x0301;
     case 3:
  VAR_28 |= VAR_0 | VAR_3;
  break;

     case 4:
      VAR_28 |= VAR_5 | VAR_4;
  if (VAR_24->drq[0]) VAR_30 = FUNC_13(VAR_24->drq[0]); else VAR_30 = -1;
  if (VAR_24->drq[1]) VAR_29 = FUNC_13(VAR_24->drq[1]); else VAR_29 = VAR_30;
  if (!VAR_26 && (VAR_29 < VAR_30)) {
   struct resource *VAR_34;
   VAR_34 = VAR_24->drq[0];
   VAR_24->drq[0] = VAR_24->drq[1];
   VAR_24->drq[1] = VAR_34;
   VAR_30 = FUNC_13(VAR_24->drq[0]);
   VAR_29 = FUNC_13(VAR_24->drq[1]);
  }

  VAR_31 = -1;
  VAR_32 = FUNC_13(VAR_24->irq[0]);
  if (VAR_32 == 5) VAR_31 = 2;
  else if (VAR_32 == 7) VAR_31 = 4;
  else if (VAR_32 == 9) VAR_31 = 1;
  else if (VAR_32 == 10) VAR_31 = 8;
  if (VAR_31 == -1) {
   VAR_23 = "bad irq (5/7/9/10 valid)";
   goto bad;
  }
  else FUNC_16(VAR_24->io[0], VAR_12, VAR_31);
  FUNC_16(VAR_24->io[0], VAR_7, (1 << VAR_29) | (1 << VAR_30));
  if (VAR_20) {
   FUNC_7(VAR_22, "setting card to irq %d, drq %d", VAR_32, VAR_30);
   if (VAR_30 != VAR_29) FUNC_11(", %d", VAR_29);
   FUNC_11("\n");
      }
  break;
     }

 switch (VAR_26) {
     case 0x43008c0e:
 case 0x01200000:
 case 0x01000000:
  VAR_28 |= VAR_6;
  break;
 }
 VAR_24->bd_ver |= VAR_28 << 16;

 VAR_23 = "setup_intr";
 for (VAR_33 = 0; VAR_33 < VAR_11; VAR_33++) {
  VAR_24->ihl[VAR_33].parent = VAR_24;
  if (FUNC_18(VAR_22, VAR_24->irq[VAR_33], 0, VAR_21, &VAR_24->ihl[VAR_33], &VAR_24->ih[VAR_33]))
   goto bad;
 }


 VAR_25 = FUNC_10(sizeof(struct sndcard_func), VAR_13, VAR_14 | VAR_15);
 if (VAR_25 == ((void*)0)) goto bad;
 VAR_25->func = VAR_17;
 VAR_24->child_pcm = FUNC_4(VAR_22, "pcm", -1);
 FUNC_8(VAR_24->child_pcm, VAR_25);


 VAR_25 = FUNC_10(sizeof(struct sndcard_func), VAR_13, VAR_14 | VAR_15);
 if (VAR_25 == ((void*)0)) goto bad;
 VAR_25->func = VAR_16;
 VAR_24->child_midi1 = FUNC_4(VAR_22, "midi", -1);
 FUNC_8(VAR_24->child_midi1, VAR_25);


 VAR_25 = FUNC_10(sizeof(struct sndcard_func), VAR_13, VAR_14 | VAR_15);
 if (VAR_25 == ((void*)0)) goto bad;
 VAR_25->func = VAR_18;
 VAR_24->child_midi2 = FUNC_4(VAR_22, "midi", -1);
 FUNC_8(VAR_24->child_midi2, VAR_25);


 FUNC_1(VAR_22);

 return (0);

bad: if (VAR_23) FUNC_7(VAR_22, "%s\n", VAR_23);
 FUNC_12(VAR_24);
 return (VAR_10);
}
