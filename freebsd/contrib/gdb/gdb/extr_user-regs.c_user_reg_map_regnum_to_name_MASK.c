
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_reg {char const* name; } ;
struct gdbarch {int dummy; } ;


 int FUNC_0 (struct gdbarch*) ;
 int FUNC_1 (struct gdbarch*) ;
 char const* FUNC_2 (struct gdbarch*,int) ;
 struct user_reg* FUNC_3 (struct gdbarch*,int) ;

const char *
FUNC_4 (struct gdbarch *VAR_0, int VAR_1)
{
  int VAR_2 = (FUNC_1 (VAR_0)
   + FUNC_0 (VAR_0));
  if (VAR_1 < 0)
    return ((void*)0);
  else if (VAR_1 < VAR_2)
    return FUNC_2 (VAR_0, VAR_1);
  else
    {
      struct user_reg *VAR_3 = FUNC_3 (VAR_0, VAR_1 - VAR_2);
      if (VAR_3 == ((void*)0))
 return ((void*)0);
      else
 return VAR_3->name;
    }
}
