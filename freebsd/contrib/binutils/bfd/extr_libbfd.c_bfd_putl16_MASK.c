
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;



void
FUNC_0 (bfd_vma VAR_0, void *VAR_1)
{
  bfd_byte *VAR_2 = VAR_1;
  VAR_2[0] = VAR_0 & 0xff;
  VAR_2[1] = (VAR_0 >> 8) & 0xff;
}
