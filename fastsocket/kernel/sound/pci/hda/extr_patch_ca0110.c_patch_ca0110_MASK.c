
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_gen_spec {int multi_cap_vol; } ;
struct hda_codec {int patch_ops; TYPE_1__* bus; struct hda_gen_spec* spec; } ;
struct TYPE_2__ {int needs_damn_long_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_2 ;
 struct hda_gen_spec* FUNC_1 (int,int ) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_gen_spec*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3)
{
 struct hda_gen_spec *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_3(VAR_4);
 VAR_3->spec = VAR_4;

 VAR_4->multi_cap_vol = 1;
 VAR_3->bus->needs_damn_long_delay = 1;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0)
  goto error;

 VAR_3->patch_ops = VAR_2;

 return 0;

 error:
 FUNC_2(VAR_3);
 return VAR_5;
}
