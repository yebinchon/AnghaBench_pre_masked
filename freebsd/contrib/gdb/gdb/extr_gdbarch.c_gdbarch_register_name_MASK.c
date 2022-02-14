
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {char const* (* register_name ) (int) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* FUNC_2 (int) ;

const char *
FUNC_3 (struct gdbarch *VAR_2, int VAR_3)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->register_name != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_register_name called\n");
  return VAR_2->register_name (VAR_3);
}
