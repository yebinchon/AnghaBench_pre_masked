
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int,int *) ;

void
FUNC_3 (FILE *VAR_0, const char *VAR_1, size_t VAR_2,
     const char *VAR_3)
{
  size_t VAR_4;
  int VAR_5 = 17;
  register const unsigned char *VAR_6 =
    (const unsigned char *)VAR_1;

  FUNC_1 (VAR_0, "%s\"", VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      register int VAR_7 = VAR_6[VAR_4];

      if (FUNC_0 (VAR_7))
 {
   if (VAR_7 == '\\' || VAR_7 == '\"')
     {
       FUNC_2 ('\\', VAR_0);
       VAR_5++;
     }
   FUNC_2 (VAR_7, VAR_0);
   VAR_5++;
 }
      else
 {
   FUNC_1 (VAR_0, "\\%03o", VAR_7);
   VAR_5 += 4;
 }

      if (VAR_5 > 72 && VAR_4+1 < VAR_2)
 {
   VAR_5 = 17;
   FUNC_1 (VAR_0, "\"\n%s\"", VAR_3);
 }
    }
  FUNC_1 (VAR_0, "\"\n");
}
