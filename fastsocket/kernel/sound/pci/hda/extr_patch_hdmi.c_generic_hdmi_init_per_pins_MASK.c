
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_eld {int lock; } ;
struct hdmi_spec_per_pin {int work; struct hda_codec* codec; struct hdmi_eld sink_eld; } ;
struct hdmi_spec {int num_pins; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int FUNC_0 (int *,int ) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,struct hdmi_eld*,int) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_1)
{
 struct hdmi_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_pins; VAR_3++) {
  struct hdmi_spec_per_pin *VAR_4 = FUNC_1(VAR_2, VAR_3);
  struct hdmi_eld *VAR_5 = &VAR_4->sink_eld;

  VAR_4->codec = VAR_1;
  FUNC_2(&VAR_5->lock);
  FUNC_0(&VAR_4->work, VAR_0);
  FUNC_3(VAR_1, VAR_5, VAR_3);
 }
 return 0;
}
