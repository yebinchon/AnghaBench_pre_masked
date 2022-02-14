
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*,unsigned char) ;
 int FUNC_3 (char,int *) ;

void
FUNC_4 (FILE *VAR_0, const char *VAR_1)
{



  char VAR_2;

  FUNC_3 ('\"', VAR_0);
  while ((VAR_2 = *VAR_1++) != 0)
    {
      if (FUNC_0 (VAR_2))
 {
   if (VAR_2 == '\"' || VAR_2 == '\\')
     FUNC_3 ('\\', VAR_0);
   FUNC_3 (VAR_2, VAR_0);
 }
      else
 FUNC_2 (VAR_0, "\\%03o", (unsigned char) VAR_2);
    }
  FUNC_3 ('\"', VAR_0);

}
