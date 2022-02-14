
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; } ;


 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 switch (VAR_0->vendor_id) {
 case 0x10ec0283:
  FUNC_0(VAR_0, 0x06, 0x2100);
  FUNC_0(VAR_0, 0x32, 0x4ea3);
  break;
 case 0x10ec0292:
  FUNC_0(VAR_0, 0x76, 0x000e);
  FUNC_0(VAR_0, 0x6c, 0x2400);
  FUNC_0(VAR_0, 0x6b, 0xc429);
  FUNC_0(VAR_0, 0x18, 0x7308);
  break;
 case 0x10ec0668:
  FUNC_0(VAR_0, 0x11, 0x0041);
  FUNC_0(VAR_0, 0x15, 0x0d40);
  FUNC_0(VAR_0, 0xb7, 0x802b);
  break;
 }
 FUNC_1("Headset jack set to headphone (default) mode.\n");
}
