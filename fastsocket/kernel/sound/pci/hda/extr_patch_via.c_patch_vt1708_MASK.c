
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mixer_nid; int suppress_auto_mic; int auto_mute_via_amp; } ;
struct via_spec {int vt1708_jack_detect; int num_iverbs; int * init_verbs; int num_mixers; int * mixers; TYPE_1__ gen; } ;
struct TYPE_4__ {int build_pcms; int build_controls; } ;
struct hda_codec {scalar_t__ jackpoll_interval; TYPE_2__ patch_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*) ;
 struct via_spec* FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_8)
{
 struct via_spec *VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_9->gen.mixer_nid = 0x17;


 VAR_8->jackpoll_interval = FUNC_0(100);
 VAR_9->vt1708_jack_detect = 1;



 VAR_9->gen.suppress_auto_mic = 1;

 VAR_9->gen.auto_mute_via_amp = 1;


 FUNC_4(VAR_8, VAR_2);
 FUNC_4(VAR_8, VAR_1);


 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10 < 0) {
  FUNC_1(VAR_8);
  return VAR_10;
 }


 VAR_9->mixers[VAR_9->num_mixers++] = VAR_7;

 VAR_9->init_verbs[VAR_9->num_iverbs++] = VAR_6;

 VAR_8->patch_ops = VAR_3;
 VAR_8->patch_ops.build_controls = VAR_4;
 VAR_8->patch_ops.build_pcms = VAR_5;


 VAR_8->jackpoll_interval = 0;

 return 0;
}
