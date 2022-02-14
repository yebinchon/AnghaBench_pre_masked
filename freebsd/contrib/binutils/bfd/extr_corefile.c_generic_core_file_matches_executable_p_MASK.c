
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;

bfd_boolean
FUNC_4 (bfd *VAR_1, bfd *VAR_2)
{
  char *VAR_3;
  char *VAR_4;
  char *VAR_5;

  if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
    return VAR_0;






  VAR_4 = (char *) FUNC_0 (VAR_1);
  if (VAR_4 == ((void*)0))
    return VAR_0;

  VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 == ((void*)0))
    return VAR_0;

  VAR_5 = FUNC_3 (VAR_4, '/');
  if (VAR_5 != ((void*)0))
    VAR_4 = VAR_5 + 1;

  VAR_5 = FUNC_3 (VAR_3, '/');
  if (VAR_5 != ((void*)0))
    VAR_3 = VAR_5 + 1;

  return FUNC_2 (VAR_3, VAR_4) == 0;
}
