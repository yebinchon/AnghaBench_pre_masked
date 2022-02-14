
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(uint8_t *VAR_4, int VAR_5)
{
 uint32_t *VAR_6;
 int VAR_7, VAR_8, VAR_9;


 if (VAR_5) {
  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = VAR_0;
 }


 VAR_6 = (uint32_t *)(VAR_4 + 12);
 if (*VAR_6 != 0)
  return (VAR_7);

 if (VAR_4[16] != 0)
  return (VAR_8);

 for (VAR_9 = 100; VAR_9 < 120; VAR_9++)
  if (VAR_4[VAR_9] != 0)
   return (VAR_7);

 VAR_6 = (uint32_t *)(VAR_4 + 84);

 if (*VAR_6 == 0)
  return (VAR_8);
 return (VAR_7);
}
