
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int FUNC_0 (char const*) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_1)
{
  bfd *VAR_2;

  if (FUNC_0 (VAR_1) < 1)
    return 1;
  VAR_0 = 1;
  VAR_2 = FUNC_1 (VAR_1, (char *) ((void*)0));
  if (VAR_2 == ((void*)0))
    FUNC_3 (1);
  FUNC_2 (VAR_2);
  return 0;
}
