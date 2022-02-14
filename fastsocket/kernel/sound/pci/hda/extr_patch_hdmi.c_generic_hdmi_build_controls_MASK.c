
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_pin {int * mux_nids; int pin_nid; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int) ;
 TYPE_1__* FUNC_1 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hda_codec*,int,int ) ;
 int FUNC_4 (struct hdmi_spec_per_pin*,int ) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_6 (struct hda_codec*,int) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_1->spec;
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_pins; VAR_4++) {
  struct hdmi_spec_per_pin *VAR_5 = FUNC_2(VAR_2, VAR_4);

  VAR_3 = FUNC_0(VAR_1, VAR_4);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_5(VAR_1,
        VAR_5->pin_nid,
        VAR_5->mux_nids[0],
        VAR_0);
  if (VAR_3 < 0)
   return VAR_3;
  FUNC_6(VAR_1, VAR_4);


  VAR_3 = FUNC_3(VAR_1, VAR_4,
       FUNC_1(VAR_2, VAR_4)->device);

  if (VAR_3 < 0)
   return VAR_3;

  FUNC_4(VAR_5, 0);
 }

 return 0;
}
