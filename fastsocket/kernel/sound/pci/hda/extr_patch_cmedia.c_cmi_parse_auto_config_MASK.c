
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int patch_ops; struct cmi_spec* spec; } ;
struct auto_pin_cfg {int dummy; } ;
struct TYPE_2__ {struct auto_pin_cfg autocfg; } ;
struct cmi_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct auto_pin_cfg*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct hda_codec*,struct auto_pin_cfg*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1)
{
 struct cmi_spec *VAR_2 = VAR_1->spec;
 struct auto_pin_cfg *VAR_3 = &VAR_2->gen.autocfg;
 int VAR_4;

 FUNC_1(&VAR_2->gen);

 VAR_4 = FUNC_2(VAR_1, VAR_3, ((void*)0), 0);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_1->patch_ops = VAR_0;
 return 0;
}
