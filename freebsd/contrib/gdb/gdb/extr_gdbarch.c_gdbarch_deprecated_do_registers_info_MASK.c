
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* deprecated_do_registers_info ) (int,int) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;

void
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, int VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_do_registers_info != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_do_registers_info called\n");
  VAR_2->deprecated_do_registers_info (VAR_3, VAR_4);
}
