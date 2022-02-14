
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_cvt {int cvt_nid; } ;
struct hdmi_spec {int dummy; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_0)
{
 struct hdmi_spec *VAR_1 = VAR_0->spec;
 struct hdmi_spec_per_cvt *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1, 0);
 VAR_3 = FUNC_2(VAR_0, VAR_2->cvt_nid,
         VAR_2->cvt_nid);
 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_1(VAR_0, 0);
}
