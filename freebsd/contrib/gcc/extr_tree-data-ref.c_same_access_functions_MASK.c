
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_dependence_relation {int dummy; } ;


 int FUNC_0 (struct data_dependence_relation*) ;
 int FUNC_1 (struct data_dependence_relation*) ;
 unsigned int FUNC_2 (struct data_dependence_relation*) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool
FUNC_5 (struct data_dependence_relation *VAR_0)
{
  unsigned VAR_1;

  for (VAR_1 = 0; VAR_1 < FUNC_2 (VAR_0); VAR_1++)
    if (!FUNC_4 (FUNC_3 (FUNC_0 (VAR_0), VAR_1),
     FUNC_3 (FUNC_1 (VAR_0), VAR_1)))
      return 0;

  return 1;
}
