
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_spec {int dummy; } ;
struct TYPE_2__ {int set_power_state; } ;
struct hda_codec {int vendor_id; TYPE_1__ patch_ops; struct hdmi_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hdmi_spec*,int) ;
 scalar_t__ FUNC_2 (struct hda_codec*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct hda_codec*,int) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hdmi_spec*) ;
 struct hdmi_spec* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_5)
{
 struct hdmi_spec *VAR_6;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_5->spec = VAR_6;
 FUNC_1(VAR_6, 4);

 if (VAR_5->vendor_id == 0x80862807) {
  FUNC_4(VAR_5, 1);
  FUNC_5(VAR_5);
 }

 if (FUNC_2(VAR_5) < 0) {
  VAR_5->spec = ((void*)0);
  FUNC_6(VAR_6);
  return -VAR_0;
 }
 VAR_5->patch_ops = VAR_3;
 if (VAR_5->vendor_id == 0x80862807)
  VAR_5->patch_ops.set_power_state = VAR_4;

 FUNC_0(VAR_5);

 FUNC_3();

 return 0;
}
