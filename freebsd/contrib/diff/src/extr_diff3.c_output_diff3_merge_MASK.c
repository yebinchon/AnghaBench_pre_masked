
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff3_block {size_t correspond; struct diff3_block* next; } ;
typedef scalar_t__ lin ;
typedef enum diff_type { ____Placeholder_diff_type } diff_type ;
typedef int FILE ;


 size_t VAR_0 ;



 scalar_t__ FUNC_0 (struct diff3_block*,size_t) ;
 scalar_t__ FUNC_1 (struct diff3_block*,int const) ;
 int FUNC_2 (struct diff3_block*,int const,scalar_t__) ;
 int FUNC_3 (struct diff3_block*,int const,scalar_t__) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int FUNC_8 (int *,char const*,...) ;
 int FUNC_9 (int ,int,int ,int *) ;
 int FUNC_10 (int *) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static bool
FUNC_13 (FILE *VAR_9, FILE *VAR_10, struct diff3_block *VAR_11,
      int const VAR_12[3], int const VAR_13[3],
      char const *VAR_14, char const *VAR_15, char const *VAR_16)
{
  int VAR_17;
  lin VAR_18;
  bool VAR_19 = 0;
  bool VAR_20;
  struct diff3_block *VAR_21;
  lin VAR_22 = 0;

  for (VAR_21 = VAR_11; VAR_21; VAR_21 = VAR_21->next)
    {

      enum diff_type VAR_23
 = ((VAR_21->correspond == 128)
    ? 128
    : VAR_0 + VAR_13[VAR_21->correspond - VAR_0]);
      char const *VAR_24 = "<<<<<<< %s\n";


      switch (VAR_23)
 {
 default: continue;
 case 130: if (!VAR_7) continue; VAR_20 = 1; break;
 case 129: if (VAR_6) continue; VAR_20 = 0; break;
 case 128: if (VAR_8) continue; VAR_20 = VAR_5;
   VAR_24 = "||||||| %s\n";
   break;
 }


      VAR_18 = FUNC_0 (VAR_21, VAR_2) - VAR_22 - 1;
      VAR_22 += VAR_18;
      while (0 <= --VAR_18)
 do
   {
     VAR_17 = FUNC_10 (VAR_9);
     if (VAR_17 == VAR_1)
       {
  if (FUNC_7 (VAR_9))
    FUNC_11 (FUNC_4("read failed"));
  else if (FUNC_6 (VAR_9))
    FUNC_5 ("input file shrank");
       }
     FUNC_12 (VAR_17, VAR_10);
   }
 while (VAR_17 != '\n');

      if (VAR_20)
 {
   VAR_19 = 1;

   if (VAR_23 == 128)
     {

       FUNC_8 (VAR_10, "<<<<<<< %s\n", VAR_14);
       for (VAR_18 = 0;
     VAR_18 < FUNC_1 (VAR_21, VAR_12[VAR_2]);
     VAR_18++)
  FUNC_9 (FUNC_3 (VAR_21, VAR_12[VAR_2], VAR_18), sizeof (char),
   FUNC_2 (VAR_21, VAR_12[VAR_2], VAR_18), VAR_10);
     }

   if (VAR_7)
     {

       FUNC_8 (VAR_10, VAR_24, VAR_15);
       for (VAR_18 = 0;
     VAR_18 < FUNC_1 (VAR_21, VAR_12[VAR_3]);
     VAR_18++)
  FUNC_9 (FUNC_3 (VAR_21, VAR_12[VAR_3], VAR_18), sizeof (char),
   FUNC_2 (VAR_21, VAR_12[VAR_3], VAR_18), VAR_10);
     }

   FUNC_8 (VAR_10, "=======\n");
 }


      for (VAR_18 = 0;
    VAR_18 < FUNC_1 (VAR_21, VAR_12[VAR_4]);
    VAR_18++)
 FUNC_9 (FUNC_3 (VAR_21, VAR_12[VAR_4], VAR_18), sizeof (char),
  FUNC_2 (VAR_21, VAR_12[VAR_4], VAR_18), VAR_10);

      if (VAR_20)
 FUNC_8 (VAR_10, ">>>>>>> %s\n", VAR_16);


      VAR_18 = FUNC_1 (VAR_21, VAR_2);
      VAR_22 += VAR_18;
      while (0 <= --VAR_18)
 while ((VAR_17 = FUNC_10 (VAR_9)) != '\n')
   if (VAR_17 == VAR_1)
     {
       if (FUNC_7 (VAR_9))
  FUNC_11 (FUNC_4("read failed"));
       else if (FUNC_6 (VAR_9))
  {
    if (VAR_18 || VAR_21->next)
      FUNC_5 ("input file shrank");
    return VAR_19;
  }
     }
    }

  while ((VAR_17 = FUNC_10 (VAR_9)) != VAR_1 || !(FUNC_7 (VAR_9) | FUNC_6 (VAR_9)))
    FUNC_12 (VAR_17, VAR_10);
  return VAR_19;
}
