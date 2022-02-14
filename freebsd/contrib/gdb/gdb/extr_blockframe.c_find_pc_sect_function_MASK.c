
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct block {int dummy; } ;
struct bfd_section {int dummy; } ;
typedef int CORE_ADDR ;


 struct block* FUNC_0 (int ,struct bfd_section*) ;
 struct symbol* FUNC_1 (struct block*) ;

struct symbol *
FUNC_2 (CORE_ADDR VAR_0, struct bfd_section *VAR_1)
{
  struct block *VAR_2 = FUNC_0 (VAR_0, VAR_1);
  if (VAR_2 == 0)
    return 0;
  return FUNC_1 (VAR_2);
}
