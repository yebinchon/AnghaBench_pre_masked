
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pci_quirk {int value; char* name; int subvendor; int subdevice; int subdevice_mask; } ;
struct hda_model_fixup {char* name; int id; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {int fixup_id; unsigned int subsystem_id; char const* fixup_name; struct hda_fixup const* fixup_list; TYPE_1__* bus; scalar_t__ modelname; } ;
struct TYPE_2__ {int pci; } ;


 struct snd_pci_quirk* snd_pci_quirk_lookup (int ,struct snd_pci_quirk const*) ;
 int strcmp (scalar_t__,char*) ;

void snd_hda_pick_fixup(struct hda_codec *codec,
   const struct hda_model_fixup *models,
   const struct snd_pci_quirk *quirk,
   const struct hda_fixup *fixlist)
{
 const struct snd_pci_quirk *q;
 int id = -1;
 const char *name = ((void*)0);


 if (codec->modelname && !strcmp(codec->modelname, "nofixup")) {
  codec->fixup_list = ((void*)0);
  codec->fixup_id = -1;
  return;
 }

 if (codec->modelname && models) {
  while (models->name) {
   if (!strcmp(codec->modelname, models->name)) {
    id = models->id;
    name = models->name;
    break;
   }
   models++;
  }
 }
 if (id < 0 && quirk) {
  q = snd_pci_quirk_lookup(codec->bus->pci, quirk);
  if (q) {
   id = q->value;



  }
 }
 if (id < 0 && quirk) {
  for (q = quirk; q->subvendor; q++) {
   unsigned int vendorid =
    q->subdevice | (q->subvendor << 16);
   unsigned int mask = 0xffff0000 | q->subdevice_mask;
   if ((codec->subsystem_id & mask) == (vendorid & mask)) {
    id = q->value;



    break;
   }
  }
 }

 codec->fixup_id = id;
 if (id >= 0) {
  codec->fixup_list = fixlist;
  codec->fixup_name = name;
 }
}
