
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct auto_pin_cfg {int dummy; } ;
struct TYPE_2__ {struct auto_pin_cfg autocfg; } ;
struct alc_spec {int parse_flags; TYPE_1__ gen; } ;
typedef int hda_nid_t ;


 int FUNC_0 (struct hda_codec*,int const*) ;
 int FUNC_1 (struct hda_codec*,struct auto_pin_cfg*) ;
 int FUNC_2 (struct hda_codec*,struct auto_pin_cfg*,int const*,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0,
     const hda_nid_t *VAR_1,
     const hda_nid_t *VAR_2)
{
 struct alc_spec *VAR_3 = VAR_0->spec;
 struct auto_pin_cfg *VAR_4 = &VAR_3->gen.autocfg;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_4, VAR_1,
           VAR_3->parse_flags);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2)
  FUNC_0(VAR_0, VAR_2);

 VAR_5 = FUNC_1(VAR_0, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return 1;
}
