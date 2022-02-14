
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (CORE_ADDR VAR_0)
{
  unsigned long VAR_1;
  int VAR_2;
  CORE_ADDR VAR_3;
  char VAR_4[4];
  if (FUNC_3 (VAR_0, VAR_4, 4))
    return VAR_0;





  VAR_3 = FUNC_0 (VAR_0);
  if (VAR_3 != 0)
    return FUNC_2 (VAR_0, VAR_3);







  for (VAR_2 = 0; VAR_2 < 100; VAR_2 += 4)
    {
      VAR_1 = FUNC_1 (VAR_0 + VAR_2);

      if ((VAR_1 & 0xffff0000) == 0x27bb0000)
 continue;
      if ((VAR_1 & 0xffff0000) == 0x23bd0000)
 continue;
      if ((VAR_1 & 0xffff0000) == 0x23de0000)
 continue;
      if ((VAR_1 & 0xffe01fff) == 0x43c0153e)
 continue;

      if (((VAR_1 & 0xfc1f0000) == 0xb41e0000
    || (VAR_1 & 0xfc1f0000) == 0x9c1e0000)
   && (VAR_1 & 0x03e00000) != 0x03e00000)
 continue;

      if (VAR_1 == 0x47de040f)
 continue;
      if (VAR_1 == 0x47fe040f)
 continue;

      break;
    }
  return VAR_0 + VAR_2;
}
