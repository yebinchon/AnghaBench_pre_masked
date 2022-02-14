
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long CORE_ADDR ;


 long FUNC_0 (unsigned long) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (unsigned long VAR_0)
{
  long VAR_1;
  VAR_1 = FUNC_0 (VAR_0);
  if (VAR_1 & 0x8000)
    {
      VAR_1 |= 0xffff0000;
    }
  VAR_1 = VAR_1 << 2;
  return VAR_1;
}
