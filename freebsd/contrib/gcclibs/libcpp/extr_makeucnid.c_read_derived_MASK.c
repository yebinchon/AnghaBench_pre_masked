
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int *) ;
 int* VAR_0 ;
 int * FUNC_4 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (char*,char*) ;
 unsigned long FUNC_6 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_7 (const char *VAR_4)
{
  FILE * VAR_5 = FUNC_4 (VAR_4, "r");

  if (!VAR_5)
    FUNC_0 ("opening DerivedNormalizationProps.txt");
  for (;;)
    {
      char VAR_6[256];
      unsigned long VAR_7, VAR_8;
      char *VAR_9;
      bool VAR_10, VAR_11, VAR_12;

      if (!FUNC_3 (VAR_6, sizeof (VAR_6), VAR_5))
 break;
      VAR_10 = (FUNC_5 (VAR_6, "; NFC_QC; N") != ((void*)0));
      VAR_11 = (FUNC_5 (VAR_6, "; NFKC_QC; N") != ((void*)0));
      VAR_12 = (FUNC_5 (VAR_6, "; NFC_QC; M") != ((void*)0));
      if (! VAR_10 && ! VAR_11 && ! VAR_12)
 continue;

      VAR_7 = FUNC_6 (VAR_6, &VAR_9, 16);
      if (VAR_9 == VAR_6)
 FUNC_0 ("parsing DerivedNormalizationProps.txt, reading start");
      if (VAR_7 > 0xffff)
 continue;
      if (*VAR_9 == '.' && VAR_9[1] == '.')
 VAR_8 = FUNC_6 (VAR_9 + 2, &VAR_9, 16);
      else
 VAR_8 = VAR_7;

      while (VAR_7 <= VAR_8)
 VAR_0[VAR_7++] |= ((VAR_10 ? VAR_2 : 0)
      | (VAR_11 ? VAR_3 : 0)
      | (VAR_12 ? VAR_1 : 0)
      );
    }
  if (FUNC_2 (VAR_5))
    FUNC_0 ("reading DerivedNormalizationProps.txt");
  FUNC_1 (VAR_5);
}
