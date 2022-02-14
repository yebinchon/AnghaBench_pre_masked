
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int unsol_event; } ;
struct hda_codec {TYPE_2__ patch_ops; struct alc_spec* spec; } ;
struct TYPE_3__ {int need_dac_fix; int beep_nid; int no_analog; } ;
struct alc_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_6 ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 (struct alc_spec*,int,int,int ) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_8)
{
 struct alc_spec *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8, 0x0b);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9 = VAR_8->spec;
 VAR_9->gen.need_dac_fix = 1;
 VAR_9->gen.beep_nid = 0x01;

 FUNC_5(VAR_8, VAR_3, VAR_4,
         VAR_5);
 FUNC_4(VAR_8, VAR_0);


 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 < 0)
  goto error;

 if (!VAR_9->gen.no_analog)
  FUNC_3(VAR_9, 0x0b, 0x05, VAR_2);

 VAR_8->patch_ops = VAR_7;
 VAR_8->patch_ops.unsol_event = VAR_6;


 FUNC_4(VAR_8, VAR_1);

 return 0;

 error:
 FUNC_2(VAR_8);
 return VAR_10;
}
