
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0 (unsigned VAR_1)
{
  if (VAR_0)
    {

      if (VAR_1 & (1 << 24))
        VAR_1 |= 1 << 28;

      VAR_1 &= ~(1 << 24);

      VAR_1 |= 0xef000000;
    }
  else
    VAR_1 |= 0xf2000000;

  return VAR_1;
}
