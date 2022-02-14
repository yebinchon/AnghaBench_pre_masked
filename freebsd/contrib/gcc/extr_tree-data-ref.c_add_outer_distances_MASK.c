
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_dependence_relation {int dummy; } ;
typedef int* lambda_vector ;


 int FUNC_0 (struct data_dependence_relation*) ;
 int FUNC_1 (int*,int*,int ) ;
 int* FUNC_2 (int ) ;
 int FUNC_3 (struct data_dependence_relation*,int*) ;

__attribute__((used)) static void
FUNC_4 (struct data_dependence_relation *VAR_0,
       lambda_vector VAR_1, int VAR_2)
{


  while (--VAR_2 >= 0)
    {
      lambda_vector VAR_3 = FUNC_2 (FUNC_0 (VAR_0));
      FUNC_1 (VAR_1, VAR_3, FUNC_0 (VAR_0));
      VAR_3[VAR_2] = 1;
      FUNC_3 (VAR_0, VAR_3);
    }
}
