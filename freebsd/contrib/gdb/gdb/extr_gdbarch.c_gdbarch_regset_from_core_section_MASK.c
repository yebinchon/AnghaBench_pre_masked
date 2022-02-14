
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regset {int dummy; } ;
struct gdbarch {struct regset const* (* regset_from_core_section ) (struct gdbarch*,char const*,size_t) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct regset const* FUNC_2 (struct gdbarch*,char const*,size_t) ;

const struct regset *
FUNC_3 (struct gdbarch *VAR_2, const char *VAR_3, size_t VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->regset_from_core_section != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_regset_from_core_section called\n");
  return VAR_2->regset_from_core_section (VAR_2, VAR_3, VAR_4);
}
