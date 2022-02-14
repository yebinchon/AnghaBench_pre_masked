
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* deprecated_register_convert_to_virtual ) (int,struct type*,char*,char*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,struct type*,char*,char*) ;

void
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, struct type *VAR_4, char *VAR_5, char *VAR_6)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_register_convert_to_virtual != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_register_convert_to_virtual called\n");
  VAR_2->deprecated_register_convert_to_virtual (VAR_3, VAR_4, VAR_5, VAR_6);
}
