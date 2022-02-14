
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int *) ;
 unsigned int* VAR_2 ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 unsigned long FUNC_8 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_9 (const char *VAR_3)
{
  FILE *VAR_4 = FUNC_4 (VAR_3, "r");
  unsigned VAR_5 = 0;

  if (!VAR_4)
    FUNC_0 ("opening ucnid.tab");
  for (;;)
    {
      char VAR_6[256];

      if (!FUNC_3 (VAR_6, sizeof (VAR_6), VAR_4))
 break;
      if (FUNC_7 (VAR_6, "[C99]\n") == 0)
 VAR_5 = VAR_0;
      else if (FUNC_7 (VAR_6, "[CXX]\n") == 0)
 VAR_5 = VAR_1;
      else if (FUNC_6 (VAR_6[0]))
 {
   char *VAR_7 = VAR_6;
   while (*VAR_7)
     {
       unsigned long VAR_8, VAR_9;
       char *VAR_10;
       VAR_8 = FUNC_8 (VAR_7, &VAR_10, 16);
       if (VAR_10 == VAR_7 || (*VAR_10 != '-' && ! FUNC_5 (*VAR_10)))
  FUNC_0 ("parsing ucnid.tab [1]");
       VAR_7 = VAR_10;
       if (*VAR_7 != '-')
  VAR_9 = VAR_8;
       else
  {
    VAR_9 = FUNC_8 (VAR_7 + 1, &VAR_10, 16);
    if (VAR_9 < VAR_8)
      FUNC_0 ("parsing ucnid.tab, end before start");
    VAR_7 = VAR_10;
    if (! FUNC_5 (*VAR_7))
      FUNC_0 ("parsing ucnid.tab, junk after range");
  }
       while (FUNC_5 (*VAR_7))
  VAR_7++;
       if (VAR_9 > 0xFFFF)
  FUNC_0 ("parsing ucnid.tab, end too large");
       while (VAR_8 <= VAR_9)
  VAR_2[VAR_8++] |= VAR_5;
     }
 }
    }
  if (FUNC_2 (VAR_4))
    FUNC_0 ("reading ucnid.tab");
  FUNC_1 (VAR_4);
}
