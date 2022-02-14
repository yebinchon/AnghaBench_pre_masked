
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_1)
{
  if (VAR_0)
    return (VAR_1 & (FUNC_0 (VAR_1) ? 0xfffffffe : 0xfffffffc));
  else
    return (VAR_1 & 0x03fffffc);
}
