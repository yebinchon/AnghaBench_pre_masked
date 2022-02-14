
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ indep_hp_enabled; } ;
struct via_spec {TYPE_1__ gen; scalar_t__ dmic_enabled; } ;
struct hda_codec {struct via_spec* spec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,int,unsigned int*) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int) ;
 unsigned int FUNC_3 (struct hda_codec*,int) ;
 int FUNC_4 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_3)
{
 struct via_spec *VAR_4 = VAR_3->spec;
 int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_5 =
 (FUNC_2(VAR_3, 0x17, 0,
       VAR_2, 0x00) == 5);


 VAR_6 = VAR_1;
 FUNC_0(VAR_3, 0x1a, &VAR_6);
 FUNC_0(VAR_3, 0x1b, &VAR_6);
 FUNC_0(VAR_3, 0x1e, &VAR_6);
 if (VAR_5)
  VAR_6 = VAR_0;

 FUNC_4(VAR_3, 0x17, VAR_6);
 FUNC_4(VAR_3, 0x13, VAR_6);

 VAR_6 = VAR_1;
 FUNC_0(VAR_3, 0x1e, &VAR_6);

 if (VAR_4->dmic_enabled)
  FUNC_0(VAR_3, 0x22, &VAR_6);
 else
  FUNC_4(VAR_3, 0x22, VAR_1);


 FUNC_4(VAR_3, 0x26, VAR_6);
 FUNC_4(VAR_3, 0x14, VAR_6);



 VAR_6 = VAR_1;
 FUNC_0(VAR_3, 0x19, &VAR_6);

 if (FUNC_1(VAR_3))
  FUNC_0(VAR_3, 0x1b, &VAR_6);
 FUNC_4(VAR_3, 0x18, VAR_6);
 FUNC_4(VAR_3, 0x11, VAR_6);


 VAR_6 = VAR_1;
 FUNC_0(VAR_3, 0x23, &VAR_6);

 if (FUNC_1(VAR_3))
  FUNC_0(VAR_3, 0x1a, &VAR_6);
 FUNC_4(VAR_3, 0x27, VAR_6);


 if (FUNC_1(VAR_3))
  FUNC_0(VAR_3, 0x1e, &VAR_6);
 FUNC_4(VAR_3, 0x25, VAR_6);



 VAR_8 = FUNC_3(VAR_3, 0x1c);

 if (VAR_8)
  VAR_7 = 0;
 else {
  VAR_8 = FUNC_3(VAR_3, 0x1d);
  if (!VAR_4->gen.indep_hp_enabled && VAR_8)
   VAR_7 = 0;
  else
   VAR_7 = 1;
 }
 VAR_6 = VAR_7 ? VAR_0 : VAR_1;
 FUNC_4(VAR_3, 0x28, VAR_6);
 FUNC_4(VAR_3, 0x29, VAR_6);
 FUNC_4(VAR_3, 0x2a, VAR_6);


 VAR_6 = VAR_1;
 FUNC_0(VAR_3, 0x1c, &VAR_6);
 FUNC_0(VAR_3, 0x1d, &VAR_6);

 if (VAR_4->gen.indep_hp_enabled)
  FUNC_4(VAR_3, 0x25, VAR_6);



 FUNC_4(VAR_3, 0x16, VAR_5 ? VAR_0 : VAR_6);
 FUNC_4(VAR_3, 0x10, VAR_7 ? VAR_0 : VAR_6);
}
