
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 unsigned long** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int *) ;
 int* VAR_5 ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (char) ;
 void* FUNC_8 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_6)
{
  FILE * VAR_7 = FUNC_4 (VAR_6, "r");

  if (!VAR_7)
    FUNC_0 ("opening UnicodeData.txt");
  for (;;)
    {
      char VAR_8[256];
      unsigned long VAR_9, VAR_10[4];
      char *VAR_11;
      int VAR_12;
      int VAR_13;

      if (!FUNC_3 (VAR_8, sizeof (VAR_8), VAR_7))
 break;
      VAR_9 = FUNC_8 (VAR_8, &VAR_11, 16);
      if (VAR_11 == VAR_8 || *VAR_11 != ';')
 FUNC_0 ("parsing UnicodeData.txt, reading code point");
      if (VAR_9 > 0xffff || ! (VAR_5[VAR_9] & (VAR_0 | VAR_1)))
 continue;

      do {
 VAR_11++;
      } while (*VAR_11 != ';');


      if (*++VAR_11 == 'N')
 VAR_5[VAR_9] |= VAR_4;

      do {
 VAR_11++;
      } while (*VAR_11 != ';');


      if (! FUNC_5 (*++VAR_11))
 FUNC_0 ("parsing UnicodeData.txt, combining class not number");
      VAR_2[VAR_9] = FUNC_8 (VAR_11, &VAR_11, 10);
      if (*VAR_11++ != ';')
 FUNC_0 ("parsing UnicodeData.txt, junk after combining class");


      do {
 VAR_11++;
      } while (*VAR_11 != ';');


      VAR_13 = VAR_5[VAR_9];
      if (*++VAR_11 == '<')
 continue;
      for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
 {
   if (*VAR_11 == ';')
     break;
   if (!FUNC_7 (*VAR_11))
     FUNC_0 ("parsing UnicodeData.txt, decomposition format");
   VAR_10[VAR_12] = FUNC_8 (VAR_11, &VAR_11, 16);
   VAR_13 &= VAR_5[VAR_10[VAR_12]];
   while (FUNC_6 (*VAR_11))
     VAR_11++;
 }
      if (VAR_12 > 2)
 FUNC_0 ("parsing UnicodeData.txt, decomposition too long");
      if (VAR_13)
 while (--VAR_12 >= 0)
   VAR_3[VAR_9][VAR_12] = VAR_10[VAR_12];
    }
  if (FUNC_2 (VAR_7))
    FUNC_0 ("reading UnicodeData.txt");
  FUNC_1 (VAR_7);
}
