
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_3__ {scalar_t__ speaker_outs; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct cs_spec {scalar_t__ vendor_nid; TYPE_2__ gen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ,int ) ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2)
{
 struct cs_spec *VAR_3 = VAR_2->spec;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->gen.autocfg.speaker_outs &&
     VAR_3->vendor_nid == VAR_0) {
  VAR_4 = FUNC_1(VAR_2, 0,
   FUNC_0(&VAR_1, VAR_2));
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
