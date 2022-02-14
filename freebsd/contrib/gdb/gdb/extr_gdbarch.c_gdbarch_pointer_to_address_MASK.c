
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* pointer_to_address ) (struct type*,void const*) ;} ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct type*,void const*) ;

CORE_ADDR
FUNC_3 (struct gdbarch *VAR_2, struct type *VAR_3, const void *VAR_4)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->pointer_to_address != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_pointer_to_address called\n");
  return VAR_2->pointer_to_address (VAR_3, VAR_4);
}
