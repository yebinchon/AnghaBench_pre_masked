
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int curr_chip_addx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_3, unsigned int VAR_4)
{
 struct ca0132_spec *VAR_5 = VAR_3->spec;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_4 & 0xffff);

 if (VAR_6 != -VAR_0) {

  VAR_6 = FUNC_0(VAR_3, VAR_1,
      VAR_4 >> 16);
 }



 VAR_5->curr_chip_addx = (VAR_6 != -VAR_0) ?
     (VAR_5->curr_chip_addx + 4) : ~0UL;
 return VAR_6;
}
