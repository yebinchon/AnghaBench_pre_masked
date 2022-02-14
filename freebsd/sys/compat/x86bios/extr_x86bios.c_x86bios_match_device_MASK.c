
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__*,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__* FUNC_7 (int ) ;

int
FUNC_8(uint32_t VAR_0, device_t VAR_1)
{
 uint8_t *VAR_2;
 uint16_t VAR_3, VAR_4;
 uint8_t VAR_5, VAR_6, VAR_7;


 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2 == ((void*)0))
  return (0);


 VAR_2 += FUNC_1(*(uint16_t *)(VAR_2 + 0x18));
 if (FUNC_0(VAR_2, "PCIR", 4) != 0 ||
     FUNC_1(*(uint16_t *)(VAR_2 + 0x0a)) < 0x18 || *(VAR_2 + 0x14) != 0)
  return (0);


 VAR_4 = FUNC_1(*(uint16_t *)(VAR_2 + 0x04));
 VAR_3 = FUNC_1(*(uint16_t *)(VAR_2 + 0x06));
 VAR_6 = *(VAR_2 + 0x0d);
 VAR_7 = *(VAR_2 + 0x0e);
 VAR_5 = *(VAR_2 + 0x0f);
 if (VAR_4 != FUNC_6(VAR_1) || VAR_3 != FUNC_3(VAR_1) ||
     VAR_5 != FUNC_2(VAR_1) || VAR_7 != FUNC_5(VAR_1) ||
     VAR_6 != FUNC_4(VAR_1))
  return (0);

 return (1);
}
