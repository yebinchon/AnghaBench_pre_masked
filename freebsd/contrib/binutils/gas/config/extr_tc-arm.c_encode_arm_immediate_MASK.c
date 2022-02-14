
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_1 (unsigned int VAR_1)
{
  unsigned int VAR_2, VAR_3;

  for (VAR_3 = 0; VAR_3 < 32; VAR_3 += 2)
    if ((VAR_2 = FUNC_0 (VAR_1, VAR_3)) <= 0xff)
      return VAR_2 | (VAR_3 << 7);

  return VAR_0;
}
