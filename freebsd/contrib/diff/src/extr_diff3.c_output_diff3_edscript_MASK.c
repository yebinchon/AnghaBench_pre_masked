
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff3_block {size_t correspond; struct diff3_block* next; } ;
typedef enum diff_type { ____Placeholder_diff_type } diff_type ;
typedef int FILE ;


 size_t VAR_0 ;



 long FUNC_0 (struct diff3_block*,int const) ;
 long FUNC_1 (struct diff3_block*,int const) ;
 scalar_t__ FUNC_2 (struct diff3_block*,int const) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_3 (int *,struct diff3_block*,int const) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_6 ;
 struct diff3_block* FUNC_5 (struct diff3_block*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int,long,scalar_t__) ;

__attribute__((used)) static bool
FUNC_7 (FILE *VAR_9, struct diff3_block *VAR_10,
         int const VAR_11[3], int const VAR_12[3],
         char const *VAR_13, char const *VAR_14, char const *VAR_15)
{
  bool VAR_16;
  bool VAR_17 = 0;
  bool VAR_18;
  struct diff3_block *VAR_19;

  for (VAR_19 = FUNC_5 (VAR_10); VAR_19; VAR_19 = VAR_19->next)
    {

      enum diff_type VAR_20
 = (VAR_19->correspond == 128
    ? 128
    : VAR_0 + VAR_12[VAR_19->correspond - VAR_0]);

      long int VAR_21, VAR_22;


      switch (VAR_20)
 {
 default: continue;
 case 130: if (!VAR_7) continue; VAR_18 = 1; break;
 case 129: if (VAR_6) continue; VAR_18 = 0; break;
 case 128: if (VAR_8) continue; VAR_18 = VAR_5; break;
 }

      VAR_21 = FUNC_1 (VAR_19, VAR_11[VAR_1]);
      VAR_22 = FUNC_0 (VAR_19, VAR_11[VAR_1]);

      if (VAR_18)
 {
   VAR_17 = 1;




   FUNC_4 (VAR_9, "%lda\n", VAR_22);
   VAR_16 = 0;
   if (VAR_20 == 128)
     {
       if (VAR_7)
  {

    FUNC_4 (VAR_9, "||||||| %s\n", VAR_14);
    VAR_16 = FUNC_3 (VAR_9, VAR_19, VAR_11[VAR_2]);
  }

       FUNC_4 (VAR_9, "=======\n");
       VAR_16 |= FUNC_3 (VAR_9, VAR_19, VAR_11[VAR_3]);
     }
   FUNC_4 (VAR_9, ">>>>>>> %s\n", VAR_15);
   FUNC_6 (VAR_9, VAR_16, VAR_22 + 2,
        (FUNC_2 (VAR_19, VAR_11[VAR_2])
         + FUNC_2 (VAR_19, VAR_11[VAR_3]) + 1));




   FUNC_4 (VAR_9, "%lda\n<<<<<<< %s\n", VAR_21 - 1,
     VAR_20 == 128 ? VAR_13 : VAR_14);
   VAR_16 = 0;
   if (VAR_20 == 130)
     {

       VAR_16 = FUNC_3 (VAR_9, VAR_19, VAR_11[VAR_2]);
       FUNC_4 (VAR_9, "=======\n");
     }
   FUNC_6 (VAR_9, VAR_16, VAR_21 + 1,
        FUNC_2 (VAR_19, VAR_11[VAR_2]));
 }
      else if (FUNC_2 (VAR_19, VAR_11[VAR_3]) == 0)

 {
   if (VAR_21 == VAR_22)
     FUNC_4 (VAR_9, "%ldd\n", VAR_21);
   else
     FUNC_4 (VAR_9, "%ld,%ldd\n", VAR_21, VAR_22);
 }
      else

 {
   switch (VAR_22 - VAR_21)
     {
     case -1:
       FUNC_4 (VAR_9, "%lda\n", VAR_22);
       break;
     case 0:
       FUNC_4 (VAR_9, "%ldc\n", VAR_22);
       break;
     default:
       FUNC_4 (VAR_9, "%ld,%ldc\n", VAR_21, VAR_22);
       break;
     }

   FUNC_6 (VAR_9, FUNC_3 (VAR_9, VAR_19, VAR_11[VAR_3]),
        VAR_21, FUNC_2 (VAR_19, VAR_11[VAR_3]));
 }
    }
  if (VAR_4) FUNC_4 (VAR_9, "w\nq\n");
  return VAR_17;
}
