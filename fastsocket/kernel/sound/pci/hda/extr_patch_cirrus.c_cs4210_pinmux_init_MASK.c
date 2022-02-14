
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct cs_spec* spec; } ;
struct cs_spec {scalar_t__ sense_b; scalar_t__ gpio_mask; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_5)
{
 struct cs_spec *VAR_6 = VAR_5->spec;
 unsigned int VAR_7, VAR_8;


 VAR_8 = FUNC_0(VAR_5, VAR_4);

 if (VAR_6->gpio_mask)
  VAR_8 |= 0x0008;
 else
  VAR_8 &= ~0x0008;

 if (VAR_6->sense_b)
  VAR_8 |= 0x0010;
 else
  VAR_8 &= ~0x0010;

 FUNC_1(VAR_5, VAR_4, VAR_8);

 if ((VAR_6->gpio_mask || VAR_6->sense_b) &&
     FUNC_2(VAR_5, VAR_3)) {




  VAR_7 = FUNC_3(VAR_5, VAR_3);
  VAR_7 &= ~VAR_0;
  VAR_7 |= (VAR_2 << VAR_1);
  FUNC_4(VAR_5, VAR_3, VAR_7);
 }
}
