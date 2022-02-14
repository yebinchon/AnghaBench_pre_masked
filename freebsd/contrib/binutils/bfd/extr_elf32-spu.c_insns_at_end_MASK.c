
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function_info {int hi; int sec; } ;
typedef void* bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct function_info *VAR_2, bfd_vma VAR_3)
{
  bfd_vma VAR_4 = (VAR_2->hi + 3) & -4;

  while (VAR_4 < VAR_3 && FUNC_0 (VAR_2->sec, VAR_4))
    VAR_4 += 4;
  if (VAR_4 < VAR_3)
    {
      VAR_2->hi = VAR_4;
      return VAR_1;
    }
  VAR_2->hi = VAR_3;
  return VAR_0;
}
