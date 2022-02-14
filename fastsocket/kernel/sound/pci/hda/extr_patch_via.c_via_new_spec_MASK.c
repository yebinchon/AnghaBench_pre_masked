
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int indep_hp; int keep_eapd_on; int pcm_playback_hook; } ;
struct via_spec {scalar_t__ codec_type; int no_pin_power_ctl; TYPE_1__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 struct via_spec* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static struct via_spec *FUNC_3(struct hda_codec *VAR_4)
{
 struct via_spec *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_4->spec = VAR_5;
 FUNC_2(&VAR_5->gen);
 VAR_5->codec_type = FUNC_0(VAR_4);

 if (VAR_5->codec_type == VAR_1)
  VAR_5->codec_type = VAR_2;
 VAR_5->no_pin_power_ctl = 1;
 VAR_5->gen.indep_hp = 1;
 VAR_5->gen.keep_eapd_on = 1;
 VAR_5->gen.pcm_playback_hook = VAR_3;
 return VAR_5;
}
