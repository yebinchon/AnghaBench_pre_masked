
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  FUNC_0 ("ia64-raw.tbl", VAR_0);
  FUNC_0 ("ia64-waw.tbl", VAR_2);
  FUNC_0 ("ia64-war.tbl", VAR_1);

  if (VAR_3)
    FUNC_1 ("%d RAW/WAW/WAR dependencies\n", VAR_4);
}
