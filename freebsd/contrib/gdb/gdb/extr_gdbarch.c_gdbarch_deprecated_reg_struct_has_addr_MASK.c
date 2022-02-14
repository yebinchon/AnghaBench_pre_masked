
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* deprecated_reg_struct_has_addr ) (int,struct type*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,struct type*) ;

int
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, struct type *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_reg_struct_has_addr != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_reg_struct_has_addr called\n");
  return VAR_2->deprecated_reg_struct_has_addr (VAR_3, VAR_4);
}
