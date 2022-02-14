
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;
typedef int bfd_byte ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (bfd_byte *VAR_1, bfd_vma VAR_2)
{
  VAR_1[0] = (bfd_byte) VAR_0;
  VAR_1[1] = (VAR_2 >> 24) & 0xff;
  VAR_1[2] = (VAR_2 >> 16) & 0xff;
  VAR_1[3] = (VAR_2 >> 8) & 0xff;
  VAR_1[4] = (VAR_2 >> 0) & 0xff;
}
