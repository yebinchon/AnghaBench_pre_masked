
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mixer_nid; } ;
struct via_spec {int set_widgets_power_state; int num_iverbs; int * init_verbs; TYPE_1__ gen; } ;
struct hda_codec {char* chip_name; char* vendor_name; int vendor_id; int patch_ops; TYPE_3__* bus; } ;
struct TYPE_6__ {TYPE_2__* card; } ;
struct TYPE_5__ {int mixername; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*,int ) ;
 int FUNC_3 (struct hda_codec*,int,int ,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int,char*,char*,char*) ;
 int FUNC_5 (struct hda_codec*) ;
 struct via_spec* FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_6)
{
 struct via_spec *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->gen.mixer_nid = 0x16;
 FUNC_3(VAR_6, 0x1a, 0, 3, 40);
 FUNC_3(VAR_6, 0x1e, 0, 3, 40);


 if (FUNC_0(VAR_6) == VAR_2) {
  FUNC_1(VAR_6->chip_name);
  VAR_6->chip_name = FUNC_2("VT1708BCE", VAR_1);
  FUNC_4(VAR_6->bus->card->mixername,
    sizeof(VAR_6->bus->card->mixername),
    "%s %s", VAR_6->vendor_name, VAR_6->chip_name);
 }

 if (VAR_6->vendor_id == 0x11064397) {
  FUNC_1(VAR_6->chip_name);
  VAR_6->chip_name = FUNC_2("VT1705", VAR_1);
  FUNC_4(VAR_6->bus->card->mixername,
    sizeof(VAR_6->bus->card->mixername),
    "%s %s", VAR_6->vendor_name, VAR_6->chip_name);
 }


 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8 < 0) {
  FUNC_5(VAR_6);
  return VAR_8;
 }

 VAR_7->init_verbs[VAR_7->num_iverbs++] = VAR_5;

 VAR_6->patch_ops = VAR_4;

 VAR_7->set_widgets_power_state = VAR_3;
 return 0;
}
