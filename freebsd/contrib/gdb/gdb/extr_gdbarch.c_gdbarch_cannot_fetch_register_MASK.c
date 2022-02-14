
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int (* cannot_fetch_register ) (int) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

int
FUNC_3 (struct gdbarch *VAR_2, int VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->cannot_fetch_register != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_cannot_fetch_register called\n");
  return VAR_2->cannot_fetch_register (VAR_3);
}
