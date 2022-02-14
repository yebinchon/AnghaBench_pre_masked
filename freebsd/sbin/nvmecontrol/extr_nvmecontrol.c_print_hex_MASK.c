
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;

void
FUNC_2(void *VAR_0, uint32_t VAR_1)
{
 if (VAR_1 >= sizeof(uint32_t) || VAR_1 % sizeof(uint32_t) == 0)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
