
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subdevice; } ;
struct snd_kcontrol {TYPE_1__ id; int private_value; } ;
struct hda_nid_item {int nid; unsigned short flags; struct snd_kcontrol* kctl; } ;
struct hda_codec {int mixers; TYPE_2__* bus; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int card; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct hda_nid_item* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct snd_kcontrol*) ;

int FUNC_3(struct hda_codec *VAR_4, hda_nid_t VAR_5,
      struct snd_kcontrol *VAR_6)
{
 int VAR_7;
 unsigned short VAR_8 = 0;
 struct hda_nid_item *VAR_9;

 if (VAR_6->id.subdevice & VAR_2) {
  VAR_8 |= VAR_1;
  if (VAR_5 == 0)
   VAR_5 = FUNC_0(VAR_6->private_value);
 }
 if ((VAR_6->id.subdevice & VAR_3) != 0 && VAR_5 == 0)
  VAR_5 = VAR_6->id.subdevice & 0xffff;
 if (VAR_6->id.subdevice & (VAR_3|VAR_2))
  VAR_6->id.subdevice = 0;
 VAR_7 = FUNC_2(VAR_4->bus->card, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_9 = FUNC_1(&VAR_4->mixers);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->kctl = VAR_6;
 VAR_9->nid = VAR_5;
 VAR_9->flags = VAR_8;
 return 0;
}
