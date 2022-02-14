
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (char const) ;
 char FUNC_3 (unsigned int) ;
 int FUNC_4 (char const*,char**,int) ;
 int FUNC_5 (char const*,char**,int) ;

bfd_vma
FUNC_6 (const char *VAR_0, const char **VAR_1, int VAR_2)
{
  bfd_vma VAR_3;
  bfd_vma VAR_4;
  unsigned int VAR_5;
  int VAR_6;


  if (sizeof (bfd_vma) <= sizeof (unsigned long))
    return FUNC_4 (VAR_0, (char **) VAR_1, VAR_2);






  if (VAR_2 == 0)
    {
      if (VAR_0[0] == '0')
 {
   if ((VAR_0[1] == 'x') || (VAR_0[1] == 'X'))
     VAR_2 = 16;
   else
     VAR_2 = 8;
 }
    }

  if ((VAR_2 < 2) || (VAR_2 > 36))
    VAR_2 = 10;

  if (VAR_2 == 16
      && VAR_0[0] == '0'
      && (VAR_0[1] == 'x' || VAR_0[1] == 'X')
      && FUNC_2 (VAR_0[2]))
    {
      VAR_0 += 2;
    }

  VAR_4 = (~ (bfd_vma) 0) / (bfd_vma) VAR_2;
  VAR_5 = (~ (bfd_vma) 0) % (bfd_vma) VAR_2;
  VAR_3 = 0;
  VAR_6 = 0;
  while (1)
    {
      unsigned int VAR_7;

      VAR_7 = *VAR_0;
      if (FUNC_1 (VAR_7))
 VAR_7 = VAR_7 - '0';
      else if (FUNC_0 (VAR_7))
 VAR_7 = FUNC_3 (VAR_7) - 'A' + 10;
      else
 break;
      if (VAR_7 >= (unsigned int) VAR_2)
 break;
      if (VAR_3 > VAR_4 || (VAR_3 == VAR_4 && VAR_7 > VAR_5))
 VAR_6 = 1;
      VAR_3 = VAR_3 * VAR_2 + VAR_7;
      ++VAR_0;
    }

  if (VAR_6)
    VAR_3 = ~ (bfd_vma) 0;

  if (VAR_1 != ((void*)0))
    *VAR_1 = VAR_0;

  return VAR_3;
}
