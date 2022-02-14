
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;

int32_t
FUNC_0(const uuid_t *VAR_1, uint32_t *VAR_2)
{
 const uint32_t *VAR_3;

 if (VAR_2)
  *VAR_2 = VAR_0;

 if (!VAR_1)
  return (1);





 VAR_3 = (const uint32_t*)VAR_1;
 return ((VAR_3[0] == 0 && VAR_3[1] == 0 && VAR_3[2] == 0 && VAR_3[3] == 0) ? 1 : 0);
}
