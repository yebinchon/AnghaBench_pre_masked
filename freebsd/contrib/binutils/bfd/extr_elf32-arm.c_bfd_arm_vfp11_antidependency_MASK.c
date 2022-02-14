
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfd_boolean
FUNC_0 (unsigned int VAR_2, int *VAR_3, int VAR_4)
{
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
      unsigned int VAR_6 = VAR_3[VAR_5];

      if (VAR_6 < 32 && (VAR_2 & (1 << VAR_6)) != 0)
        return VAR_1;

      VAR_6 -= 32;

      if (VAR_6 >= 16)
        continue;

      if ((VAR_2 & (3 << (VAR_6 * 2))) != 0)
        return VAR_1;
    }

  return VAR_0;
}
