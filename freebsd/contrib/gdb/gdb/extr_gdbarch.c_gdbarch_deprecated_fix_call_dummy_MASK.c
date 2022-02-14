
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct gdbarch {int (* deprecated_fix_call_dummy ) (char*,int ,int ,int,struct value**,struct type*,int) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ,int,struct value**,struct type*,int) ;

void
FUNC_3 (struct gdbarch *VAR_2, char *VAR_3, CORE_ADDR VAR_4, CORE_ADDR VAR_5, int VAR_6, struct value **VAR_7, struct type *VAR_8, int VAR_9)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_fix_call_dummy != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_fix_call_dummy called\n");
  VAR_2->deprecated_fix_call_dummy (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
