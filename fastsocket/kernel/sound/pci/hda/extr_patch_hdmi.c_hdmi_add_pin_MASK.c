
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int non_pcm; int pin_nid; } ;
struct hdmi_spec {int num_pins; int pins; } ;
struct hda_codec {int vendor_id; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 struct hdmi_spec_per_pin* FUNC_3 (int *) ;
 unsigned int FUNC_4 (struct hda_codec*,int ) ;
 unsigned int FUNC_5 (struct hda_codec*,int ) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_4, hda_nid_t VAR_5)
{
 struct hdmi_spec *VAR_6 = VAR_4->spec;
 unsigned int VAR_7, VAR_8;
 int VAR_9;
 struct hdmi_spec_per_pin *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (!(VAR_7 & (VAR_2 | VAR_1)))
  return 0;

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_0(VAR_8) == VAR_0)
  return 0;

 if (VAR_4->vendor_id == 0x80862807)
  FUNC_2(VAR_4, VAR_5);

 VAR_9 = VAR_6->num_pins;
 VAR_10 = FUNC_3(&VAR_6->pins);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->pin_nid = VAR_5;
 VAR_10->non_pcm = 0;

 VAR_11 = FUNC_1(VAR_4, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_6->num_pins++;

 return 0;
}
