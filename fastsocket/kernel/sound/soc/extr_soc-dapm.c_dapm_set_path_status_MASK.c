
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int shift; int max; unsigned int invert; } ;
struct soc_enum {int max; unsigned int reg; int shift_l; int mask; int* values; int * texts; } ;
struct snd_soc_dapm_widget {int id; int codec; TYPE_1__* kcontrols; } ;
struct snd_soc_dapm_path {int connect; int name; } ;
struct TYPE_2__ {scalar_t__ private_value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_dapm_widget *VAR_0,
 struct snd_soc_dapm_path *VAR_1, int VAR_2)
{
 switch (VAR_0->id) {
 case 130:
 case 139:
 case 138: {
  int VAR_3;
  struct soc_mixer_control *VAR_4 = (struct soc_mixer_control *)
   VAR_0->kcontrols[VAR_2].private_value;
  unsigned int VAR_5 = VAR_4->reg;
  unsigned int VAR_6 = VAR_4->shift;
  int VAR_7 = VAR_4->max;
  unsigned int VAR_8 = (1 << FUNC_0(VAR_7)) - 1;
  unsigned int VAR_9 = VAR_4->invert;

  VAR_3 = FUNC_1(VAR_0->codec, VAR_5);
  VAR_3 = (VAR_3 >> VAR_6) & VAR_8;

  if ((VAR_9 && !VAR_3) || (!VAR_9 && VAR_3))
   VAR_1->connect = 1;
  else
   VAR_1->connect = 0;
 }
 break;
 case 137: {
  struct soc_enum *VAR_10 = (struct soc_enum *)VAR_0->kcontrols[VAR_2].private_value;
  int VAR_11, VAR_12, VAR_13;

  for (VAR_13 = 1; VAR_13 < VAR_10->max; VAR_13 <<= 1)
  ;
  VAR_11 = FUNC_1(VAR_0->codec, VAR_10->reg);
  VAR_12 = (VAR_11 >> VAR_10->shift_l) & (VAR_13 - 1);

  VAR_1->connect = 0;
  for (VAR_2 = 0; VAR_2 < VAR_10->max; VAR_2++) {
   if (!(FUNC_2(VAR_1->name, VAR_10->texts[VAR_2])) && VAR_12 == VAR_2)
    VAR_1->connect = 1;
  }
 }
 break;
 case 129: {
  struct soc_enum *VAR_14 = (struct soc_enum *)
   VAR_0->kcontrols[VAR_2].private_value;
  int VAR_15, VAR_16;

  VAR_15 = FUNC_1(VAR_0->codec, VAR_14->reg);
  VAR_15 = (VAR_15 >> VAR_14->shift_l) & VAR_14->mask;
  for (VAR_16 = 0; VAR_16 < VAR_14->max; VAR_16++) {
   if (VAR_15 == VAR_14->values[VAR_16])
    break;
  }

  VAR_1->connect = 0;
  for (VAR_2 = 0; VAR_2 < VAR_14->max; VAR_2++) {
   if (!(FUNC_2(VAR_1->name, VAR_14->texts[VAR_2])) && VAR_16 == VAR_2)
    VAR_1->connect = 1;
  }
 }
 break;

 case 135:
 case 136:
 case 148:
 case 143:
 case 145:
 case 140:
 case 128:
 case 131:
 case 147:
 case 146:
  VAR_1->connect = 1;
 break;

 case 144:
 case 141:
 case 132:
 case 142:
 case 133:
 case 134:
  VAR_1->connect = 0;
 break;
 }
}
