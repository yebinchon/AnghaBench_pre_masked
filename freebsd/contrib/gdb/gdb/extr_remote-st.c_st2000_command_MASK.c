
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2)
{
  if (!VAR_0)
    FUNC_0 ("st2000 target not open.");

  if (!VAR_1)
    FUNC_0 ("Missing command.");

  FUNC_2 ("%s\r", VAR_1);
  FUNC_1 (0);
}
