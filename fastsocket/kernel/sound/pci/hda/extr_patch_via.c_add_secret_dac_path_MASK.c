
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {int num_nodes; scalar_t__ start_nid; struct via_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 unsigned int FUNC_1 (struct hda_codec*,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (struct hda_codec*,int ,scalar_t__*,scalar_t__) ;
 int FUNC_4 (struct hda_codec*,int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_2)
{
 struct via_spec *VAR_3 = VAR_2->spec;
 int VAR_4, VAR_5;
 hda_nid_t VAR_6[8];
 hda_nid_t VAR_7;

 if (!VAR_3->gen.mixer_nid)
  return 0;
 VAR_5 = FUNC_3(VAR_2, VAR_3->gen.mixer_nid, VAR_6,
           FUNC_0(VAR_6) - 1);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  if (FUNC_2(FUNC_1(VAR_2, VAR_6[VAR_4])) == VAR_1)
   return 0;
 }


 VAR_7 = VAR_2->start_nid;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_nodes; VAR_4++, VAR_7++) {
  unsigned int VAR_8 = FUNC_1(VAR_2, VAR_7);
  if (FUNC_2(VAR_8) == VAR_1 &&
      !(VAR_8 & VAR_0)) {
   VAR_6[VAR_5++] = VAR_7;
   return FUNC_4(VAR_2,
         VAR_3->gen.mixer_nid,
         VAR_5, VAR_6);
  }
 }
 return 0;
}
