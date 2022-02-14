
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gdbarch* VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct gdbarch*,char*,int*) ;
 scalar_t__ FUNC_2 (struct gdbarch*) ;
 int FUNC_3 (char*,char*) ;

extern int
FUNC_4 (char *VAR_3)
{
  struct gdbarch *VAR_4 = VAR_2;
  int VAR_5;

  if (!FUNC_3 (VAR_3, "code"))
    return VAR_0;
  else if (!FUNC_3 (VAR_3, "data"))
    return VAR_1;
  else if (FUNC_2 (VAR_4)
           && FUNC_1 (VAR_4,
       VAR_3,
       &VAR_5))
    return VAR_5;
  else
    FUNC_0 ("Unknown address space specifier: \"%s\"", VAR_3);
}
