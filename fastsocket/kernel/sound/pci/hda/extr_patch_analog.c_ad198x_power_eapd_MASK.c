
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; } ;


 int FUNC_0 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_0)
{

 switch (VAR_0->vendor_id) {
 case 0x11d41882:
 case 0x11d4882a:
 case 0x11d41884:
 case 0x11d41984:
 case 0x11d41883:
 case 0x11d4184a:
 case 0x11d4194a:
 case 0x11d4194b:
 case 0x11d41988:
 case 0x11d4198b:
 case 0x11d4989a:
 case 0x11d4989b:
  FUNC_0(VAR_0, 0x12, 0x11);
  break;
 case 0x11d41981:
 case 0x11d41983:
  FUNC_0(VAR_0, 0x05, 0x06);
  break;
 case 0x11d41986:
  FUNC_0(VAR_0, 0x1b, 0x1a);
  break;
 }
}
