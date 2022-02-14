
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf1_unit {struct dwarf1_func* func_list; } ;
struct dwarf1_func {struct dwarf1_func* prev; } ;
struct dwarf1_debug {int abfd; } ;
typedef int bfd_size_type ;


 struct dwarf1_func* FUNC_0 (int ,int) ;

__attribute__((used)) static struct dwarf1_func *
FUNC_1 (struct dwarf1_debug* VAR_0, struct dwarf1_unit* VAR_1)
{
  bfd_size_type VAR_2 = sizeof (struct dwarf1_func);

  struct dwarf1_func* VAR_3 = FUNC_0 (VAR_0->abfd, VAR_2);
  VAR_3->prev = VAR_1->func_list;
  VAR_1->func_list = VAR_3;

  return VAR_3;
}
