
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {int set_widgets_power_state; int num_iverbs; int * init_verbs; TYPE_1__ gen; } ;
struct hda_codec {int patch_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*,int,int ,int) ;
 int FUNC_1 (struct hda_codec*) ;
 struct via_spec* FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_9)
{
 struct via_spec *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 == ((void*)0))
  return -VAR_4;

 VAR_10->gen.mixer_nid = 0x1a;


 FUNC_0(VAR_9, 0x1A, VAR_5,
      (0x17 << VAR_2) |
      (0x17 << VAR_1) |
      (0x5 << VAR_3) |
      (1 << VAR_0));


 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11 < 0) {
  FUNC_1(VAR_9);
  return VAR_11;
 }

 VAR_10->init_verbs[VAR_10->num_iverbs++] = VAR_8;

 VAR_9->patch_ops = VAR_7;

 VAR_10->set_widgets_power_state = VAR_6;
 return 0;
}
