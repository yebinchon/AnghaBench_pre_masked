
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char**,int *,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_3)
{
  CORE_ADDR VAR_4;
  int VAR_5, VAR_6, VAR_7;
  char *VAR_8;




  if (!VAR_2)
    {
      FUNC_4 (-1, VAR_0);
      return;
    }


  if (FUNC_2 (&VAR_3, &VAR_4, &VAR_6))
    {
      FUNC_3 ();
      return;
    }

  VAR_8 = FUNC_1 (VAR_6);
  VAR_7 = FUNC_7 (VAR_4, VAR_8, VAR_6);
  if (VAR_7 != VAR_6)
    {
      FUNC_3 ();
      return;
    }

  VAR_1 = 1;
  VAR_5 = FUNC_8 (VAR_8);

  if (VAR_5 == -1)
    FUNC_5 (-1);
  else
    FUNC_6 (FUNC_0 (VAR_5));
}
