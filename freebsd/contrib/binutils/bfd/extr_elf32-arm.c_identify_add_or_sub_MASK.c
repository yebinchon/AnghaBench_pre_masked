
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;



__attribute__((used)) static int
FUNC_0(bfd_vma VAR_0)
{
  int VAR_1 = VAR_0 & 0x1e00000;

  if (VAR_1 == 1 << 23)
    return 1;

  if (VAR_1 == 1 << 22)
    return -1;

  return 0;
}
