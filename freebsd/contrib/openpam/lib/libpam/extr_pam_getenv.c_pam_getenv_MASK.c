
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** env; } ;
typedef TYPE_1__ pam_handle_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char const*,size_t) ;

const char *
FUNC_3(pam_handle_t *VAR_2,
 const char *VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 FUNC_0(VAR_3);
 for (VAR_4 = 0; VAR_3[VAR_4] != '\0'; ++VAR_4) {
  if (VAR_3[VAR_4] == '=') {
   VAR_1 = VAR_0;
   FUNC_1(((void*)0));
  }
 }
 if ((VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4)) < 0)
  FUNC_1(((void*)0));

 FUNC_1(VAR_2->env[VAR_5] + VAR_4 + 1);
}
