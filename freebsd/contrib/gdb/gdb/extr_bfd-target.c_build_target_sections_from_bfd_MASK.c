
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {struct section_table* to_sections; } ;
struct section_table {int dummy; } ;
struct section_closure {struct section_table* end; } ;
struct bfd {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct bfd*) ;
 int FUNC_1 (struct bfd*,int ,struct section_closure*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct target_ops*,unsigned int) ;

void
FUNC_4 (struct target_ops *VAR_1, struct bfd *VAR_2)
{
  unsigned VAR_3;
  struct section_table *VAR_4;
  struct section_closure VAR_5;

  VAR_3 = FUNC_0 (VAR_2);
  FUNC_3 (VAR_1, VAR_3);
  VAR_4 = VAR_1->to_sections;
  VAR_5.end = VAR_1->to_sections;
  FUNC_1 (VAR_2, VAR_0, &VAR_5);
  FUNC_2 (VAR_5.end - VAR_4 <= VAR_3);
}
