
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {struct bfd_arch_info const* bfd_arch_info; } ;
struct bfd_arch_info {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

const struct bfd_arch_info *
FUNC_2 (struct gdbarch *VAR_2)
{
  FUNC_1 (VAR_2 != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_bfd_arch_info called\n");
  return VAR_2->bfd_arch_info;
}
