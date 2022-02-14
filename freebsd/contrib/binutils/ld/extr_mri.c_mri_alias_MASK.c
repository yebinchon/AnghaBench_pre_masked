
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,char const*,int ,char const*,int ,int ) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*) ;

void
FUNC_4 (const char *VAR_1, const char *VAR_2, int VAR_3)
{
  if (!VAR_2)
    {
      char VAR_4[20];


      FUNC_2 (VAR_4, "%d", VAR_3);

      VAR_2 = FUNC_3 (VAR_4);

      if (VAR_2 == ((void*)0))
 FUNC_0 ();
    }

  FUNC_1 (&VAR_0, VAR_2, 0, VAR_1, 0, 0);
}
