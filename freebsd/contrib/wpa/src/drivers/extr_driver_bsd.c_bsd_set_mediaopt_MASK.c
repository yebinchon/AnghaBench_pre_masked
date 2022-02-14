
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0);

 if (VAR_3 < 0)
  return -1;
 VAR_3 &= ~VAR_1;
 VAR_3 |= VAR_2;
 if (FUNC_1(VAR_0, VAR_3) < 0)
  return -1;
 return 0;
}
