
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_4, char *VAR_5)
{
  bfd *VAR_6;
  bfd *VAR_7 = ((void*)0);

  if (FUNC_9 (VAR_4) < 1)
    {
      VAR_3 = 1;
      return;
    }

  VAR_6 = FUNC_5 (VAR_4, VAR_5);
  if (VAR_6 == ((void*)0))
    {
      FUNC_10 (VAR_4);
      return;
    }


  if (FUNC_1 (VAR_6, VAR_0))
    {
      bfd *VAR_8 = ((void*)0);

      FUNC_11 (FUNC_0("In archive %s:\n"), FUNC_4 (VAR_6));
      for (;;)
 {
   FUNC_7 (VAR_1);

   VAR_7 = FUNC_6 (VAR_6, VAR_7);
   if (VAR_7 == ((void*)0))
     {
       if (FUNC_3 () != VAR_2)
  FUNC_10 (FUNC_4 (VAR_6));
       break;
     }

   FUNC_8 (VAR_7);

   if (VAR_8 != ((void*)0))
     FUNC_2 (VAR_8);
   VAR_8 = VAR_7;
 }

      if (VAR_8 != ((void*)0))
 FUNC_2 (VAR_8);
    }
  else
    FUNC_8 (VAR_6);

  FUNC_2 (VAR_6);
}
