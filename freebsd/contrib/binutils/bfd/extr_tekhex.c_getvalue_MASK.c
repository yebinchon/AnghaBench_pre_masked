
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (char **VAR_2, bfd_vma *VAR_3)
{
  char *VAR_4 = *VAR_2;
  bfd_vma VAR_5 = 0;
  unsigned int VAR_6;

  if (!FUNC_0 (*VAR_4))
    return VAR_0;

  VAR_6 = FUNC_1 (*VAR_4++);
  if (VAR_6 == 0)
    VAR_6 = 16;
  while (VAR_6--)
    {
      if (!FUNC_0 (*VAR_4))
 return VAR_0;
      VAR_5 = VAR_5 << 4 | FUNC_1 (*VAR_4++);
    }

  *VAR_2 = VAR_4;
  *VAR_3 = VAR_5;
  return VAR_1;
}
