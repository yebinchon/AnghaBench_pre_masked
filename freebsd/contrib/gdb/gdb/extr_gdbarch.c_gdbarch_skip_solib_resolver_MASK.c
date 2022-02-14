
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* skip_solib_resolver ) (struct gdbarch*,int ) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,int ) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, CORE_ADDR VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->skip_solib_resolver != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_skip_solib_resolver called\n");
  return VAR_2->skip_solib_resolver (VAR_2, VAR_3);
}
