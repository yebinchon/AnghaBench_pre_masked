
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,char*,int ,int,int,int,int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,int,char*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void
FUNC_12 (int VAR_4)
{
  if (VAR_4 == -1)
    {
      for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 FUNC_12 (VAR_4);
      return;
    }

  switch (FUNC_2 (VAR_4))
    {
    case 129:
      break;
    case 128:
      {


 char VAR_5[VAR_0];
 int VAR_6;
 FUNC_6 (VAR_5, 0, VAR_0);
 FUNC_11 (VAR_4, VAR_5);
 FUNC_8 (VAR_4, -1);
 break;
      }
    default:
      {
 static int VAR_7 = 1;
 char VAR_8[VAR_0];
 int VAR_9;
 FUNC_5 (VAR_4 >= 0 && VAR_4 < VAR_1);
 FUNC_6 (VAR_8, 0, VAR_0);
 VAR_9 = FUNC_9 (VAR_3,
           FUNC_2 (VAR_4),
           VAR_8, FUNC_0 (VAR_4));
 if (VAR_9 > 0 && VAR_9 != FUNC_0 (VAR_4) && VAR_7)
   {
     FUNC_4 (VAR_2,
    "Size of register %s (%d/%d) incorrect (%d instead of %d))",
    FUNC_1 (VAR_4),
    VAR_4, FUNC_2 (VAR_4),
    VAR_9, FUNC_0 (VAR_4));
     VAR_7 = 0;
   }





 FUNC_11 (VAR_4, VAR_8);
 if (FUNC_10 ())
   {
     FUNC_7 ("gdbsim_fetch_register: %d", VAR_4);

     FUNC_3 (VAR_8, FUNC_0 (VAR_4));
   }
 break;
      }
    }
}
