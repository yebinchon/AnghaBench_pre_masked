
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_byte ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int*,int) ;

__attribute__((used)) static int
FUNC_1 (bfd_byte VAR_0[], CORE_ADDR VAR_1)
{
  static int VAR_2[] = { 2, 4, 4, 6 };
  int VAR_3;

  if (FUNC_0 (VAR_1, &VAR_0[0], 2))
    return -1;
  VAR_3 = VAR_2[VAR_0[0] >> 6];
  if (VAR_3 > 2)
    {
      if (FUNC_0 (VAR_1 + 2, &VAR_0[2], VAR_3 - 2))
        return -1;
    }
  return VAR_3;
}
