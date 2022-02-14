
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 uintptr_t VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t FUNC_0 (int ,int ,int,uintptr_t*) ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,char*,int,int,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
     char VAR_5[64];
 uintptr_t VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_8 = FUNC_0(FUNC_1(VAR_4), VAR_4, 0, &VAR_6);
 if (VAR_6 != VAR_3)
  return (VAR_2);

 VAR_8 = FUNC_0(FUNC_1(VAR_4), VAR_4, 1, &VAR_7);
 VAR_9 = (VAR_7 & 0xffff0000) >> 16;
 VAR_7 &= 0x0000ffff;
 if (VAR_9 & VAR_0) {
  FUNC_3(VAR_5, sizeof VAR_5, "SB16 DSP %d.%02d%s", (int) VAR_7 >> 8, (int) VAR_7 & 0xff,
    (VAR_9 & VAR_1)? " (ViBRA16X)" : "");
      FUNC_2(VAR_4, VAR_5);
  return 0;
 } else
  return (VAR_2);
}
