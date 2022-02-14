
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autocfg; int * extra_out_badness; int * main_out_badness; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int *) ;
 int FUNC_1 (struct hda_codec*,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2)
{
 struct via_spec *VAR_3 = VAR_2->spec;
 int VAR_4;

 VAR_3->gen.main_out_badness = &VAR_1;
 VAR_3->gen.extra_out_badness = &VAR_0;

 VAR_4 = FUNC_1(VAR_2, &VAR_3->gen.autocfg, ((void*)0), 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3->gen.autocfg);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_2);
 return 0;
}
