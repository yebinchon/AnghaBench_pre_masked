
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int * adcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 struct ca0132_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_3->adcs[0], 0,
       VAR_0, 0);
 if (VAR_4 != 0)
  FUNC_1(VAR_2, VAR_3->adcs[0], 0,
        VAR_1,
        0);
 return VAR_4;
}
