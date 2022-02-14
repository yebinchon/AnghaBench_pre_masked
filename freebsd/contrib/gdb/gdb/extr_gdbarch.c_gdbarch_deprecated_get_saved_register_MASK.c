
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* deprecated_get_saved_register ) (char*,int*,int *,struct frame_info*,int,int*) ;} ;
struct frame_info {int dummy; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int*,int *,struct frame_info*,int,int*) ;

void
FUNC_3 (struct gdbarch *VAR_2, char *VAR_3, int *VAR_4, CORE_ADDR *VAR_5, struct frame_info *VAR_6, int VAR_7, enum lval_type *VAR_8)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_get_saved_register != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_get_saved_register called\n");
  VAR_2->deprecated_get_saved_register (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
