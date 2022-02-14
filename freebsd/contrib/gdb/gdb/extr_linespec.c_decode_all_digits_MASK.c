
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int line; scalar_t__ pc; struct symtab* symtab; } ;
struct symtab {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct symtab_and_line*,int *,char***) ;
 struct symtab* FUNC_2 (struct symtab*,int,int *,int *) ;
 int FUNC_3 (struct symtab_and_line*) ;
 int FUNC_4 (struct symtab**,int*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_7 (char **VAR_0, struct symtab *VAR_1,
     int VAR_2, char ***VAR_3,
     struct symtab *VAR_4, char *VAR_5)

{
  struct symtabs_and_lines VAR_6;
  struct symtab_and_line VAR_7;

  enum sign
    {
      none, plus, minus
    }
  VAR_8 = none;


  int VAR_9 = (VAR_4 == 0) ? 1 : 0;

  FUNC_3 (&VAR_7);







  if (VAR_4 == 0 && VAR_1 == 0)
    {

      FUNC_5 ();
      FUNC_4 (&VAR_1, &VAR_2);
    }

  if (**VAR_0 == '+')
    VAR_8 = plus, (*VAR_0)++;
  else if (**VAR_0 == '-')
    VAR_8 = minus, (*VAR_0)++;
  VAR_7.line = FUNC_0 (*VAR_0);
  switch (VAR_8)
    {
    case plus:
      if (VAR_5 == *VAR_0)
 VAR_7.line = 5;
      if (VAR_4 == 0)
 VAR_7.line = VAR_2 + VAR_7.line;
      break;
    case minus:
      if (VAR_5 == *VAR_0)
 VAR_7.line = 15;
      if (VAR_4 == 0)
 VAR_7.line = VAR_2 - VAR_7.line;
      else
 VAR_7.line = 1;
      break;
    case none:
      break;
    }

  while (*VAR_5 == ' ' || *VAR_5 == '\t')
    VAR_5++;
  *VAR_0 = VAR_5;
  if (VAR_4 == 0)
    VAR_4 = VAR_1;




  VAR_7.symtab = FUNC_2 (VAR_4, VAR_7.line, ((void*)0), ((void*)0));
  if (VAR_7.symtab == 0)
    VAR_7.symtab = VAR_4;

  VAR_7.pc = 0;
  VAR_6.sals = (struct symtab_and_line *)
    FUNC_6 (sizeof (struct symtab_and_line));
  VAR_6.sals[0] = VAR_7;
  VAR_6.nelts = 1;
  if (VAR_9)
    FUNC_1 (VAR_6.sals, ((void*)0), VAR_3);
  return VAR_6;
}
