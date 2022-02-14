
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(const uint8_t *VAR_0, uint32_t VAR_1)
{
 unsigned int VAR_2 = 5381;
 int VAR_3;


 if (VAR_1)
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   VAR_2 = ((VAR_2 << 5) + VAR_2) + (unsigned int)VAR_0[VAR_3];
 else
  for (VAR_3 = 0; VAR_0[VAR_3] != 0; VAR_3++)
   VAR_2 = ((VAR_2 << 5) + VAR_2) + (unsigned int)VAR_0[VAR_3];

 return (VAR_2);
}
