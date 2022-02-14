
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_0 (CORE_ADDR VAR_1)
{
  if (VAR_0 == sizeof (CORE_ADDR) * 8)


    return VAR_1;
  else
    return VAR_1 & (((CORE_ADDR) 1 << VAR_0) - 1);
}
