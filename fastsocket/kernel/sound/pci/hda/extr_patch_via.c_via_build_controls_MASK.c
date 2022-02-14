
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_spec {int num_mixers; int * mixers; scalar_t__ set_widgets_power_state; } ;
struct hda_codec {struct via_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1)
{
 struct via_spec *VAR_2 = VAR_1->spec;
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->set_widgets_power_state)
  VAR_2->mixers[VAR_2->num_mixers++] = VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_mixers; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->mixers[VAR_4]);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
