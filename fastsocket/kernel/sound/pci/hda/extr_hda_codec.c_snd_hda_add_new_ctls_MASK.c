
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int iface; scalar_t__ name; int index; } ;
struct TYPE_2__ {int device; int index; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct hda_codec {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,scalar_t__,int ) ;
 struct snd_kcontrol* FUNC_1 (struct snd_kcontrol_new const*,struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,struct snd_kcontrol*) ;

int FUNC_3(struct hda_codec *VAR_1,
    const struct snd_kcontrol_new *VAR_2)
{
 int VAR_3;

 for (; VAR_2->name; VAR_2++) {
  struct snd_kcontrol *VAR_4;
  int VAR_5 = 0, VAR_6 = 0;
  if (VAR_2->iface == -1)
   continue;
  for (;;) {
   VAR_4 = FUNC_1(VAR_2, VAR_1);
   if (!VAR_4)
    return -VAR_0;
   if (VAR_5 > 0)
    VAR_4->id.device = VAR_5;
   if (VAR_6 > 0)
    VAR_4->id.index = VAR_6;
   VAR_3 = FUNC_2(VAR_1, 0, VAR_4);
   if (!VAR_3)
    break;




   if (!VAR_5 && VAR_1->addr)
    VAR_5 = VAR_1->addr;
   else if (!VAR_6 && !VAR_2->index) {
    VAR_6 = FUNC_0(VAR_1,
              VAR_2->name, 0);
    if (VAR_6 <= 0)
     return VAR_3;
   } else
    return VAR_3;
  }
 }
 return 0;
}
