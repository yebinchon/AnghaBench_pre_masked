
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 int FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1 (bfd_vma VAR_0)
{
  char VAR_1[32];
  char *VAR_2 = VAR_1;
  int VAR_3;

  do
    {
      char VAR_4 = '0' + (VAR_0 & 0x0f);
      if (VAR_4 > '9')
 VAR_4 += 'a' - '0' - 10;
      *VAR_2++ = VAR_4;
      VAR_0 >>= 4;
    }
  while (VAR_0 != 0);
  VAR_3 = VAR_2 - VAR_1;

  while (VAR_2 > VAR_1)
    FUNC_0 (*--VAR_2);
  return VAR_3;
}
