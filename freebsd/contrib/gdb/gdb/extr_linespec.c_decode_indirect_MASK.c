
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int section; int pc; } ;
typedef int CORE_ADDR ;


 struct symtab_and_line FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_4 (char **VAR_0)
{
  struct symtabs_and_lines VAR_1;
  CORE_ADDR VAR_2;

  (*VAR_0)++;
  VAR_2 = FUNC_2 (VAR_0);

  VAR_1.sals = (struct symtab_and_line *)
    FUNC_3 (sizeof (struct symtab_and_line));

  VAR_1.nelts = 1;
  VAR_1.sals[0] = FUNC_0 (VAR_2, 0);
  VAR_1.sals[0].pc = VAR_2;
  VAR_1.sals[0].section = FUNC_1 (VAR_2);

  return VAR_1;
}
