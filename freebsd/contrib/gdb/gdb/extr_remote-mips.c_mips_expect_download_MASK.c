
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3 (char *VAR_3)
{
  if (!FUNC_1 (VAR_3))
    {
      FUNC_0 (VAR_0, "Load did not complete successfully.\n");
      if (VAR_1)
 FUNC_2 (VAR_2);
      return 0;
    }
  else
    return 1;
}
