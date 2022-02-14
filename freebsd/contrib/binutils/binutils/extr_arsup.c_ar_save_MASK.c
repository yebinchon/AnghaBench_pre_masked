
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_3 ;
 char* FUNC_7 (int ) ;

void
FUNC_8 (void)
{
  if (!VAR_0)
    {
      FUNC_3 (VAR_3, FUNC_0("%s: no open output archive\n"), VAR_1);
      FUNC_5 ();
    }
  else
    {
      char *VAR_4 = FUNC_7 (FUNC_2 (VAR_0));

      FUNC_1 (VAR_0);

      FUNC_6 (VAR_4, VAR_2, 0);
      VAR_0 = 0;
      FUNC_4 (VAR_4);
    }
}
