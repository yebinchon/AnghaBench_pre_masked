
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;



__attribute__((used)) static bfd_vma
FUNC_0 (bfd_vma VAR_0, bfd_vma VAR_1)
{
  if (VAR_1 <= 1)
    return VAR_0;

  VAR_0 = (VAR_0 + VAR_1 - 1) / VAR_1;
  return VAR_0 * VAR_1;
}
