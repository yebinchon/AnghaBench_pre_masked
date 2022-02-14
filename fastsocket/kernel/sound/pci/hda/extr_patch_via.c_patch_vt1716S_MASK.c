
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {int set_widgets_power_state; int num_mixers; int * mixers; int num_iverbs; int * init_verbs; TYPE_1__ gen; } ;
struct hda_codec {int patch_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*) ;
 struct via_spec* FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_6)
{
 struct via_spec *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->gen.mixer_nid = 0x16;
 FUNC_0(VAR_6, 0x1a, 0, 3, 40);
 FUNC_0(VAR_6, 0x1e, 0, 3, 40);


 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6);
  return VAR_8;
 }

 VAR_7->init_verbs[VAR_7->num_iverbs++] = VAR_3;

 VAR_7->mixers[VAR_7->num_mixers++] = VAR_5;
 VAR_7->mixers[VAR_7->num_mixers++] = VAR_4;

 VAR_6->patch_ops = VAR_2;

 VAR_7->set_widgets_power_state = VAR_1;
 return 0;
}
