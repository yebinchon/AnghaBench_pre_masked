
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int * FUNC_3 (char const*,char*) ;
 char const* VAR_1 ;
 int FUNC_4 (int *,char const*) ;
 int VAR_2 ;
 int * VAR_3 ;

void
FUNC_5 (const char *VAR_4)
{
  FILE *VAR_5;
  VAR_5 = FUNC_3 (VAR_4, "");

  if (VAR_5 == ((void*)0))
    {
      FUNC_1 (VAR_0);
      FUNC_2 (FUNC_0("%P%F: cannot open linker script file %s: %E\n"), VAR_4);
    }

  FUNC_4 (VAR_5, VAR_4);

  VAR_1 = VAR_4;
  VAR_2 = 1;

  VAR_3 = VAR_5;
}
