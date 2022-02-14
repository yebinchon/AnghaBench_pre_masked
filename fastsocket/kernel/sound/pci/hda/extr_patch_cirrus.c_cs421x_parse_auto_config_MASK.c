
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_2__ {int autocfg; } ;
struct cs_spec {TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int *) ;
 int FUNC_3 (struct hda_codec*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_1)
{
 struct cs_spec *VAR_2 = VAR_1->spec;
 hda_nid_t VAR_3 = VAR_0;
 int VAR_4;

 FUNC_0(VAR_1, VAR_3);

 VAR_4 = FUNC_3(VAR_1, &VAR_2->gen.autocfg, ((void*)0), 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2->gen.autocfg);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_1);
 return 0;
}
