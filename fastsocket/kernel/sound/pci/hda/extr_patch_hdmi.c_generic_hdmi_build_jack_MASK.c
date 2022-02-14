
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec_per_pin {int pin_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hdmi_str ;
struct TYPE_2__ {int device; } ;


 TYPE_1__* FUNC_0 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,char*,int ) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_0, int VAR_1)
{
 char VAR_2[32] = "HDMI/DP";
 struct hdmi_spec *VAR_3 = VAR_0->spec;
 struct hdmi_spec_per_pin *VAR_4 = FUNC_1(VAR_3, VAR_1);
 int VAR_5 = FUNC_0(VAR_3, VAR_1)->device;

 if (VAR_5 > 0)
  FUNC_4(VAR_2 + FUNC_5(VAR_2), ",pcm=%d", VAR_5);
 if (!FUNC_2(VAR_0, VAR_4->pin_nid))
  FUNC_6(VAR_2, " Phantom",
   sizeof(VAR_2) - FUNC_5(VAR_2) - 1);

 return FUNC_3(VAR_0, VAR_4->pin_nid, VAR_2, 0);
}
