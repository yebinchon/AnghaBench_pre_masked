
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct gdbarch {int (* deprecated_push_arguments ) (int,struct value**,int ,int,int ) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,struct value**,int ,int,int ) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, int VAR_3, struct value **VAR_4, CORE_ADDR VAR_5, int VAR_6, CORE_ADDR VAR_7)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_push_arguments != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_push_arguments called\n");
  return VAR_2->deprecated_push_arguments (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
