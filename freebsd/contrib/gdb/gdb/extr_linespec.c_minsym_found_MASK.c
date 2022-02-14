
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int pc; int section; } ;
struct minimal_symbol {int dummy; } ;
struct bfd_section {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct minimal_symbol*) ;
 int FUNC_2 (struct minimal_symbol*) ;
 struct symtab_and_line FUNC_3 (int ,struct bfd_section*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct symtabs_and_lines
FUNC_5 (int VAR_1, struct minimal_symbol *VAR_2)
{
  struct symtabs_and_lines VAR_3;

  VAR_3.sals = (struct symtab_and_line *)
    FUNC_4 (sizeof (struct symtab_and_line));
  VAR_3.sals[0] = FUNC_3 (FUNC_2 (VAR_2),
          (struct bfd_section *) 0, 0);
  VAR_3.sals[0].section = FUNC_1 (VAR_2);
  if (VAR_1)
    {
      VAR_3.sals[0].pc += VAR_0;
      VAR_3.sals[0].pc = FUNC_0 (VAR_3.sals[0].pc);
    }
  VAR_3.nelts = 1;
  return VAR_3;
}
