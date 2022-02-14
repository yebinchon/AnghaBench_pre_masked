
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_eld {int dummy; } ;
struct hdmi_spec_per_pin {int work; struct hdmi_eld sink_eld; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {TYPE_1__* bus; struct hdmi_spec* spec; } ;
struct TYPE_2__ {int workq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct hdmi_spec_per_pin* FUNC_2 (struct hdmi_spec*,int) ;
 int FUNC_3 (struct hdmi_spec*) ;
 int FUNC_4 (struct hdmi_spec*) ;
 int FUNC_5 (struct hda_codec*,struct hdmi_eld*) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_0)
{
 struct hdmi_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_pins; VAR_2++) {
  struct hdmi_spec_per_pin *VAR_3 = FUNC_2(VAR_1, VAR_2);
  struct hdmi_eld *VAR_4 = &VAR_3->sink_eld;

  FUNC_0(&VAR_3->work);
  FUNC_5(VAR_0, VAR_4);
 }

 FUNC_1(VAR_0->bus->workq);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
}
