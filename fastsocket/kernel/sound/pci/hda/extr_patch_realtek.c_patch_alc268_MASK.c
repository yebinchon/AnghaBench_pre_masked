
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {int patch_ops; struct alc_spec* spec; } ;
struct TYPE_3__ {int* speaker_pins; } ;
struct TYPE_4__ {int beep_nid; TYPE_1__ autocfg; int no_analog; } ;
struct alc_spec {int shutup; TYPE_2__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct alc_spec*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int VAR_12 ;
 int FUNC_3 (struct hda_codec*) ;
 int VAR_13 ;
 int FUNC_4 (struct hda_codec*,int,int ) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*,int ) ;
 int FUNC_7 (struct hda_codec*,int,int ,int) ;
 int FUNC_8 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_14)
{
 struct alc_spec *VAR_15;
 int VAR_16;


 VAR_16 = FUNC_2(VAR_14, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15 = VAR_14->spec;
 VAR_15->gen.beep_nid = 0x01;

 FUNC_8(VAR_14, VAR_9, VAR_10, VAR_11);
 FUNC_6(VAR_14, VAR_4);


 VAR_16 = FUNC_1(VAR_14);
 if (VAR_16 < 0)
  goto error;

 if (VAR_16 > 0 && !VAR_15->gen.no_analog &&
     VAR_15->gen.autocfg.speaker_pins[0] != 0x1d) {
  FUNC_0(VAR_15, VAR_8);
  FUNC_5(VAR_14, VAR_7);
  if (!FUNC_4(VAR_14, 0x1d, VAR_6))

   FUNC_7(VAR_14, 0x1d, VAR_6,
       (0x0c << VAR_2) |
       (0x0c << VAR_1) |
       (0x07 << VAR_3) |
       (0 << VAR_0));
 }

 VAR_14->patch_ops = VAR_13;
 VAR_15->shutup = VAR_12;

 FUNC_6(VAR_14, VAR_5);

 return 0;

 error:
 FUNC_3(VAR_14);
 return VAR_16;
}
