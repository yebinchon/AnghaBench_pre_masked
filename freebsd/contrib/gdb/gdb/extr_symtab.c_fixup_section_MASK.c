
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct general_symbol_info {int section; int bfd_section; int name; } ;


 int FUNC_0 (struct minimal_symbol*) ;
 int FUNC_1 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_2 (int ,int *,struct objfile*) ;

__attribute__((used)) static void
FUNC_3 (struct general_symbol_info *VAR_0, struct objfile *VAR_1)
{
  struct minimal_symbol *VAR_2;
  VAR_2 = FUNC_2 (VAR_0->name, ((void*)0), VAR_1);

  if (VAR_2)
    {
      VAR_0->bfd_section = FUNC_0 (VAR_2);
      VAR_0->section = FUNC_1 (VAR_2);
    }
}
