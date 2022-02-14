
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int jack_dirty; } ;
struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_jack_tbl*) ;
 int FUNC_1 (struct hda_codec*) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,int) ;

void FUNC_3(struct hda_codec *VAR_1, unsigned int VAR_2)
{
 struct hda_jack_tbl *VAR_3;
 int VAR_4 = (VAR_2 >> VAR_0) & 0x7f;

 VAR_3 = FUNC_2(VAR_1, VAR_4);
 if (!VAR_3)
  return;
 VAR_3->jack_dirty = 1;

 FUNC_0(VAR_1, VAR_3);
 FUNC_1(VAR_1);
}
