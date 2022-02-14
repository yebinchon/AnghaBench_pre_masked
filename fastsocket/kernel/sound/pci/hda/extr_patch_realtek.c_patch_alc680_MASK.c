
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int patch_ops; } ;


 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, 0);
 if (VAR_2 < 0)
  return VAR_2;


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0) {
  FUNC_2(VAR_1);
  return VAR_2;
 }

 VAR_1->patch_ops = VAR_0;

 return 0;
}
