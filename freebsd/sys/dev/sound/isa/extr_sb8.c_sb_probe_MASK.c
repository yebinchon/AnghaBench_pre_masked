
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 uintptr_t VAR_0 ;
 uintptr_t FUNC_0 (int ,int ,int,uintptr_t*) ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
     char VAR_4[64];
 uintptr_t VAR_5, VAR_6, VAR_7, VAR_8;


 VAR_7 = FUNC_0(FUNC_1(VAR_3), VAR_3, 0, &VAR_5);
 if (VAR_5 != VAR_2)
  return (VAR_1);

 VAR_7 = FUNC_0(FUNC_1(VAR_3), VAR_3, 1, &VAR_6);
 VAR_8 = (VAR_6 & 0xffff0000) >> 16;
 VAR_6 &= 0x0000ffff;
 if ((VAR_8 & VAR_0) || (VAR_6 >= 0x400))
  return (VAR_1);

 FUNC_3(VAR_4, sizeof VAR_4, "SB DSP %d.%02d", (int) VAR_6 >> 8, (int) VAR_6 & 0xff);

     FUNC_2(VAR_3, VAR_4);

 return 0;
}
