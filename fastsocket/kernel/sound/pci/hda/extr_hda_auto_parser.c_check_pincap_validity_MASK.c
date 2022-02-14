
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;







 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hda_codec *VAR_2, hda_nid_t VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_2, VAR_3);


 if (!VAR_5)
  return 1;

 switch (VAR_4) {
 case 130:
 case 128:
 case 131:
 case 129:
 case 132:
  return !!(VAR_5 & VAR_1);
 default:
  return !!(VAR_5 & VAR_0);
 }
}
