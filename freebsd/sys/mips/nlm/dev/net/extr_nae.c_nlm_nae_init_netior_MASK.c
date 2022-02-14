
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(uint64_t VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 if (VAR_5 == 5)
  VAR_8 = 0x07 << 18;
 else
  VAR_8 = 0;

 switch (VAR_5) {
 case 2:
  VAR_6 = 0xff;
  VAR_7 = 0x0707;
  break;
 case 4:
 case 5:
  VAR_6 = 0xfffff;
  VAR_7 = 0x07070707;
  break;
 default:
  FUNC_1("WARNING: unsupported blocks %d\n", VAR_5);
  return (-1);
 }

 FUNC_0(VAR_4, VAR_0, 0);
 FUNC_0(VAR_4, VAR_3, VAR_8);
 FUNC_0(VAR_4, VAR_2, VAR_7);
 FUNC_0(VAR_4, VAR_1, VAR_6);
 FUNC_0(VAR_4, VAR_1, 0x0);
 return (0);
}
