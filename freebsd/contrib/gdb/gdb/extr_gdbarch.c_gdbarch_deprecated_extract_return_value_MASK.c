
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int (* deprecated_extract_return_value ) (struct type*,char*,char*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct type*,char*,char*) ;

void
FUNC_3 (struct gdbarch *VAR_2, struct type *VAR_3, char *VAR_4, char *VAR_5)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->deprecated_extract_return_value != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_deprecated_extract_return_value called\n");
  VAR_2->deprecated_extract_return_value (VAR_3, VAR_4, VAR_5);
}
