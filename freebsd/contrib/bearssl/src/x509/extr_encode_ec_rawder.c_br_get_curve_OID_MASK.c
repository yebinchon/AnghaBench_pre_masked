
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const unsigned char *
FUNC_0(int VAR_0)
{
 static const unsigned char VAR_1[] = {
  0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07
 };
 static const unsigned char VAR_2[] = {
  0x05, 0x2b, 0x81, 0x04, 0x00, 0x22
 };
 static const unsigned char VAR_3[] = {
  0x05, 0x2b, 0x81, 0x04, 0x00, 0x23
 };

 switch (VAR_0) {
 case 130: return VAR_1;
 case 129: return VAR_2;
 case 128: return VAR_3;
 default:
  return ((void*)0);
 }
}
