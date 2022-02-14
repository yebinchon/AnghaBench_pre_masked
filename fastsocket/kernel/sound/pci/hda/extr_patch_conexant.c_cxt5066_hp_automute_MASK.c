
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int hp_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 unsigned int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (char*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4, VAR_5;


 VAR_4 = FUNC_1(VAR_2, 0x19);


 VAR_5 = FUNC_1(VAR_2, 0x1c);

 VAR_3->hp_present = VAR_4 ? VAR_0 : 0;
 VAR_3->hp_present |= VAR_5 ? VAR_1 : 0;
 FUNC_2("CXT5066: hp automute portA=%x portD=%x present=%d\n",
  VAR_4, VAR_5, VAR_3->hp_present);
 FUNC_0(VAR_2);
}
