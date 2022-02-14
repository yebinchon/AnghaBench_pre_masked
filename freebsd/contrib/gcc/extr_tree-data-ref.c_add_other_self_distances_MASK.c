
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct data_dependence_relation {int dummy; } ;
typedef int lambda_vector ;
typedef int DDR_ARE_DEPENDENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct data_dependence_relation*) ;
 int FUNC_2 (struct data_dependence_relation*) ;
 int FUNC_3 (struct data_dependence_relation*) ;
 int FUNC_4 (struct data_dependence_relation*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct data_dependence_relation*,int ) ;
 int FUNC_9 (struct data_dependence_relation*,int ,int) ;
 int VAR_1 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (struct data_dependence_relation *VAR_2)
{
  lambda_vector VAR_3;
  unsigned VAR_4;
  int VAR_5 = FUNC_3 (VAR_2);

  for (VAR_4 = 0; VAR_4 < FUNC_4 (VAR_2); VAR_4++)
    {
      tree VAR_6 = FUNC_5 (FUNC_1 (VAR_2), VAR_4);

      if (FUNC_7 (VAR_6) == VAR_0)
 {
   if (!FUNC_10 (VAR_6))
     {
       if (FUNC_4 (VAR_2) != 1)
  {
    DDR_ARE_DEPENDENT (VAR_7) = VAR_1;
    return;
  }

       FUNC_8 (VAR_2, FUNC_5 (FUNC_1 (VAR_2), 0));
       return;
     }

   VAR_5 = FUNC_6 (VAR_5,
        FUNC_11 (FUNC_0 (VAR_6),
       FUNC_2 (VAR_2)));
 }
    }

  VAR_3 = FUNC_12 (FUNC_3 (VAR_2));
  FUNC_9 (VAR_2, VAR_3, VAR_5);
}
