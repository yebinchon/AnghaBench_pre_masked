
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gdbarch* VAR_3 ;
 char const* FUNC_0 (struct gdbarch*,int) ;
 scalar_t__ FUNC_1 (struct gdbarch*) ;

const char *
FUNC_2 (int VAR_4)
{
  struct gdbarch *VAR_5 = VAR_3;
  if (VAR_4 & VAR_1)
    return "code";
  else if (VAR_4 & VAR_2)
    return "data";
  else if ((VAR_4 & VAR_0)
           && FUNC_1 (VAR_5))
    return FUNC_0 (VAR_5, VAR_4);
  else
    return ((void*)0);
}
