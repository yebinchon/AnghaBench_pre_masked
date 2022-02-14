
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int patch_ops; struct ca0132_spec* spec; } ;
struct ca0132_spec {int num_mixers; int num_init_verbs; int autocfg; int unsol_hp_work; int * init_verbs; int base_exit_verbs; int base_init_verbs; int * mixers; struct hda_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ca0132_spec* FUNC_3 (int,int ) ;
 int FUNC_4 (struct hda_codec*,int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_9)
{
 struct ca0132_spec *VAR_10;
 int VAR_11;

 FUNC_5("patch_ca0132\n");

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_9->spec = VAR_10;
 VAR_10->codec = VAR_9;

 VAR_10->num_mixers = 1;
 VAR_10->mixers[0] = VAR_6;

 VAR_10->base_init_verbs = VAR_3;
 VAR_10->base_exit_verbs = VAR_2;
 VAR_10->init_verbs[0] = VAR_4;
 VAR_10->init_verbs[1] = VAR_5;
 VAR_10->num_init_verbs = 2;

 FUNC_0(&VAR_10->unsol_hp_work, VAR_8);

 FUNC_2(VAR_9);

 FUNC_1(VAR_9);

 VAR_11 = FUNC_4(VAR_9, &VAR_10->autocfg, ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->patch_ops = VAR_7;

 return 0;
}
