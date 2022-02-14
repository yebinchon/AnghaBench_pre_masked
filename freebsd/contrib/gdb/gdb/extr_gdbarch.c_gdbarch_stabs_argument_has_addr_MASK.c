
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* stabs_argument_has_addr ) (struct gdbarch*,struct type*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,struct type*) ;

int
FUNC_3 (struct gdbarch *VAR_2, struct type *VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->stabs_argument_has_addr != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_stabs_argument_has_addr called\n");
  return VAR_2->stabs_argument_has_addr (VAR_2, VAR_3);
}
