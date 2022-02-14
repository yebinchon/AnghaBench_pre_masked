
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1)
{
  CORE_ADDR VAR_2 = (VAR_1 & ~(VAR_0 - 1));

  if (FUNC_0 (VAR_1, ((void*)0)))
    return FUNC_1 (VAR_1);

  return VAR_2 + 0x22;
}
