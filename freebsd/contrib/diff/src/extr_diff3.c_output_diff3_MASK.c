
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff3_block {int correspond; } ;
typedef int lin ;
typedef int FILE ;






 int FUNC_0 (struct diff3_block*,int) ;
 int FUNC_1 (struct diff3_block*,int) ;
 struct diff3_block* FUNC_2 (struct diff3_block*) ;
 size_t FUNC_3 (struct diff3_block*,int,int) ;
 char* FUNC_4 (struct diff3_block*,int,int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char const*,...) ;
 int FUNC_8 (char*,int,size_t,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_9 (FILE *VAR_1, struct diff3_block *VAR_2,
       int const VAR_3[3], int const VAR_4[3])
{
  int VAR_5;
  int VAR_6;
  char *VAR_7;
  struct diff3_block *VAR_8;
  lin VAR_9;
  size_t VAR_10;
  int VAR_11;
  static int VAR_12[3] = { 2, 3, 1 };
  char const *VAR_13 = VAR_0 ? "\t" : "  ";

  for (VAR_8 = VAR_2; VAR_8; VAR_8 = FUNC_2 (VAR_8))
    {
      char VAR_14[2];

      switch (VAR_8->correspond)
 {
 case 128:
   VAR_14[0] = 0;
   VAR_11 = 3;
   VAR_6 = 3;
   break;
 case 131:
 case 130:
 case 129:
   VAR_6 = VAR_4[VAR_8->correspond - 131];

   VAR_14[0] = VAR_6 + '1';
   VAR_14[1] = 0;
   VAR_11 = VAR_6 == 0;
   break;
 default:
   FUNC_6 ("internal error: invalid diff type passed to output");
 }
      FUNC_7 (VAR_1, "====%s\n", VAR_14);


      for (VAR_5 = 0; VAR_5 < 3;
    VAR_5 = (VAR_6 == 1 ? VAR_12[VAR_5] : VAR_5 + 1))
 {
   int VAR_15 = VAR_3[VAR_5];
   lin VAR_16 = FUNC_1 (VAR_8, VAR_15);
   lin VAR_17 = FUNC_0 (VAR_8, VAR_15);
   long int VAR_18 = VAR_16;
   long int VAR_19 = VAR_17;

   FUNC_7 (VAR_1, "%d:", VAR_5 + 1);
   switch (VAR_16 - VAR_17)
     {
     case 1:
       FUNC_7 (VAR_1, "%lda\n", VAR_18 - 1);
       break;
     case 0:
       FUNC_7 (VAR_1, "%ldc\n", VAR_18);
       break;
     default:
       FUNC_7 (VAR_1, "%ld,%ldc\n", VAR_18, VAR_19);
       break;
     }

   if (VAR_5 == VAR_11) continue;

   if (VAR_16 <= VAR_17)
     {
       VAR_9 = 0;
       do
  {
    FUNC_7 (VAR_1, "%s", VAR_13);
    VAR_7 = FUNC_4 (VAR_8, VAR_15, VAR_9);
    VAR_10 = FUNC_3 (VAR_8, VAR_15, VAR_9);
    FUNC_8 (VAR_7, sizeof (char), VAR_10, VAR_1);
  }
       while (++VAR_9 < VAR_17 - VAR_16 + 1);
       if (VAR_7[VAR_10 - 1] != '\n')
  FUNC_7 (VAR_1, "\n\\ %s\n",
    FUNC_5("No newline at end of file"));
     }
 }
    }
}
