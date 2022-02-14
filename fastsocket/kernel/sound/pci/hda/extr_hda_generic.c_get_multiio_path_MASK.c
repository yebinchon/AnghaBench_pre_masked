
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nid_path {int dummy; } ;
struct TYPE_2__ {int line_outs; } ;
struct hda_gen_spec {TYPE_1__ autocfg; int * out_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 struct nid_path* FUNC_0 (struct hda_codec*,int ) ;

__attribute__((used)) static inline struct nid_path *
FUNC_1(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_0->spec;
 return FUNC_0(VAR_0,
  VAR_2->out_paths[VAR_2->autocfg.line_outs + VAR_1]);
}
