
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_outs; } ;
struct hda_gen_spec {int * out_paths; TYPE_1__ autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->autocfg.line_outs; VAR_2++)
  FUNC_0(VAR_0, VAR_1->out_paths[VAR_2]);
}
