
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct auto_pin_cfg_item {scalar_t__ type; int pin; scalar_t__ is_headphone_mic; scalar_t__ is_headset_mic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct hda_codec *VAR_2,
          struct auto_pin_cfg_item *VAR_3,
          int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 if (VAR_3->type != VAR_0)
  return 0;

 if (VAR_3->is_headset_mic || VAR_3->is_headphone_mic)
  return 0;

 VAR_6 = FUNC_1(VAR_2, VAR_3->pin);
 VAR_5 = FUNC_2(VAR_6);
 if (VAR_5 <= VAR_1)
  return 0;

 if (VAR_4 >= 0) {
  int VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 != VAR_4)
   return 0;
 }

 return 1;
}
