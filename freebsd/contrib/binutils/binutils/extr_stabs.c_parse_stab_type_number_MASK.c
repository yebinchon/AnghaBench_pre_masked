
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const**,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (const char **VAR_2, int *VAR_3)
{
  const char *VAR_4;

  VAR_4 = *VAR_2;

  if (**VAR_2 != '(')
    {
      VAR_3[0] = 0;
      VAR_3[1] = (int) FUNC_1 (VAR_2, (bfd_boolean *) ((void*)0));
    }
  else
    {
      ++*VAR_2;
      VAR_3[0] = (int) FUNC_1 (VAR_2, (bfd_boolean *) ((void*)0));
      if (**VAR_2 != ',')
 {
   FUNC_0 (VAR_4);
   return VAR_0;
 }
      ++*VAR_2;
      VAR_3[1] = (int) FUNC_1 (VAR_2, (bfd_boolean *) ((void*)0));
      if (**VAR_2 != ')')
 {
   FUNC_0 (VAR_4);
   return VAR_0;
 }
      ++*VAR_2;
    }

  return VAR_1;
}
