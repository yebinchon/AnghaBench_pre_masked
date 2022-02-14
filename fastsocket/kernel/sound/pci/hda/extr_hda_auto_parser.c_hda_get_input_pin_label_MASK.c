
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct auto_pin_cfg_item {int is_headphone_mic; int is_headset_mic; } ;
typedef int hda_nid_t ;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static const char *FUNC_3(struct hda_codec *VAR_1,
        const struct auto_pin_cfg_item *VAR_2,
        hda_nid_t VAR_3, bool VAR_4)
{
 unsigned int VAR_5;
 static const char * const VAR_6[] = {
  "Internal Mic", "Dock Mic", "Mic", "Rear Mic", "Front Mic"
 };
 int VAR_7;

 VAR_5 = FUNC_1(VAR_1, VAR_3);

 switch (FUNC_0(VAR_5)) {
 case 129:
  if (VAR_2 && VAR_2->is_headset_mic)
   return "Headset Mic";
  if (VAR_2 && VAR_2->is_headphone_mic)
   return "Headphone Mic";
  if (!VAR_4)
   return "Mic";
  VAR_7 = FUNC_2(VAR_5);
  if (!VAR_7)
   return "None";
  return VAR_6[VAR_7 - 1];
 case 130:
  if (!VAR_4)
   return "Line";
  VAR_7 = FUNC_2(VAR_5);
  if (!VAR_7)
   return "None";
  if (VAR_7 == VAR_0)
   return "Dock Line";
  return "Line";
 case 134:
  return "Aux";
 case 133:
  return "CD";
 case 128:
  return "SPDIF In";
 case 132:
  return "Digital In";
 case 131:
  return "Headphone Mic";
 default:
  return "Misc";
 }
}
