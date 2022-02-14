
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {TYPE_3__* ops; } ;
struct snd_soc_codec {TYPE_1__* socdev; struct snd_soc_dai* dai; } ;
struct snd_soc_card {int dev; } ;
struct TYPE_6__ {scalar_t__ digital_mute; } ;
struct TYPE_5__ {int shutdown; int startup; } ;
struct TYPE_4__ {struct snd_soc_card* card; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_1 (struct snd_soc_card*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*,char*) ;
 int FUNC_6 (struct snd_soc_codec*,char*) ;
 int FUNC_7 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct snd_soc_card*,char*,int ,int *) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct snd_soc_codec *VAR_14)
{
 struct snd_soc_dai *VAR_15 = VAR_14->dai;
 struct snd_soc_card *VAR_16 = VAR_14->socdev->card;
 int VAR_17;



 if (!VAR_15->ops) {
  VAR_15->ops = &VAR_5;
 } else if (!VAR_15->ops->digital_mute) {
  VAR_15->ops->digital_mute = VAR_7;
 } else {
  VAR_10.startup = VAR_12;
  VAR_10.shutdown = VAR_11;
 }


 FUNC_1(VAR_16, VAR_2);



 VAR_17 = FUNC_10(VAR_16, "hook_switch",
    VAR_1, &VAR_8);
 if (VAR_17)
  FUNC_2(VAR_16->dev,
    "Failed to allocate resources for hook switch, "
    "will continue without one.\n");
 else {
  VAR_17 = FUNC_9(&VAR_8,
     FUNC_0(VAR_9),
     VAR_9);
  if (VAR_17)
   FUNC_2(VAR_16->dev,
    "Failed to set up hook switch GPIO line, "
    "will continue with hook switch inactive.\n");
 }


 VAR_17 = FUNC_11(VAR_0, &VAR_13);
 if (VAR_17) {
  FUNC_2(VAR_16->dev,
    "Failed to register line discipline, "
    "will continue without any controls.\n");
  return 0;
 }


 VAR_17 = FUNC_7(VAR_14, VAR_6,
     FUNC_0(VAR_6));
 if (VAR_17) {
  FUNC_2(VAR_16->dev,
    "Failed to register DAPM controls, "
    "will continue without any.\n");
  return 0;
 }

 VAR_17 = FUNC_4(VAR_14, VAR_4,
     FUNC_0(VAR_4));
 if (VAR_17) {
  FUNC_2(VAR_16->dev,
    "Failed to set up DAPM routes, "
    "will continue with codec default map.\n");
  return 0;
 }


 FUNC_5(VAR_14, "Mouthpiece");
 FUNC_6(VAR_14, "Earpiece");
 FUNC_6(VAR_14, "Microphone");
 FUNC_5(VAR_14, "Speaker");
 FUNC_5(VAR_14, "AGCIN");
 FUNC_5(VAR_14, "AGCOUT");
 FUNC_8(VAR_14);


 VAR_17 = FUNC_3(VAR_14, VAR_3,
     FUNC_0(VAR_3));
 if (VAR_17)
  FUNC_2(VAR_16->dev,
    "Failed to register audio mode control, "
    "will continue without it.\n");

 return 0;
}
