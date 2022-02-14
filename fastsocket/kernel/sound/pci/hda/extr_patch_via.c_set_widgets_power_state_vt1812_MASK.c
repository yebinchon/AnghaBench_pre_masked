
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ indep_hp_enabled; } ;
struct via_spec {TYPE_1__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,unsigned int*) ;
 unsigned int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_2)
{
 struct via_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;
 unsigned int VAR_5;


 VAR_4 = VAR_1;
 FUNC_0(VAR_2, 0x29, &VAR_4);
 FUNC_0(VAR_2, 0x2a, &VAR_4);
 FUNC_0(VAR_2, 0x2b, &VAR_4);
 VAR_4 = VAR_0;

 FUNC_2(VAR_2, 0x1e, VAR_4);
 FUNC_2(VAR_2, 0x1f, VAR_4);
 FUNC_2(VAR_2, 0x10, VAR_4);
 FUNC_2(VAR_2, 0x11, VAR_4);



 FUNC_2(VAR_2, 0x8, VAR_0);


 VAR_4 = VAR_1;
 FUNC_0(VAR_2, 0x28, &VAR_4);
 FUNC_2(VAR_2, 0x18, VAR_4);
 FUNC_2(VAR_2, 0x38, VAR_4);


 VAR_4 = VAR_1;
 FUNC_0(VAR_2, 0x25, &VAR_4);
 FUNC_2(VAR_2, 0x15, VAR_4);
 FUNC_2(VAR_2, 0x35, VAR_4);
 if (VAR_3->gen.indep_hp_enabled)
  FUNC_2(VAR_2, 0x9, VAR_0);



 VAR_5 = FUNC_1(VAR_2, 0x25);

 VAR_4 = VAR_1;
 FUNC_0(VAR_2, 0x24, &VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_2, 0x14, VAR_1);
  FUNC_2(VAR_2, 0x34, VAR_1);
 } else {
  FUNC_2(VAR_2, 0x14, VAR_0);
  FUNC_2(VAR_2, 0x34, VAR_0);
 }




 VAR_5 = FUNC_1(VAR_2, 0x28);

 VAR_4 = VAR_1;
 FUNC_0(VAR_2, 0x31, &VAR_4);
 if (VAR_5) {
  FUNC_2(VAR_2, 0x1c, VAR_1);
  FUNC_2(VAR_2, 0x3c, VAR_1);
  FUNC_2(VAR_2, 0x3e, VAR_1);
 } else {
  FUNC_2(VAR_2, 0x1c, VAR_0);
  FUNC_2(VAR_2, 0x3c, VAR_0);
  FUNC_2(VAR_2, 0x3e, VAR_0);
 }


 VAR_4 = VAR_1;
 FUNC_0(VAR_2, 0x33, &VAR_4);
 FUNC_2(VAR_2, 0x1d, VAR_4);
 FUNC_2(VAR_2, 0x3d, VAR_4);

}
