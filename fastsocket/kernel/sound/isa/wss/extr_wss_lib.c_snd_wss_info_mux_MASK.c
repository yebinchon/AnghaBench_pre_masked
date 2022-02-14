
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_wss {int hardware; TYPE_1__* card; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct TYPE_4__ {int driver; } ;


 int EINVAL ;
 int SNDRV_CTL_ELEM_TYPE_ENUMERATED ;


 scalar_t__ snd_BUG_ON (int) ;
 struct snd_wss* snd_kcontrol_chip (struct snd_kcontrol*) ;
 int strcmp (int ,char*) ;
 int strcpy (int ,char*) ;

__attribute__((used)) static int snd_wss_info_mux(struct snd_kcontrol *kcontrol,
       struct snd_ctl_elem_info *uinfo)
{
 static char *texts[4] = {
  "Line", "Aux", "Mic", "Mix"
 };
 static char *opl3sa_texts[4] = {
  "Line", "CD", "Mic", "Mix"
 };
 static char *gusmax_texts[4] = {
  "Line", "Synth", "Mic", "Mix"
 };
 char **ptexts = texts;
 struct snd_wss *chip = snd_kcontrol_chip(kcontrol);

 if (snd_BUG_ON(!chip->card))
  return -EINVAL;
 uinfo->type = SNDRV_CTL_ELEM_TYPE_ENUMERATED;
 uinfo->count = 2;
 uinfo->value.enumerated.items = 4;
 if (uinfo->value.enumerated.item > 3)
  uinfo->value.enumerated.item = 3;
 if (!strcmp(chip->card->driver, "GUS MAX"))
  ptexts = gusmax_texts;
 switch (chip->hardware) {
 case 129:
  ptexts = gusmax_texts;
  break;
 case 128:
  ptexts = opl3sa_texts;
  break;
 }
 strcpy(uinfo->value.enumerated.name, ptexts[uinfo->value.enumerated.item]);
 return 0;
}
