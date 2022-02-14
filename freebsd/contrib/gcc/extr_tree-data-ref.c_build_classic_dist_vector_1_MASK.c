
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct subscript {int dummy; } ;
struct data_reference {int dummy; } ;
struct data_dependence_relation {int dummy; } ;
typedef int* lambda_vector ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct data_dependence_relation*) ;
 int FUNC_2 (struct data_dependence_relation*) ;
 unsigned int FUNC_3 (struct data_dependence_relation*) ;
 struct subscript* FUNC_4 (struct data_dependence_relation*,unsigned int) ;
 int FUNC_5 (struct data_reference*,unsigned int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (struct subscript*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 (struct data_dependence_relation*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int* FUNC_13 (int ) ;
 int FUNC_14 (struct data_dependence_relation*) ;

__attribute__((used)) static bool
FUNC_15 (struct data_dependence_relation *VAR_2,
        struct data_reference *VAR_3,
        struct data_reference *VAR_4,
        lambda_vector VAR_5, bool *VAR_6,
        int *VAR_7)
{
  unsigned VAR_8;
  lambda_vector VAR_9 = FUNC_13 (FUNC_2 (VAR_2));

  for (VAR_8 = 0; VAR_8 < FUNC_3 (VAR_2); VAR_8++)
    {
      tree VAR_10, VAR_11;
      struct subscript *VAR_12 = FUNC_4 (VAR_2, VAR_8);

      if (FUNC_9 (FUNC_7 (VAR_12)))
 {
   FUNC_14 (VAR_2);
   return 0;
 }

      VAR_10 = FUNC_5 (VAR_3, VAR_8);
      VAR_11 = FUNC_5 (VAR_4, VAR_8);

      if (FUNC_8 (VAR_10) == VAR_0
   && FUNC_8 (VAR_11) == VAR_0)
 {
   int VAR_13, VAR_14;
   int VAR_15 = FUNC_11 (FUNC_0 (VAR_10),
         FUNC_1 (VAR_2));
   int VAR_16 = FUNC_11 (FUNC_0 (VAR_11),
         FUNC_1 (VAR_2));
   VAR_14 = VAR_15 < VAR_16 ? VAR_15 : VAR_16;
   *VAR_7 = FUNC_6 (VAR_14, *VAR_7);

   if (FUNC_9 (FUNC_7 (VAR_12)))
     {
       FUNC_14 (VAR_2);
       return 0;
     }

   VAR_13 = FUNC_12 (FUNC_7 (VAR_12));
   if (VAR_9[VAR_14] != 0 && VAR_5[VAR_14] != VAR_13)
     {
       FUNC_10 (VAR_2, VAR_1);
       return 0;
     }

   VAR_5[VAR_14] = VAR_13;
   VAR_9[VAR_14] = 1;
   *VAR_6 = 1;
 }
      else
 {



   FUNC_14 (VAR_2);
   return 0;
 }
    }

  return 1;
}
