
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  if (FUNC_3 (VAR_2))
    FUNC_1 (VAR_0, 0, "%s", FUNC_0("write failed"));
  else if (FUNC_2 (VAR_2) != 0)
    FUNC_1 (VAR_0, VAR_1, "%s", FUNC_0("standard output"));
}
