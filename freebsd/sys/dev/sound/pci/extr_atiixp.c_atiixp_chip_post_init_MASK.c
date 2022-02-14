
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * ich_func; } ;
struct atiixp_info {int polling; int codec_not_ready_bits; int dev; int irq; int reg; int * codec; int codec_found; scalar_t__ codec_idx; int lock; TYPE_1__ delayed_attach; } ;


 int * FUNC_0 (int ,struct atiixp_info*,int ) ;
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
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct atiixp_info*) ;
 int FUNC_8 (struct atiixp_info*) ;
 int FUNC_9 (struct atiixp_info*) ;
 int FUNC_10 (struct atiixp_info*) ;
 int FUNC_11 (struct atiixp_info*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int VAR_15 ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (struct atiixp_info*,int ,int ,char*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ,int *,struct atiixp_info*) ;
 scalar_t__ FUNC_22 (int ,struct atiixp_info*,int,int) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (int ) ;
 int VAR_16 ;
 int FUNC_25 (char*,int,char*,int ,int ,int ) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_26(void *VAR_18)
{
 struct atiixp_info *VAR_19 = (struct atiixp_info *)VAR_18;
 uint32_t VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 char VAR_25[VAR_12];

 FUNC_9(VAR_19);

 if (VAR_19->delayed_attach.ich_func) {
  FUNC_12(&VAR_19->delayed_attach);
  VAR_19->delayed_attach.ich_func = ((void*)0);
 }

 VAR_24 = VAR_19->polling;
 VAR_19->polling = 0;

 VAR_22 = 10;
 if (VAR_19->codec_not_ready_bits == 0) {

  do {
   FUNC_18(VAR_19, VAR_19->lock, VAR_11, "ixpslp", FUNC_16(VAR_15 / 10, 1));
   if (VAR_19->codec_not_ready_bits != 0)
    break;
  } while (--VAR_22);
 }

 VAR_19->polling = VAR_24;
 FUNC_7(VAR_19);

 if (VAR_19->codec_not_ready_bits == 0 && VAR_22 == 0) {
  FUNC_15(VAR_19->dev,
   "WARNING: timeout during codec detection; "
   "codecs might be present but haven't interrupted\n");
  FUNC_11(VAR_19);
  goto postinitbad;
 }

 VAR_23 = 0;





 if (!(VAR_19->codec_not_ready_bits & VAR_3)) {

  VAR_19->codec_found++;
  VAR_19->codec_idx = 0;
  VAR_23++;
 }

 if (!(VAR_19->codec_not_ready_bits & VAR_4)) {

  VAR_19->codec_found++;
 }

 if (!(VAR_19->codec_not_ready_bits & VAR_5)) {

  VAR_19->codec_found++;
 }

 FUNC_11(VAR_19);

 if (VAR_23 == 0)
  goto postinitbad;


 VAR_19->codec = FUNC_0(VAR_19->dev, VAR_19, VAR_13);
 if (VAR_19->codec == ((void*)0))
  goto postinitbad;

 VAR_20 = (FUNC_19(VAR_19->dev) << 16) |
     FUNC_20(VAR_19->dev);
 switch (VAR_20) {
 case 0x11831043:
 case 0x2043161f:
  FUNC_6(VAR_19->codec, FUNC_4(VAR_19->codec) |
      VAR_0);
  break;
 default:
  break;
 }

 FUNC_17(VAR_19->dev, FUNC_5(), VAR_19->codec);

 if (FUNC_22(VAR_19->dev, VAR_19, VAR_1, VAR_2))
  goto postinitbad;

 for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
  FUNC_21(VAR_19->dev, VAR_9, &VAR_14, VAR_19);
 for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
  FUNC_21(VAR_19->dev, VAR_10, &VAR_14, VAR_19);

 FUNC_2(FUNC_13(VAR_19->dev),
     FUNC_3(FUNC_14(VAR_19->dev)), VAR_8,
     "polling", VAR_7 | VAR_6, VAR_19->dev, sizeof(VAR_19->dev),
     VAR_17, "I", "Enable polling mode");

 FUNC_25(VAR_25, VAR_12, "at memory 0x%jx irq %jd %s",
     FUNC_24(VAR_19->reg), FUNC_24(VAR_19->irq),
     FUNC_1(VAR_16));

 FUNC_23(VAR_19->dev, VAR_25);

 FUNC_9(VAR_19);
 if (VAR_19->polling == 0)
  FUNC_8(VAR_19);
 FUNC_11(VAR_19);

 return;

postinitbad:
 FUNC_10(VAR_19);
}
