
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int bfd_vma ;


 scalar_t__ FUNC_0 (int ) ;
 struct minimal_symbol* FUNC_1 (int ) ;
 int FUNC_2 (struct minimal_symbol*) ;

__attribute__((used)) static int
FUNC_3 (bfd_vma VAR_0)
{
  struct minimal_symbol *VAR_1;


  if (FUNC_0 (VAR_0))
    return 1;




  VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1)
    return FUNC_2 (VAR_1);
  else
    return 0;
}
