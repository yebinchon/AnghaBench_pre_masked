
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {scalar_t__ codec_type; int set_widgets_power_state; int num_iverbs; int * init_verbs; TYPE_1__ gen; } ;
struct hda_codec {int patch_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int ,int,int) ;
 int VAR_3 ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct hda_codec*) ;
 struct via_spec* FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_9)
{
 struct via_spec *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_10->gen.mixer_nid = 0x21;
 FUNC_2(VAR_9, 0x2b, 0, 3, 40);
 FUNC_2(VAR_9, 0x29, 0, 3, 40);
 if (VAR_10->codec_type == VAR_2)
  FUNC_1(VAR_9);
 FUNC_0(VAR_9);

 FUNC_4(VAR_9, ((void*)0), VAR_8, VAR_4);
 FUNC_3(VAR_9, VAR_1);


 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(VAR_9);
  return VAR_11;
 }

 if (VAR_10->codec_type == VAR_2)
  VAR_10->init_verbs[VAR_10->num_iverbs++] = VAR_6;
 else
  VAR_10->init_verbs[VAR_10->num_iverbs++] = VAR_7;

 VAR_9->patch_ops = VAR_5;

 VAR_10->set_widgets_power_state = VAR_3;
 return 0;
}
