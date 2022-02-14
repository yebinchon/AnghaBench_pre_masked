
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int pin_nid; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hdmi_spec_per_pin* FUNC_0 (struct hdmi_spec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int *,int*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_2,
   int VAR_3, int VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_2->spec;
 struct hdmi_spec_per_pin *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_pins; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5, VAR_7);

  if (VAR_7 == VAR_3)
   continue;

  VAR_9 = FUNC_2(VAR_2, VAR_6->pin_nid, 0,
       VAR_0, 0);


  if (VAR_9 == VAR_4) {
   VAR_10 = FUNC_1(VAR_2, VAR_7, ((void*)0), &VAR_8);
   if (VAR_10 < 0)
    return;
   FUNC_4("HDMI: choose converter %d for pin %d\n", VAR_8, VAR_7);
   FUNC_3(VAR_2, VAR_6->pin_nid, 0,
         VAR_1,
         VAR_8);
  }
 }
}
