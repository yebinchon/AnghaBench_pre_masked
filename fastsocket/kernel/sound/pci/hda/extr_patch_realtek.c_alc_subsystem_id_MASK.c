
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hda_codec {int subsystem_id; int vendor_id; TYPE_3__* bus; struct alc_spec* spec; } ;
struct TYPE_9__ {scalar_t__ line_out_type; int * hp_pins; int line_outs; scalar_t__* line_out_pins; } ;
struct TYPE_10__ {TYPE_4__ autocfg; } ;
struct TYPE_6__ {unsigned int sku_cfg; scalar_t__ fixup; } ;
struct alc_spec {TYPE_5__ gen; int init_amp; TYPE_1__ cdefine; } ;
typedef int hda_nid_t ;
struct TYPE_8__ {TYPE_2__* pci; } ;
struct TYPE_7__ {unsigned int subsystem_device; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int ) ;
 unsigned int FUNC_1 (struct hda_codec*,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_6,
       hda_nid_t VAR_7, hda_nid_t VAR_8,
       hda_nid_t VAR_9, hda_nid_t VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 unsigned VAR_14;
 struct alc_spec *VAR_15 = VAR_6->spec;

 if (VAR_15->cdefine.fixup) {
  VAR_11 = VAR_15->cdefine.sku_cfg;
  if (VAR_11 == VAR_0)
   return 0;
  goto do_sku;
 }

 VAR_11 = VAR_6->subsystem_id & 0xffff;
 if ((VAR_11 != VAR_6->bus->pci->subsystem_device) && (VAR_11 & 1))
  goto do_sku;
 VAR_14 = 0x1d;
 if (VAR_6->vendor_id == 0x10ec0260)
  VAR_14 = 0x17;
 VAR_11 = FUNC_1(VAR_6, VAR_14);
 FUNC_2("realtek: No valid SSID, "
     "checking pincfg 0x%08x for NID 0x%x\n",
     VAR_11, VAR_14);
 if (!(VAR_11 & 1))
  return 0;
 if ((VAR_11 >> 30) != 1)
  return 0;


 VAR_12 = 0;
 for (VAR_13 = 1; VAR_13 < 16; VAR_13++) {
  if ((VAR_11 >> VAR_13) & 1)
   VAR_12++;
 }
 if (((VAR_11 >> 16) & 0xf) != VAR_12)
  return 0;
do_sku:
 FUNC_2("realtek: Enabling init ASM_ID=0x%04x CODEC_ID=%08x\n",
     VAR_11 & 0xffff, VAR_6->vendor_id);







 VAR_12 = (VAR_11 & 0x38) >> 3;
 switch (VAR_12) {
 case 1:
  VAR_15->init_amp = VAR_2;
  break;
 case 3:
  VAR_15->init_amp = VAR_3;
  break;
 case 7:
  VAR_15->init_amp = VAR_4;
  break;
 case 5:
 default:
  VAR_15->init_amp = VAR_1;
  break;
 }




 if (!(VAR_11 & 0x8000))
  return 1;







 if (!VAR_15->gen.autocfg.hp_pins[0] &&
     !(VAR_15->gen.autocfg.line_out_pins[0] &&
       VAR_15->gen.autocfg.line_out_type == VAR_5)) {
  hda_nid_t VAR_16;
  VAR_12 = (VAR_11 >> 11) & 0x3;
  if (VAR_12 == 0)
   VAR_16 = VAR_7;
  else if (VAR_12 == 1)
   VAR_16 = VAR_8;
  else if (VAR_12 == 2)
   VAR_16 = VAR_9;
  else if (VAR_12 == 3)
   VAR_16 = VAR_10;
  else
   return 1;
  if (FUNC_0(VAR_16, VAR_15->gen.autocfg.line_out_pins,
          VAR_15->gen.autocfg.line_outs))
   return 1;
  VAR_15->gen.autocfg.hp_pins[0] = VAR_16;
 }
 return 1;
}
