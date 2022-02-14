
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {int patch_ops; } ;
struct TYPE_2__ {int automute_hook; } ;
struct cs_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cs_spec* FUNC_0 (struct hda_codec*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_8 ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_9)
{
 struct cs_spec *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_9, VAR_0);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->gen.automute_hook = VAR_7;

 FUNC_4(VAR_9, VAR_6, VAR_4,
      VAR_5);
 FUNC_3(VAR_9, VAR_2);

 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11 < 0)
  goto error;

 VAR_9->patch_ops = VAR_8;

 FUNC_3(VAR_9, VAR_3);

 return 0;

 error:
 FUNC_1(VAR_9);
 return VAR_11;
}
