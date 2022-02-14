
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pincfg {unsigned int target; } ;
struct hda_codec {int init_pins; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 struct hda_pincfg* FUNC_0 (struct hda_codec*,int *,int ) ;

int FUNC_1(struct hda_codec *VAR_1, hda_nid_t VAR_2,
     unsigned int VAR_3)
{
 struct hda_pincfg *VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_1->init_pins, VAR_2);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->target = VAR_3;
 return 0;
}
