
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_7 (CORE_ADDR VAR_2, unsigned char *VAR_3, int VAR_4)
{
  int VAR_5;
  int VAR_6;
  int VAR_7;
  char VAR_8[200];



  if (((VAR_2 - 1) + VAR_4) < VAR_2)
    {
      VAR_1 = VAR_0;
      return 0;
    }

  FUNC_6 (VAR_8, "m %s;l\r", FUNC_4 (VAR_2));
  FUNC_5 (VAR_8);

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 4)
    {

      VAR_6 = FUNC_3 ();
      while (VAR_6 != ' ')
 VAR_6 = FUNC_3 ();
      VAR_6 = FUNC_3 ();
      if (VAR_6 == '*')
 {
   FUNC_5 (".\r");
   FUNC_0 ();
   return -1;
 }
      while (VAR_6 != ' ')
 VAR_6 = FUNC_3 ();


      for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
 {
   int VAR_9 = FUNC_2 ();
   if (VAR_5 + VAR_7 < VAR_4)
     {
       VAR_3[VAR_5 + VAR_7] = VAR_9;
     }
 }


      FUNC_3 ();
      FUNC_3 ();
      if (VAR_5 + 4 >= VAR_4)
 FUNC_5 (".\r");
      else
 FUNC_5 ("\r");

    }
  FUNC_1 ();
  return VAR_4;
}
