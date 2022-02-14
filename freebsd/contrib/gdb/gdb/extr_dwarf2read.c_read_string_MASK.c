
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (bfd *VAR_1, char *VAR_2, unsigned int *VAR_3)
{



  FUNC_0 (VAR_0 == 8);
  if (*VAR_2 == '\0')
    {
      *VAR_3 = 1;
      return ((void*)0);
    }
  *VAR_3 = FUNC_1 (VAR_2) + 1;
  return VAR_2;
}
