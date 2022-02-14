
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_3 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int,int ,int ,unsigned int) ;
 int FUNC_5 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_6(struct hda_codec *VAR_6, int VAR_7)
{
 unsigned int VAR_8;

 FUNC_2(VAR_6, 1);
 switch (VAR_7) {
 case 130:
  FUNC_5(VAR_6, VAR_3);
  break;
 case 129:
  FUNC_5(VAR_6, VAR_4);
  break;
 case 128:
  FUNC_5(VAR_6, VAR_5);
  break;
 case 131:
  switch (VAR_6->vendor_id) {
  case 0x10ec0260:
   FUNC_4(VAR_6, 0x1a, 0,
         VAR_1, 7);
   VAR_8 = FUNC_3(VAR_6, 0x1a, 0,
       VAR_0, 0);
   FUNC_4(VAR_6, 0x1a, 0,
         VAR_1, 7);
   FUNC_4(VAR_6, 0x1a, 0,
         VAR_2,
         VAR_8 | 0x2010);
   break;
  case 0x10ec0262:
  case 0x10ec0880:
  case 0x10ec0882:
  case 0x10ec0883:
  case 0x10ec0885:
  case 0x10ec0887:

   FUNC_1(VAR_6);
   break;
  case 0x10ec0888:
   FUNC_0(VAR_6);
   break;
  }
  break;
 }
}
