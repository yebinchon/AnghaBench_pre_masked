
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char,int *) ;

void
FUNC_3 (FILE *VAR_0, const char *VAR_1, int VAR_2)
{
  char VAR_3;
  int VAR_4, VAR_5;
  const char *VAR_6 = "\t.byte \"";
  const char *VAR_7 = "\t.byte ";
  const char *VAR_8 = ((void*)0);

  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      VAR_3 = *VAR_1++;
      if (VAR_3 >= ' ' && VAR_3 < 0177)
 {
   if (VAR_6)
     FUNC_1 (VAR_6, VAR_0);
   FUNC_2 (VAR_3, VAR_0);


   if (VAR_3 == '"')
     {
       FUNC_2 (VAR_3, VAR_0);
       ++VAR_5;
     }

   VAR_6 = ((void*)0);
   VAR_7 = "\"\n\t.byte ";
   VAR_8 = "\"\n";
   ++VAR_5;

   if (VAR_5 >= 512)
     {
       FUNC_1 (VAR_8, VAR_0);

       VAR_6 = "\t.byte \"";
       VAR_7 = "\t.byte ";
       VAR_8 = ((void*)0);
       VAR_5 = 0;
     }
 }
      else
 {
   if (VAR_7)
     FUNC_1 (VAR_7, VAR_0);
   FUNC_0 (VAR_0, "%d", VAR_3);

   VAR_6 = "\n\t.byte \"";
   VAR_7 = ", ";
   VAR_8 = "\n";
   VAR_5 = 0;
 }
    }


  if (VAR_8)
    FUNC_1 (VAR_8, VAR_0);
}
