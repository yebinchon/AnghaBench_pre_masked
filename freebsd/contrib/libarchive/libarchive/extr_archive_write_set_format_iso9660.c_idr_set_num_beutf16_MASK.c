
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int const) ;

__attribute__((used)) static void
FUNC_1(unsigned char *VAR_1, int VAR_2)
{
 static const uint16_t VAR_3[] = {
  0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035,
  0x0036, 0x0037, 0x0038, 0x0039,
  0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046,
  0x0047, 0x0048, 0x0049, 0x004A, 0x004B, 0x004C,
  0x004D, 0x004E, 0x004F, 0x0050, 0x0051, 0x0052,
  0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 0x0058,
  0x0059, 0x005A
 };


 VAR_2 %= (sizeof(VAR_3)/sizeof(VAR_3[0])) * (sizeof(VAR_3)/sizeof(VAR_3[0])) * (sizeof(VAR_3)/sizeof(VAR_3[0]));
 FUNC_0(VAR_1, VAR_3[(VAR_2 / ((sizeof(VAR_3)/sizeof(VAR_3[0])) * (sizeof(VAR_3)/sizeof(VAR_3[0]))))]);
 VAR_2 %= (sizeof(VAR_3)/sizeof(VAR_3[0])) * (sizeof(VAR_3)/sizeof(VAR_3[0]));
 FUNC_0(VAR_1+2, VAR_3[ (VAR_2 / (sizeof(VAR_3)/sizeof(VAR_3[0])))]);
 VAR_2 %= (sizeof(VAR_3)/sizeof(VAR_3[0]));
 FUNC_0(VAR_1+4, VAR_3[VAR_2]);
}
