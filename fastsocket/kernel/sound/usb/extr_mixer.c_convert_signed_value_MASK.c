
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_info {int val_type; } ;
__attribute__((used)) static int FUNC_0(struct usb_mixer_elem_info *VAR_0, int VAR_1)
{
 switch (VAR_0->val_type) {
 case 133:
  return !!VAR_1;
 case 132:
  return !VAR_1;
 case 128:
  VAR_1 &= 0xff;
  break;
 case 130:
  VAR_1 &= 0xff;
  if (VAR_1 >= 0x80)
   VAR_1 -= 0x100;
  break;
 case 129:
  VAR_1 &= 0xffff;
  break;
 case 131:
  VAR_1 &= 0xffff;
  if (VAR_1 >= 0x8000)
   VAR_1 -= 0x10000;
  break;
 }
 return VAR_1;
}
