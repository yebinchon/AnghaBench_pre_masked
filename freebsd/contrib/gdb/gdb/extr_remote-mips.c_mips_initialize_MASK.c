
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct cleanup*) ;
 struct cleanup* FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,char,int ,int *,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (char,int ,int ,int*,int ,int *) ;
 int FUNC_8 (char*,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16 (void)
{
  int VAR_11;
  struct cleanup *VAR_12 = FUNC_2 (VAR_4, ((void*)0));
  int VAR_13;





  if (VAR_5)
    {
      FUNC_15 ("internal error: mips_initialize called twice");
      return;
    }

  VAR_9 = 0;
  VAR_5 = 1;






  if (VAR_6 != VAR_1)
    VAR_13 = 0;
  else
    VAR_13 = 1;
  for (; VAR_13 <= 4; VAR_13++)
    {
      switch (VAR_13)
 {
 case 0:
   FUNC_9 (VAR_3);
   FUNC_13 (VAR_3, "\r", 1);
   break;
 case 1:
   FUNC_12 (VAR_3);
   break;
 case 2:
   FUNC_13 (VAR_3, "\003", 1);
   break;
 case 3:
   {
     if (VAR_6 != VAR_1)
       {
  char VAR_14[7];







  FUNC_10 (VAR_3);
  FUNC_14 (VAR_14, "\r/E/E\r");
  FUNC_13 (VAR_3, VAR_14, 6);
       }
     else
       {
  char VAR_15[10];
  int VAR_16;
  FUNC_6 (VAR_15, '7', 0, ((void*)0), 0);

  for (VAR_16 = 1; VAR_16 <= 33; VAR_16++)
    {
      FUNC_13 (VAR_3, VAR_15, 8);

      if (FUNC_11 (VAR_3, 0) >= 0)
        break;

    }
       }
   }
   break;
 case 4:
   FUNC_4 ("Failed to initialize.");
 }

      if (FUNC_5 (VAR_7))
 break;
    }

  if (VAR_6 != VAR_1)
    {



      FUNC_8 ("\r", -1);


      if (VAR_6 != VAR_2)
 FUNC_8 ("set regsize 64\r", -1);
      FUNC_8 ("set hostport tty0\r", -1);
      FUNC_8 ("set brkcmd \"\"\r", -1);

      FUNC_8 ("db *\r", -1);


    }

  FUNC_3 ();


  if ((VAR_6 == VAR_1
       && FUNC_0 (-1, 0, VAR_0) == 0)
      || VAR_6 == VAR_2)
    VAR_10 = 1;
  else
    VAR_10 = 0;

  FUNC_1 (VAR_12);




  FUNC_7 ('r', 0, 0, &VAR_11, VAR_8, ((void*)0));
}
