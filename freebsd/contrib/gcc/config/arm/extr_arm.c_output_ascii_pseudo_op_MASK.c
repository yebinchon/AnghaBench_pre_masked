
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int,int *) ;

void
FUNC_4 (FILE *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
  int VAR_4;
  int VAR_5 = 0;

  FUNC_2 ("\t.ascii\t\"", VAR_1);

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
      int VAR_6 = VAR_2[VAR_4];

      if (VAR_5 >= VAR_0)
 {
   FUNC_2 ("\"\n\t.ascii\t\"", VAR_1);
   VAR_5 = 0;
 }

      if (FUNC_0 (VAR_6))
 {
   if (VAR_6 == '\\' || VAR_6 == '\"')
     {
       FUNC_3 ('\\', VAR_1);
       VAR_5++;
     }
   FUNC_3 (VAR_6, VAR_1);
   VAR_5++;
 }
      else
 {
   FUNC_1 (VAR_1, "\\%03o", VAR_6);
   VAR_5 += 4;
 }
    }

  FUNC_2 ("\"\n", VAR_1);
}
