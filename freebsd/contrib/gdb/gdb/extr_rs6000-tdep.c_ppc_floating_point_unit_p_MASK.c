
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct bfd_arch_info {scalar_t__ arch; scalar_t__ mach; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bfd_arch_info* FUNC_0 (struct gdbarch*) ;

int
FUNC_1 (struct gdbarch *VAR_3)
{
  const struct bfd_arch_info *VAR_4 = FUNC_0 (VAR_3);
  if (VAR_4->arch == VAR_0)
    return (VAR_4->mach != VAR_2);
  if (VAR_4->arch == VAR_1)
    return 1;
  return 0;
}
