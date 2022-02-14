
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol_new {int private_value; } ;
struct TYPE_3__ {scalar_t__ iface; int device; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct ct_mixer {TYPE_2__* atc; } ;
struct TYPE_4__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 struct snd_kcontrol** VAR_3 ;
 int FUNC_0 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (struct snd_kcontrol_new*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(struct ct_mixer *VAR_4, struct snd_kcontrol_new *VAR_5)
{
 struct snd_kcontrol *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_4->atc);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_2 == VAR_6->id.iface)
  VAR_6->id.device = VAR_1;

 VAR_7 = FUNC_0(VAR_4->atc->card, VAR_6);
 if (VAR_7)
  return VAR_7;

 switch (VAR_5->private_value) {
 case 129:
  VAR_3[0] = VAR_6; break;
 case 128:
  VAR_3[1] = VAR_6; break;
 default:
  break;
 }

 return 0;
}
