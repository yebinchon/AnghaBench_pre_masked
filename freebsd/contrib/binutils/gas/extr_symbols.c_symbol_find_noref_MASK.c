
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;


 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (char const*,int) ;
 int VAR_0 ;
 char* FUNC_5 (char*) ;

symbolS *
FUNC_6 (const char *VAR_1, int VAR_2)
{
  if (! VAR_0)
    {
      char *VAR_3;
      const char *VAR_4;
      unsigned char VAR_5;

      VAR_4 = VAR_1;
      VAR_1 = VAR_3 = (char *) FUNC_1 (FUNC_3 (VAR_1) + 1);

      while ((VAR_5 = *VAR_4++) != '\0')
 {
   *VAR_3++ = FUNC_0 (VAR_5);
 }
      *VAR_3 = '\0';
    }

  return FUNC_4 (VAR_1, VAR_2);
}
