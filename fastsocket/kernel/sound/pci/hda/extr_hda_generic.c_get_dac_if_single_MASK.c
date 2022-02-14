
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int num_all_dacs; scalar_t__* all_dacs; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ FUNC_0 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hda_codec*,scalar_t__,scalar_t__) ;

__attribute__((used)) static hda_nid_t FUNC_2(struct hda_codec *VAR_0, hda_nid_t VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 int VAR_3;
 hda_nid_t VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_all_dacs; VAR_3++) {
  hda_nid_t VAR_5 = VAR_2->all_dacs[VAR_3];
  if (!VAR_5 || FUNC_0(VAR_0, VAR_5))
   continue;
  if (FUNC_1(VAR_0, VAR_5, VAR_1)) {
   if (VAR_4)
    return 0;
   VAR_4 = VAR_5;
  }
 }
 return VAR_4;
}
