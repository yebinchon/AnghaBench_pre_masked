
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

void
FUNC_4 (const char *VAR_3, int VAR_4)
{

  FUNC_1 (FUNC_0("LIBRARY: %s base: %x"), VAR_3, VAR_4);

  if (VAR_1)
    FUNC_2 (FUNC_0("Can't have LIBRARY and NAME"));


  if (! VAR_2)
    FUNC_3 (VAR_3);
  VAR_0 = 1;
}
