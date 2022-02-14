
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, uint32_t VAR_1, uint8_t VAR_2, bool VAR_3)
{
 device_t VAR_4;
 int VAR_5;
 uint8_t VAR_6;
 bool VAR_7;

 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = FUNC_0(VAR_4, 0, VAR_1, &VAR_6);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_7 = (VAR_6 & (1 << VAR_2)) ? 1 : 0;
 if (VAR_7 == VAR_3)
  return (0);

 if (VAR_3)
  VAR_6 |= (1 << VAR_2);
 else
  VAR_6 &= ~(1 << VAR_2);
 VAR_5 = FUNC_1(VAR_4, 0, VAR_1, VAR_6);
 return (VAR_5);
}
