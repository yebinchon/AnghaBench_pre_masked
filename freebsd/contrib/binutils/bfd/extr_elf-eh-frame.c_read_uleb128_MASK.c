
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int**,int*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd_byte **VAR_2, bfd_byte *VAR_3, bfd_vma *VAR_4)
{
  bfd_byte *VAR_5, *VAR_6;

  VAR_5 = *VAR_2;
  if (!FUNC_0 (VAR_2, VAR_3))
    return VAR_0;

  VAR_6 = *VAR_2;
  *VAR_4 = *--VAR_6;
  while (VAR_6 > VAR_5)
    *VAR_4 = (*VAR_4 << 7) | (*--VAR_6 & 0x7f);

  return VAR_1;
}
