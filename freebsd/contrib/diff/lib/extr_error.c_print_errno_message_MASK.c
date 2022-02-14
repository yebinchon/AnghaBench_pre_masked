
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,char const*) ;
 char* FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int VAR_0 ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (int VAR_1)
{
  char const *VAR_2;
  VAR_2 = FUNC_5 (VAR_1);



  if (! VAR_2)
    VAR_2 = FUNC_0("Unknown system error");
  FUNC_4 (VAR_0, ": %s", VAR_2);
}
