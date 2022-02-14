
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int num_mux_nids; scalar_t__* mux_nids; } ;
struct hdmi_spec_per_cvt {scalar_t__ cvt_nid; scalar_t__ assigned; } ;
struct hdmi_spec {int num_cvts; } ;
struct hda_codec {struct hdmi_spec* spec; } ;


 int VAR_0 ;
 struct hdmi_spec_per_cvt* FUNC_0 (struct hdmi_spec*,int) ;
 struct hdmi_spec_per_pin* FUNC_1 (struct hdmi_spec*,int) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
   int VAR_2, int *VAR_3, int *VAR_4)
{
 struct hdmi_spec *VAR_5 = VAR_1->spec;
 struct hdmi_spec_per_pin *VAR_6;
 struct hdmi_spec_per_cvt *VAR_7 = ((void*)0);
 int VAR_8, VAR_9 = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_2);


 for (VAR_8 = 0; VAR_8 < VAR_5->num_cvts; VAR_8++) {
  VAR_7 = FUNC_0(VAR_5, VAR_8);


  if (VAR_7->assigned)
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_6->num_mux_nids; VAR_9++)
   if (VAR_6->mux_nids[VAR_9] == VAR_7->cvt_nid)
    break;

  if (VAR_9 == VAR_6->num_mux_nids)
   continue;
  break;
 }


 if (VAR_8 == VAR_5->num_cvts)
  return -VAR_0;

 if (VAR_3)
  *VAR_3 = VAR_8;
 if (VAR_4)
  *VAR_4 = VAR_9;

 return 0;
}
