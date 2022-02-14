
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unsol_event; } ;
struct hda_codec {TYPE_1__ patch_ops; struct conexant_spec* spec; } ;
struct conexant_spec {int auto_mic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int ) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_4)
{
 struct conexant_spec *VAR_5 = VAR_4->spec;

 FUNC_0(VAR_4);

 if (VAR_5->auto_mic & VAR_0)
  FUNC_2(VAR_4, 0x17, VAR_2);
 if (VAR_5->auto_mic & VAR_1)
  FUNC_2(VAR_4, 0x18, VAR_3);

 if (VAR_4->patch_ops.unsol_event) {
  FUNC_1(VAR_4);
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }
 return 0;
}
