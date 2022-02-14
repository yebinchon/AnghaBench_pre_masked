
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mixer_nid; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {int patch_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 struct via_spec* FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_2)
{
 struct via_spec *VAR_3;
 int VAR_4;


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_3->gen.mixer_nid = 0x18;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2);
  return VAR_4;
 }

 VAR_2->patch_ops = VAR_1;

 return 0;
}
