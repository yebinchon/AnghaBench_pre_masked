
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int* ud; int (* ucl_emitter_free_func ) (struct ucl_emitter_functions*) ;int ucl_emitter_append_len; int ucl_emitter_append_int; int ucl_emitter_append_double; int ucl_emitter_append_character; } ;
typedef int fd ;


 struct ucl_emitter_functions* FUNC_0 (int,int) ;
 int FUNC_1 (struct ucl_emitter_functions*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct ucl_emitter_functions*
FUNC_4 (int VAR_4)
{
 struct ucl_emitter_functions *VAR_5;
 int *VAR_6;

 VAR_5 = FUNC_0 (1, sizeof (*VAR_5));

 if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_2 (sizeof (VAR_4));
  if (VAR_6 == ((void*)0)) {
   FUNC_1 (VAR_5);
   return ((void*)0);
  }

  FUNC_3 (VAR_6, &VAR_4, sizeof (VAR_4));
  VAR_5->ucl_emitter_append_character = VAR_0;
  VAR_5->ucl_emitter_append_double = VAR_1;
  VAR_5->ucl_emitter_append_int = VAR_2;
  VAR_5->ucl_emitter_append_len = VAR_3;
  VAR_5->ucl_emitter_free_func = FUNC_1;
  VAR_5->ud = VAR_6;
 }

 return VAR_5;
}
