
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int exp; struct table_elt* next_same_value; struct table_elt* first_same_value; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

void
FUNC_2 (struct table_elt *VAR_1)
{
  struct table_elt *VAR_2;

  FUNC_0 (VAR_0, "Equivalence chain for ");
  FUNC_1 (VAR_0, VAR_1->exp);
  FUNC_0 (VAR_0, ": \n");

  for (VAR_2 = VAR_1->first_same_value; VAR_2; VAR_2 = VAR_2->next_same_value)
    {
      FUNC_1 (VAR_0, VAR_2->exp);
      FUNC_0 (VAR_0, "\n");
    }
}
