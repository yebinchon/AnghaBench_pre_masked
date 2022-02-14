
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static CORE_ADDR
FUNC_1(CORE_ADDR VAR_0, int VAR_1)
{
  CORE_ADDR VAR_2;
  int VAR_3 = VAR_1 / 63;
  int VAR_4 = VAR_1 < 0 ? -1 : 1;

  VAR_2 = VAR_0 + 8 * (VAR_1 + VAR_3);

  if ((VAR_2 >> 9) != ((VAR_0 + 8 * 64 * VAR_3) >> 9))
    VAR_2 += 8 * VAR_4;

  if (FUNC_0(VAR_2))
    VAR_2 += 8 * VAR_4;

  return VAR_2;
}
