
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int env_count; char** env; } ;
typedef TYPE_1__ pam_handle_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

int
FUNC_3(pam_handle_t *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 int VAR_5;

 FUNC_0();
 for (VAR_5 = 0; VAR_5 < VAR_2->env_count; ++VAR_5)
  if (FUNC_2(VAR_2->env[VAR_5], VAR_3, VAR_4) == 0 &&
      VAR_2->env[VAR_5][VAR_4] == '=')
   FUNC_1(VAR_5);
 VAR_1 = VAR_0;
 FUNC_1(-1);
}
