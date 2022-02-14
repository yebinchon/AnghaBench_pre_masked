
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comp_unit {int dummy; } ;
struct attribute {int name; } ;
struct attr_abbrev {int form; int name; } ;
typedef int bfd_byte ;


 int * FUNC_0 (struct attribute*,int ,struct comp_unit*,int *) ;

__attribute__((used)) static bfd_byte *
FUNC_1 (struct attribute *VAR_0,
  struct attr_abbrev *VAR_1,
  struct comp_unit *VAR_2,
  bfd_byte *VAR_3)
{
  VAR_0->name = VAR_1->name;
  VAR_3 = FUNC_0 (VAR_0, VAR_1->form, VAR_2, VAR_3);
  return VAR_3;
}
