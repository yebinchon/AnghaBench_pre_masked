
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef scalar_t__ bfd_signed_vma ;


 int FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1 (bfd_vma VAR_0, int VAR_1)
{
  char VAR_2[40];
  char *VAR_3 = VAR_2;
  int VAR_4 = 0;

  if (VAR_1 && (bfd_signed_vma) VAR_0 < 0)
    {
      VAR_0 = -VAR_0;
      FUNC_0 ('-');
      VAR_4 = 1;
    }

  do
    {
      *VAR_3++ = '0' + VAR_0 % 10;
      VAR_0 /= 10;
    }
  while (VAR_0 != 0);
  VAR_4 += VAR_3 - VAR_2;

  while (VAR_3 > VAR_2)
    FUNC_0 (*--VAR_3);
  return VAR_4;
}
