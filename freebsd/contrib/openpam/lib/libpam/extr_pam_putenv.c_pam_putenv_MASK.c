
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** env; size_t env_count; size_t env_size; } ;
typedef TYPE_1__ pam_handle_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;
 char** FUNC_4 (char**,int) ;
 char* FUNC_5 (char const*,char) ;
 void* FUNC_6 (char const*) ;

int
FUNC_7(pam_handle_t *VAR_5,
 const char *VAR_6)
{
 char **VAR_7, *VAR_8;
 size_t VAR_9;
 int VAR_10;

 FUNC_0();


 if ((VAR_8 = FUNC_5(VAR_6, '=')) == ((void*)0)) {
  VAR_4 = VAR_0;
  FUNC_2(VAR_3);
 }


 if ((VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_8 - VAR_6)) >= 0) {
  if ((VAR_8 = FUNC_6(VAR_6)) == ((void*)0))
   FUNC_2(VAR_1);
  FUNC_1(VAR_5->env[VAR_10]);
  VAR_5->env[VAR_10] = VAR_8;
  FUNC_2(VAR_2);
 }


 if (VAR_5->env_count == VAR_5->env_size) {
  VAR_9 = VAR_5->env_size * 2 + 1;
  VAR_7 = FUNC_4(VAR_5->env, sizeof(char *) * VAR_9);
  if (VAR_7 == ((void*)0))
   FUNC_2(VAR_1);
  VAR_5->env = VAR_7;
  VAR_5->env_size = VAR_9;
 }


 if ((VAR_5->env[VAR_5->env_count] = FUNC_6(VAR_6)) == ((void*)0))
  FUNC_2(VAR_1);
 ++VAR_5->env_count;
 FUNC_2(VAR_2);
}
