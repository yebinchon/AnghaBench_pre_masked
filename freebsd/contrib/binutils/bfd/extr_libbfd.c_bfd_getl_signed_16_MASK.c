
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_signed_vma ;
typedef int bfd_byte ;


 int FUNC_0 (int const) ;

bfd_signed_vma
FUNC_1 (const void *VAR_0)
{
  const bfd_byte *VAR_1 = VAR_0;
  return FUNC_0 ((VAR_1[1] << 8) | VAR_1[0]);
}
