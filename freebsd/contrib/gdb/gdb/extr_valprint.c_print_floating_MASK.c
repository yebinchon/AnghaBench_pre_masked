
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct floatformat {int dummy; } ;
typedef double DOUBLEST ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct type*) ;
 struct floatformat* FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct floatformat const*,char*) ;
 scalar_t__ FUNC_4 (struct floatformat const*,char*) ;
 int FUNC_5 (struct floatformat const*,char*) ;
 int FUNC_6 (struct ui_file*,char*,...) ;
 int FUNC_7 (int ,struct ui_file*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 double FUNC_10 (struct type*,char*,int*) ;

void
FUNC_11 (char *VAR_1, struct type *VAR_2, struct ui_file *VAR_3)
{
  DOUBLEST VAR_4;
  int VAR_5;
  const struct floatformat *VAR_6 = ((void*)0);
  unsigned VAR_7 = FUNC_1 (VAR_2);


  if (FUNC_0 (VAR_2) == VAR_0)
    VAR_6 = FUNC_2 (VAR_2);
  if (VAR_6 != ((void*)0) && FUNC_3 (VAR_6, VAR_1))
    {
      if (FUNC_4 (VAR_6, VAR_1))
 FUNC_6 (VAR_3, "-");
      FUNC_6 (VAR_3, "nan(");
      FUNC_7 (FUNC_8 (), VAR_3);
      FUNC_7 (FUNC_5 (VAR_6, VAR_1), VAR_3);
      FUNC_7 (FUNC_9 (), VAR_3);
      FUNC_6 (VAR_3, ")");
      return;
    }
  VAR_4 = FUNC_10 (VAR_2, VAR_1, &VAR_5);
  if (VAR_5)
    {
      FUNC_6 (VAR_3, "<invalid float value>");
      return;
    }
  if (VAR_7 < sizeof (double))
      FUNC_6 (VAR_3, "%.9g", (double) VAR_4);
  else if (VAR_7 == sizeof (double))
      FUNC_6 (VAR_3, "%.17g", (double) VAR_4);
  else





    FUNC_6 (VAR_3, "%.17g", (double) VAR_4);

}
