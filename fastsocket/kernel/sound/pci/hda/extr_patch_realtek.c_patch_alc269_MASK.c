
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int resume; int suspend; } ;
struct hda_codec {int vendor_id; TYPE_5__ patch_ops; TYPE_3__* bus; struct alc_spec* spec; } ;
struct TYPE_9__ {int shared_mic_vref_pin; int beep_nid; int no_analog; } ;
struct TYPE_6__ {int platform_type; } ;
struct alc_spec {int has_alc5505_dsp; int shutup; TYPE_4__ gen; int (* init_hook ) (struct hda_codec*) ;int codec_variant; TYPE_1__ cdefine; } ;
struct TYPE_8__ {TYPE_2__* pci; } ;
struct TYPE_7__ {int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct hda_codec*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*,char*) ;
 int FUNC_6 (struct hda_codec*,int,int,int) ;
 int FUNC_7 (struct hda_codec*) ;
 int FUNC_8 (struct hda_codec*) ;
 TYPE_5__ VAR_18 ;
 scalar_t__ FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct alc_spec*,int,int,int ) ;
 int FUNC_11 (struct hda_codec*,int ) ;
 int FUNC_12 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_13 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct hda_codec *VAR_19)
{
 struct alc_spec *VAR_20;
 int VAR_21;

 VAR_21 = FUNC_3(VAR_19, 0x0b);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_20 = VAR_19->spec;
 VAR_20->gen.shared_mic_vref_pin = 0x18;

 FUNC_13(VAR_19, VAR_12,
         VAR_13, VAR_14);
 FUNC_11(VAR_19, VAR_9);

 FUNC_4(VAR_19);

 if (FUNC_9(VAR_19))
  VAR_20->gen.beep_nid = 0x01;

 switch (VAR_19->vendor_id) {
 case 0x10ec0269:
  VAR_20->codec_variant = VAR_1;
  switch (FUNC_8(VAR_19) & 0x00f0) {
  case 0x0010:
   if (VAR_19->bus->pci->subsystem_vendor == 0x1025 &&
       VAR_20->cdefine.platform_type == 1)
    VAR_21 = FUNC_5(VAR_19, "ALC271X");
   VAR_20->codec_variant = VAR_2;
   break;
  case 0x0020:
   if (VAR_19->bus->pci->subsystem_vendor == 0x17aa &&
       VAR_19->bus->pci->subsystem_device == 0x21f3)
    VAR_21 = FUNC_5(VAR_19, "ALC3202");
   VAR_20->codec_variant = VAR_3;
   break;
  case 0x0030:
   VAR_20->codec_variant = VAR_4;
   break;
  default:
   FUNC_6(VAR_19, 0x20, 0x04, 15);
  }
  if (VAR_21 < 0)
   goto error;
  VAR_20->init_hook = FUNC_0;
  FUNC_0(VAR_19);
  break;

 case 0x10ec0280:
 case 0x10ec0290:
  VAR_20->codec_variant = VAR_5;
  break;
 case 0x10ec0233:
 case 0x10ec0282:
 case 0x10ec0283:
  VAR_20->codec_variant = VAR_6;
  break;
 case 0x10ec0284:
 case 0x10ec0292:
  VAR_20->codec_variant = VAR_7;
  break;
 case 0x10ec0286:
  VAR_20->codec_variant = VAR_8;
  break;
 }

 if (FUNC_12(VAR_19, 0x51, 0, VAR_0, 0) == 0x10ec5505) {
  VAR_20->has_alc5505_dsp = 1;
  VAR_20->init_hook = FUNC_2;
 }


 VAR_21 = FUNC_1(VAR_19);
 if (VAR_21 < 0)
  goto error;

 if (!VAR_20->gen.no_analog && VAR_20->gen.beep_nid)
  FUNC_10(VAR_20, 0x0b, 0x04, VAR_11);

 VAR_19->patch_ops = VAR_18;




 VAR_20->shutup = VAR_16;

 FUNC_11(VAR_19, VAR_10);

 return 0;

 error:
 FUNC_7(VAR_19);
 return VAR_21;
}
