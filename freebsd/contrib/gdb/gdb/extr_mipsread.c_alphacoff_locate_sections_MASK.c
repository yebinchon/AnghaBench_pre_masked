
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct alphacoff_dynsecinfo {TYPE_1__* got_sect; TYPE_1__* dyninfo_sect; TYPE_1__* str_sect; TYPE_1__* sym_sect; } ;
typedef int bfd ;
struct TYPE_3__ {int name; } ;
typedef TYPE_1__ asection ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_0, asection *VAR_1, void *VAR_2)
{
  struct alphacoff_dynsecinfo *VAR_3;

  VAR_3 = (struct alphacoff_dynsecinfo *) VAR_2;

  if (FUNC_0 (VAR_1->name, ".dynsym"))
    {
      VAR_3->sym_sect = VAR_1;
    }
  else if (FUNC_0 (VAR_1->name, ".dynstr"))
    {
      VAR_3->str_sect = VAR_1;
    }
  else if (FUNC_0 (VAR_1->name, ".dynamic"))
    {
      VAR_3->dyninfo_sect = VAR_1;
    }
  else if (FUNC_0 (VAR_1->name, ".got"))
    {
      VAR_3->got_sect = VAR_1;
    }
}
