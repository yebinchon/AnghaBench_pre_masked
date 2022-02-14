
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int num_mixers; scalar_t__ dig_in; int multiout; scalar_t__ dig_out; int autocfg; int * mixers; } ;
struct TYPE_2__ {char* name; int direct; int nid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ,char*,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,scalar_t__) ;
 int FUNC_5 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct hda_codec*,int *) ;
 int FUNC_7 (struct hda_codec*,int *) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_5)
{
 struct ca0132_spec *VAR_6 = VAR_5->spec;
 int VAR_7, VAR_8;
 int VAR_9 = 0;


 for (VAR_7 = 0; VAR_7 < VAR_6->num_mixers; VAR_7++) {
  VAR_9 = FUNC_3(VAR_5, VAR_6->mixers[VAR_7]);
  if (VAR_9 < 0)
   return VAR_9;
 }




 VAR_8 = VAR_2 + VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_9 = FUNC_0(VAR_5, VAR_4[VAR_7].nid,
        VAR_4[VAR_7].name,
        VAR_4[VAR_7].direct);
  if (VAR_9 < 0)
   return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_3, "PlayEnhancement", 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_0, "CrystalVoice", 1);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_5);





 VAR_9 = FUNC_7(VAR_5, &VAR_6->autocfg);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6->dig_out) {
  VAR_9 = FUNC_5(VAR_5, VAR_6->dig_out,
          VAR_6->dig_out);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_9 = FUNC_6(VAR_5, &VAR_6->multiout);
  if (VAR_9 < 0)
   return VAR_9;

 }

 if (VAR_6->dig_in) {
  VAR_9 = FUNC_4(VAR_5, VAR_6->dig_in);
  if (VAR_9 < 0)
   return VAR_9;
 }
 return 0;
}
