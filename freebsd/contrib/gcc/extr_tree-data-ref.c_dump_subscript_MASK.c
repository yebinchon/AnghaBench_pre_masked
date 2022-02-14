
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct subscript {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct subscript*) ;
 scalar_t__ FUNC_1 (struct subscript*) ;
 scalar_t__ FUNC_2 (struct subscript*) ;
 scalar_t__ FUNC_3 (struct subscript*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,scalar_t__,int ) ;

void
FUNC_7 (FILE *VAR_1, struct subscript *VAR_2)
{
  tree VAR_3 = FUNC_0 (VAR_2);

  FUNC_5 (VAR_1, "\n (subscript \n");
  FUNC_5 (VAR_1, "  iterations_that_access_an_element_twice_in_A: ");
  FUNC_6 (VAR_1, VAR_3, 0);
  if (VAR_3 == VAR_0)
    FUNC_5 (VAR_1, "    (no dependence)\n");
  else if (FUNC_4 (VAR_3))
    FUNC_5 (VAR_1, "    (don't know)\n");
  else
    {
      tree VAR_4 = FUNC_3 (VAR_2);
      FUNC_5 (VAR_1, "  last_conflict: ");
      FUNC_6 (VAR_1, VAR_4, 0);
    }

  VAR_3 = FUNC_1 (VAR_2);
  FUNC_5 (VAR_1, "  iterations_that_access_an_element_twice_in_B: ");
  FUNC_6 (VAR_1, VAR_3, 0);
  if (VAR_3 == VAR_0)
    FUNC_5 (VAR_1, "    (no dependence)\n");
  else if (FUNC_4 (VAR_3))
    FUNC_5 (VAR_1, "    (don't know)\n");
  else
    {
      tree VAR_5 = FUNC_3 (VAR_2);
      FUNC_5 (VAR_1, "  last_conflict: ");
      FUNC_6 (VAR_1, VAR_5, 0);
    }

  FUNC_5 (VAR_1, "  (Subscript distance: ");
  FUNC_6 (VAR_1, FUNC_2 (VAR_2), 0);
  FUNC_5 (VAR_1, "  )\n");
  FUNC_5 (VAR_1, " )\n");
}
