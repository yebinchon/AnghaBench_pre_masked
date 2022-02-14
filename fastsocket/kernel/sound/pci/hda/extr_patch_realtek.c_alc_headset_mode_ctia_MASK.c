
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
  FUNC_0(VAR_0, 0x45, 0xd429);
  FUNC_0(VAR_0, 0x1b, 0x0c2b);
  FUNC_0(VAR_0, 0x32, 0x4ea3);
  break;
 case 0x10ec0292:
  FUNC_0(VAR_0, 0x6b, 0xd429);
  FUNC_0(VAR_0, 0x76, 0x0008);
  FUNC_0(VAR_0, 0x18, 0x7388);
  break;
 case 0x10ec0668:
  FUNC_0(VAR_0, 0x15, 0x0d60);
  FUNC_0(VAR_0, 0xc3, 0x0000);
  break;
 }
 FUNC_1("Headset jack set to iPhone-style headset mode.\n");
}
