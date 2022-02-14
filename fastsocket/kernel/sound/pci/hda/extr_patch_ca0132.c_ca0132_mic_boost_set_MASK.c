
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int * input_pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2, long VAR_3)
{
 struct ca0132_spec *VAR_4 = VAR_2->spec;
 int VAR_5 = 0;

 if (VAR_3)
  VAR_5 = FUNC_0(VAR_2, VAR_4->input_pins[0], 0,
     VAR_1, 0, VAR_0, 3);
 else
  VAR_5 = FUNC_0(VAR_2, VAR_4->input_pins[0], 0,
     VAR_1, 0, VAR_0, 0);

 return VAR_5;
}
