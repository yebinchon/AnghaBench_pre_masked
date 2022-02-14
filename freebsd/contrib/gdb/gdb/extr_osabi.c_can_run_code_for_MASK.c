
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_arch_info {struct bfd_arch_info const* (* compatible ) (struct bfd_arch_info const*,struct bfd_arch_info const*) ;} ;


 struct bfd_arch_info const* FUNC_0 (struct bfd_arch_info const*,struct bfd_arch_info const*) ;

__attribute__((used)) static int
FUNC_1 (const struct bfd_arch_info *VAR_0, const struct bfd_arch_info *VAR_1)
{
  return (VAR_0 == VAR_1 || VAR_0->compatible (VAR_0, VAR_1) == VAR_0);
}
