
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int dummy; } ;
typedef scalar_t__ bfd_vma ;
typedef int asymbol ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,struct disassemble_info*,int *) ;

__attribute__((used)) static int
FUNC_2 (bfd_vma VAR_0, struct disassemble_info * VAR_1)
{
  asymbol * VAR_2;

  VAR_2 = FUNC_1 (VAR_0, VAR_1, ((void*)0));

  return (VAR_2 != ((void*)0) && (FUNC_0 (VAR_2) == VAR_0));
}
