
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct TYPE_2__ {int type; int pin; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct auto_pin_cfg const*,int) ;
 char const* FUNC_1 (struct hda_codec*,TYPE_1__*,int ,int) ;

const char *FUNC_2(struct hda_codec *VAR_1,
     const struct auto_pin_cfg *VAR_2,
     int VAR_3)
{
 int VAR_4 = VAR_2->inputs[VAR_3].type;
 int VAR_5 = 0;

 if ((VAR_3 > 0 && VAR_2->inputs[VAR_3 - 1].type == VAR_4) ||
     (VAR_3 < VAR_2->num_inputs - 1 && VAR_2->inputs[VAR_3 + 1].type == VAR_4))
  VAR_5 = 1;
 if (VAR_5 && VAR_4 == VAR_0)
  VAR_5 &= FUNC_0(VAR_1, VAR_2, VAR_3);
 return FUNC_1(VAR_1, &VAR_2->inputs[VAR_3],
           VAR_2->inputs[VAR_3].pin,
           VAR_5);
}
