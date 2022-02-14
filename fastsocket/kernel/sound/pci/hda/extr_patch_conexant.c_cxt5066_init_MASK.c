
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ unsol_event; } ;
struct hda_codec {TYPE_1__ patch_ops; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_0)
{
 FUNC_4("CXT5066: init\n");
 FUNC_0(VAR_0);
 if (VAR_0->patch_ops.unsol_event) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0);
 }
 FUNC_3(VAR_0);
 return 0;
}
