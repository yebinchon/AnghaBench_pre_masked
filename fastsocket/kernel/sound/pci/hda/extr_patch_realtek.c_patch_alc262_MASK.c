
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int patch_ops; struct alc_spec* spec; } ;
struct TYPE_2__ {int shared_mic_vref_pin; int beep_nid; int no_analog; } ;
struct alc_spec {int shutup; TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_9 ;
 int FUNC_3 (struct hda_codec*,int,int,int) ;
 int FUNC_4 (struct hda_codec*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct alc_spec*,int,int,int ) ;
 int FUNC_7 (struct hda_codec*,int ) ;
 int FUNC_8 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_9 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_10 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct hda_codec *VAR_11)
{
 struct alc_spec *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_11, 0x0b);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = VAR_11->spec;
 VAR_12->gen.shared_mic_vref_pin = 0x18;
 FUNC_3(VAR_11, 0x20, 0x0a, 10);

 FUNC_10(VAR_11, VAR_6, VAR_7,
         VAR_8);
 FUNC_7(VAR_11, VAR_3);

 FUNC_2(VAR_11);

 if (FUNC_5(VAR_11))
  VAR_12->gen.beep_nid = 0x01;


 VAR_13 = FUNC_0(VAR_11);
 if (VAR_13 < 0)
  goto error;

 if (!VAR_12->gen.no_analog && VAR_12->gen.beep_nid)
  FUNC_6(VAR_12, 0x0b, 0x05, VAR_5);

 VAR_11->patch_ops = VAR_10;
 VAR_12->shutup = VAR_9;

 FUNC_7(VAR_11, VAR_4);

 return 0;

 error:
 FUNC_4(VAR_11);
 return VAR_13;
}
