
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pin_nid; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 struct hdmi_spec_per_pin* FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0)
{
 struct hdmi_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pins; VAR_2++) {
  struct hdmi_spec_per_pin *VAR_3 = FUNC_0(VAR_1, VAR_2);
  hda_nid_t VAR_4 = VAR_3->pin_nid;

  FUNC_1(VAR_0, VAR_4);
  FUNC_2(VAR_0, VAR_4, VAR_4);
 }
 return 0;
}
