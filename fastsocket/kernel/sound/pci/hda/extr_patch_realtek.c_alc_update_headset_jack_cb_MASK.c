
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int current_headset_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_jack_tbl*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1, struct hda_jack_tbl *VAR_2)
{
 struct alc_spec *VAR_3 = VAR_1->spec;
 VAR_3->current_headset_type = VAR_0;
 FUNC_0(VAR_1, VAR_2);
}
