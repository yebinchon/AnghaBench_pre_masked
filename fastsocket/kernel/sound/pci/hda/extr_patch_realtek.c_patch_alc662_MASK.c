
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hda_codec {int vendor_id; int patch_ops; TYPE_2__* bus; struct alc_spec* spec; } ;
struct TYPE_8__ {int beep_nid; int no_analog; } ;
struct TYPE_7__ {int platform_type; } ;
struct alc_spec {int shutup; TYPE_4__ gen; TYPE_3__ cdefine; int (* init_hook ) (struct hda_codec*) ;int parse_flags; } ;
struct TYPE_6__ {TYPE_1__* pci; } ;
struct TYPE_5__ {int subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,char*) ;
 int VAR_7 ;
 int FUNC_5 (struct hda_codec*,int,int,int) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct alc_spec*,int,int,int ) ;
 int FUNC_10 (struct hda_codec*,int ) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct hda_codec *VAR_9)
{
 struct alc_spec *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_9, 0x0b);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = VAR_9->spec;


 VAR_10->parse_flags = VAR_3;

 FUNC_5(VAR_9, 0x20, 0x04, 15);

 VAR_10->init_hook = FUNC_0;
 FUNC_0(VAR_9);

 FUNC_11(VAR_9, VAR_4,
         VAR_5, VAR_6);
 FUNC_10(VAR_9, VAR_0);

 FUNC_3(VAR_9);

 if (FUNC_8(VAR_9))
  VAR_10->gen.beep_nid = 0x01;

 if ((FUNC_7(VAR_9) & (1 << 14)) &&
     VAR_9->bus->pci->subsystem_vendor == 0x1025 &&
     VAR_10->cdefine.platform_type == 1) {
  VAR_11 = FUNC_4(VAR_9, "ALC272X");
  if (VAR_11 < 0)
   goto error;
 }


 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11 < 0)
  goto error;

 if (!VAR_10->gen.no_analog && VAR_10->gen.beep_nid) {
  switch (VAR_9->vendor_id) {
  case 0x10ec0662:
   FUNC_9(VAR_10, 0x0b, 0x05, VAR_2);
   break;
  case 0x10ec0272:
  case 0x10ec0663:
  case 0x10ec0665:
   FUNC_9(VAR_10, 0x0b, 0x04, VAR_2);
   break;
  case 0x10ec0273:
   FUNC_9(VAR_10, 0x0b, 0x03, VAR_2);
   break;
  }
 }

 VAR_9->patch_ops = VAR_8;
 VAR_10->shutup = VAR_7;

 FUNC_10(VAR_9, VAR_1);

 return 0;

 error:
 FUNC_6(VAR_9);
 return VAR_11;
}
