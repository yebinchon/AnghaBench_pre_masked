
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned char FUNC_1 (int*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_5 (CORE_ADDR VAR_2, unsigned char *VAR_3,
      int VAR_4)
{
  int VAR_5;
  int VAR_6;
  char VAR_7[200];



  if (((VAR_2 - 1) + VAR_4) < VAR_2)
    {
      VAR_1 = VAR_0;
      return 0;
    }

  FUNC_4 (VAR_7, "d %s %s\r", FUNC_2 (VAR_2), FUNC_2 (VAR_2 + VAR_4 - 1));
  FUNC_3 (VAR_7);

  VAR_5 = 0;
  VAR_6 = FUNC_0 ();


  while (VAR_6 != '>')
    VAR_6 = FUNC_0 ();

  while (VAR_6 != '\r')
    VAR_6 = FUNC_0 ();
  VAR_6 = FUNC_0 ();

  while (VAR_5 < VAR_4)
    {

      while (VAR_6 <= ' ')
 VAR_6 = FUNC_0 ();


      FUNC_1 (&VAR_6);


      while (VAR_6 != '"' && VAR_5 < VAR_4)
 {
   if (VAR_6 == ' ')
     VAR_6 = FUNC_0 ();
   else
     {
       VAR_3[VAR_5++] = FUNC_1 (&VAR_6);
     }
 }

      while (VAR_6 != '\r')
 VAR_6 = FUNC_0 ();
    }


  while (VAR_6 != ':')
    VAR_6 = FUNC_0 ();

  return VAR_4;
}
