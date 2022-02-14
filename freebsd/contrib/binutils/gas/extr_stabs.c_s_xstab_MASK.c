
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 char* VAR_0 ;
 int FUNC_6 (int,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

void
FUNC_12 (int VAR_1)
{
  int VAR_2;
  char *VAR_3, *VAR_4;
  static char *VAR_5, *VAR_6;




  VAR_3 = FUNC_3 (&VAR_2);
  FUNC_0 ();
  if (*VAR_0 == ',')
    VAR_0++;
  else
    {
      FUNC_2 (FUNC_1("comma missing in .xstabs"));
      FUNC_5 ();
      return;
    }



  if (VAR_5 == 0 || FUNC_8 (VAR_5, VAR_3))
    {
      VAR_4 = (char *) FUNC_11 (FUNC_10 (VAR_3) + 4);
      FUNC_9 (VAR_4, VAR_3);
      FUNC_7 (VAR_4, "str");
      if (VAR_5)
 {
   FUNC_4 (VAR_5);
   FUNC_4 (VAR_6);
 }
      VAR_5 = VAR_3;
      VAR_6 = VAR_4;
    }
  FUNC_6 (VAR_1, VAR_5, VAR_6);
}
