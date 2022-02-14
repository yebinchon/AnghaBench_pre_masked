
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int autocfg; } ;
struct hda_codec {int patch_ops; struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hda_gen_spec* FUNC_0 (int,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int *) ;
 int FUNC_3 (struct hda_gen_spec*) ;
 int FUNC_4 (struct hda_codec*,int *,int *,int ) ;

int FUNC_5(struct hda_codec *VAR_3)
{
 struct hda_gen_spec *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_3(VAR_4);
 VAR_3->spec = VAR_4;

 VAR_5 = FUNC_4(VAR_3, &VAR_4->autocfg, ((void*)0), 0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, &VAR_4->autocfg);
 if (VAR_5 < 0)
  goto error;

 VAR_3->patch_ops = VAR_2;
 return 0;

error:
 FUNC_1(VAR_3);
 return VAR_5;
}
