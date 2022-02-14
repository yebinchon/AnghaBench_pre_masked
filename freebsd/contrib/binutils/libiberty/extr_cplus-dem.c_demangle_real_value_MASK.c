
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_stuff {int dummy; } ;
typedef int string ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (struct work_stuff*,char const**,int *,int ) ;
 int FUNC_2 (int *,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3 (struct work_stuff *VAR_1,
                     const char **VAR_2, string *VAR_3)
{
  if (**VAR_2 == 'E')
    return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_0);

  if (**VAR_2 == 'm')
    {
      FUNC_2 (VAR_3, "-", 1);
      (*VAR_2)++;
    }
  while (FUNC_0 ((unsigned char)**VAR_2))
    {
      FUNC_2 (VAR_3, *VAR_2, 1);
      (*VAR_2)++;
    }
  if (**VAR_2 == '.')
    {
      FUNC_2 (VAR_3, ".", 1);
      (*VAR_2)++;
      while (FUNC_0 ((unsigned char)**VAR_2))
 {
   FUNC_2 (VAR_3, *VAR_2, 1);
   (*VAR_2)++;
 }
    }
  if (**VAR_2 == 'e')
    {
      FUNC_2 (VAR_3, "e", 1);
      (*VAR_2)++;
      while (FUNC_0 ((unsigned char)**VAR_2))
 {
   FUNC_2 (VAR_3, *VAR_2, 1);
   (*VAR_2)++;
 }
    }

  return 1;
}
