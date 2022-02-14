
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 char FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_1, const char *VAR_2)
{
  char VAR_3;

  VAR_3 = FUNC_0 (VAR_1);
  if (VAR_3)
    {
      if (*VAR_2 != VAR_3)
 return VAR_0;
      VAR_2++;
    }
  return (FUNC_1 (VAR_2, "__GOTT_BASE__") == 0
   || FUNC_1 (VAR_2, "__GOTT_INDEX__") == 0);
}
