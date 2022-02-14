
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {struct type* (* register_type ) (struct gdbarch*,int) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct type* FUNC_2 (struct gdbarch*,int) ;

struct type *
FUNC_3 (struct gdbarch *VAR_2, int VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->register_type != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_register_type called\n");
  return VAR_2->register_type (VAR_2, VAR_3);
}
