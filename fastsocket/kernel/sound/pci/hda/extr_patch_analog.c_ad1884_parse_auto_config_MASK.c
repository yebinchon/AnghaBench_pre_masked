
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_2__ {int mixer_nid; int beep_nid; } ;
struct ad198x_spec {TYPE_1__ gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct ad198x_spec*,int,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_5)
{
 struct ad198x_spec *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6 = VAR_5->spec;

 VAR_6->gen.mixer_nid = 0x20;
 VAR_6->gen.beep_nid = 0x10;
 FUNC_3(VAR_6, 0x10, 0, VAR_2);

 FUNC_6(VAR_5, ((void*)0), VAR_3, VAR_4);
 FUNC_4(VAR_5, VAR_0);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 < 0)
  goto error;
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  goto error;

 FUNC_4(VAR_5, VAR_1);

 return 0;

 error:
 FUNC_5(VAR_5);
 return VAR_7;
}
