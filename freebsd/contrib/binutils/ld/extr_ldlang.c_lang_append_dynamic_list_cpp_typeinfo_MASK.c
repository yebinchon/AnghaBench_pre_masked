
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_elf_version_expr {int dummy; } ;


 unsigned int FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (struct bfd_elf_version_expr*) ;
 struct bfd_elf_version_expr* FUNC_2 (struct bfd_elf_version_expr*,char const*,char*,int ) ;

void
FUNC_3 (void)
{
  const char * VAR_1 [] =
    {
      "typeinfo name for*",
      "typeinfo for*"
    };
  struct bfd_elf_version_expr *VAR_2 = ((void*)0);
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_1); VAR_3++)
    VAR_2 = FUNC_2 (VAR_2, VAR_1 [VAR_3], "C++",
         VAR_0);

  FUNC_1 (VAR_2);
}
