
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct data_dependence_relation {int dummy; } ;
typedef int * lambda_vector ;
typedef int DDR_ARE_DEPENDENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct data_dependence_relation*) ;
 int FUNC_4 (struct data_dependence_relation*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct data_dependence_relation*,int *,int) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (struct data_dependence_relation*,int *) ;

__attribute__((used)) static void
FUNC_11 (struct data_dependence_relation *VAR_2, tree VAR_3)
{
  int VAR_4, VAR_5;
  tree VAR_6 = FUNC_0 (VAR_3);
  tree VAR_7 = FUNC_0 (VAR_6);
  lambda_vector VAR_8;


  if (FUNC_5 (VAR_7) != VAR_0)
    {
      DDR_ARE_DEPENDENT (VAR_9) = VAR_1;
      return;
    }

  VAR_5 = FUNC_7 (FUNC_2 (VAR_3), FUNC_3 (VAR_2));
  VAR_4 = FUNC_7 (FUNC_2 (VAR_6), FUNC_3 (VAR_2));


  VAR_8 = FUNC_9 (FUNC_4 (VAR_2));
  VAR_8[VAR_4] = FUNC_8 (FUNC_1 (VAR_3));
  VAR_8[VAR_5] = -FUNC_8 (FUNC_1 (VAR_6));
  FUNC_10 (VAR_2, VAR_8);

  FUNC_6 (VAR_2, VAR_8, VAR_4);
}
