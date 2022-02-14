
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf1_unit {struct dwarf1_unit* prev; } ;
struct dwarf1_debug {struct dwarf1_unit* lastUnit; int abfd; } ;
typedef int bfd_size_type ;


 struct dwarf1_unit* FUNC_0 (int ,int) ;

__attribute__((used)) static struct dwarf1_unit*
FUNC_1 (struct dwarf1_debug* VAR_0)
{
  bfd_size_type VAR_1 = sizeof (struct dwarf1_unit);

  struct dwarf1_unit* VAR_2 = FUNC_0 (VAR_0->abfd, VAR_1);
  VAR_2->prev = VAR_0->lastUnit;
  VAR_0->lastUnit = VAR_2;

  return VAR_2;
}
