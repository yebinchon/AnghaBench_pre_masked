
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {int set_widgets_power_state; int num_iverbs; int * init_verbs; TYPE_1__ gen; } ;
struct hda_codec {int patch_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_1 ;
 int FUNC_1 (struct hda_codec*) ;
 struct via_spec* FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_4)
{
 struct via_spec *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->gen.mixer_nid = 0x3f;
 FUNC_0(VAR_4);


 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4);
  return VAR_6;
 }

 VAR_5->init_verbs[VAR_5->num_iverbs++] = VAR_3;

 VAR_4->patch_ops = VAR_2;

 VAR_5->set_widgets_power_state = VAR_1;

 return 0;
}
