
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_size_type ;
typedef int bfd ;


 int FUNC_0 (char) ;
 char* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static char *
FUNC_5 (bfd *VAR_0, char *VAR_1)
{
  bfd_size_type VAR_2;
  char *VAR_3;
  char *VAR_4;

  VAR_2 = (FUNC_4 (FUNC_2 (VAR_0))
   + FUNC_4 (VAR_1)
   + sizeof "_binary__");

  VAR_3 = FUNC_1 (VAR_0, VAR_2);
  if (VAR_3 == ((void*)0))
    return "";

  FUNC_3 (VAR_3, "_binary_%s_%s", FUNC_2 (VAR_0), VAR_1);


  for (VAR_4 = VAR_3; *VAR_4; VAR_4++)
    if (! FUNC_0 (*VAR_4))
      *VAR_4 = '_';

  return VAR_3;
}
