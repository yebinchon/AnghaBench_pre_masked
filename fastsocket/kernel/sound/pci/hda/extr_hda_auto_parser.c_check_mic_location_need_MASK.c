
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int num_inputs; TYPE_1__* inputs; } ;
struct TYPE_2__ {int pin; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
       const struct auto_pin_cfg *VAR_2,
       int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_1, VAR_2->inputs[VAR_3].pin);
 VAR_6 = FUNC_1(VAR_4);

 if (VAR_6 <= VAR_0)
  return 1;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->num_inputs; VAR_5++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2->inputs[VAR_5].pin);
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 >= VAR_0) {
   if (VAR_6 && VAR_6 != VAR_7)
    return 1;
   VAR_6 = VAR_7;
  }
 }
 return 0;
}
