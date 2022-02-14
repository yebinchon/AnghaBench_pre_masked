
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int items; unsigned int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct azf3328_mixer_reg {scalar_t__ reg; unsigned int enum_c; int lchan_shift; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct azf3328_mixer_reg*,int ) ;
 int FUNC_1 (int ,char const* const) ;

__attribute__((used)) static int
FUNC_2(struct snd_kcontrol *VAR_3,
       struct snd_ctl_elem_info *VAR_4)
{
 static const char * const VAR_5[] = {
  "Mic1", "Mic2"
 };
 static const char * const VAR_6[] = {
  "Mix", "Mic"
 };
 static const char * const VAR_7[] = {
  "Mic", "CD", "Video", "Aux",
  "Line", "Mix", "Mix Mono", "Phone"
        };
 static const char * const VAR_8[] = {
  "pre 3D", "post 3D"
        };
 struct azf3328_mixer_reg VAR_9;
 const char * const *VAR_10 = ((void*)0);

 FUNC_0(&VAR_9, VAR_3->private_value);
        VAR_4->type = VAR_2;
        VAR_4->count = (VAR_9.reg == VAR_1) ? 2 : 1;
        VAR_4->value.enumerated.items = VAR_9.enum_c;
        if (VAR_4->value.enumerated.item > VAR_9.enum_c - 1U)
                VAR_4->value.enumerated.item = VAR_9.enum_c - 1U;
 if (VAR_9.reg == VAR_0) {
  switch(VAR_9.lchan_shift) {
  case 8:
   VAR_10 = VAR_5;
   break;
  case 9:
   VAR_10 = VAR_6;
   break;
  case 15:
   VAR_10 = VAR_8;
   break;
  }
 } else
 if (VAR_9.reg == VAR_1)
  VAR_10 = VAR_7;

 FUNC_1(VAR_4->value.enumerated.name, VAR_10[VAR_4->value.enumerated.item]);
        return 0;
}
