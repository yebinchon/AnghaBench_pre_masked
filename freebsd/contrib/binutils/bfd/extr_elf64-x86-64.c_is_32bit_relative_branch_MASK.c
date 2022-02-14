
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;



__attribute__((used)) static bfd_boolean
FUNC_0 (bfd_byte *VAR_0, bfd_vma VAR_1)
{




  return ((VAR_1 > 0
    && (VAR_0 [VAR_1 - 1] == 0xe8
        || VAR_0 [VAR_1 - 1] == 0xe9))
   || (VAR_1 > 1
       && VAR_0 [VAR_1 - 2] == 0x0f
       && (VAR_0 [VAR_1 - 1] & 0xf0) == 0x80));
}
