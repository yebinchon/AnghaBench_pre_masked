
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int,char**) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 char* VAR_5 ;
 int * FUNC_14 (int*,scalar_t__*) ;
 int VAR_6 ;

int
FUNC_15 (int VAR_7, char **VAR_8)
{
  rtx VAR_9;

  VAR_5 = "genoutput";

  if (FUNC_7 (VAR_7, VAR_8) != VAR_1)
    return (VAR_0);

  FUNC_12 ();
  VAR_3 = 0;
  VAR_4 = 0;



  while (1)
    {
      int VAR_10;

      VAR_9 = FUNC_14 (&VAR_10, &VAR_3);
      if (VAR_9 == ((void*)0))
 break;

      switch (FUNC_0 (VAR_9))
 {
 case 133:
   FUNC_4 (VAR_9, VAR_10);
   break;

 case 131:
   FUNC_5 (VAR_9, VAR_10);
   break;

 case 134:
   FUNC_3 (VAR_9, VAR_10);
   break;

 case 128:
 case 130:
   FUNC_6 (VAR_9, VAR_10);
   break;
 default:
   break;
 }
      VAR_4++;
    }

  FUNC_13("\n\n");
  FUNC_11 ();
  FUNC_10 ();
  FUNC_9 ();

  FUNC_2 (VAR_6);
  return (FUNC_1 (VAR_6) != 0 || VAR_2
 ? VAR_0 : VAR_1);
}
