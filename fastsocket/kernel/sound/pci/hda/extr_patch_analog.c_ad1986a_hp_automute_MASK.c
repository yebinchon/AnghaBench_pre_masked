
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ad198x_spec* spec; } ;
struct ad198x_spec {int jack_present; scalar_t__ inv_jack_detect; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct ad198x_spec *VAR_1 = VAR_0->spec;

 VAR_1->jack_present = FUNC_1(VAR_0, 0x1a);
 if (VAR_1->inv_jack_detect)
  VAR_1->jack_present = !VAR_1->jack_present;
 FUNC_0(VAR_0);
}
