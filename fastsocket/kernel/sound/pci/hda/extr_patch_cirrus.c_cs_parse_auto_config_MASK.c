
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct cs_spec* spec; } ;
struct TYPE_2__ {int autocfg; } ;
struct cs_spec {TYPE_1__ gen; } ;


 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (struct hda_codec*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_0)
{
 struct cs_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->gen.autocfg, ((void*)0), 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->gen.autocfg);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
