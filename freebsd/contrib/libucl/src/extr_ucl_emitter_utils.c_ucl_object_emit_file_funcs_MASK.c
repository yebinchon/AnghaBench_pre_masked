
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int * ud; int * ucl_emitter_free_func; int ucl_emitter_append_len; int ucl_emitter_append_int; int ucl_emitter_append_double; int ucl_emitter_append_character; } ;
typedef int FILE ;


 struct ucl_emitter_functions* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct ucl_emitter_functions*
FUNC_1 (FILE *VAR_4)
{
 struct ucl_emitter_functions *VAR_5;

 VAR_5 = FUNC_0 (1, sizeof (*VAR_5));

 if (VAR_5 != ((void*)0)) {
  VAR_5->ucl_emitter_append_character = VAR_0;
  VAR_5->ucl_emitter_append_double = VAR_1;
  VAR_5->ucl_emitter_append_int = VAR_2;
  VAR_5->ucl_emitter_append_len = VAR_3;
  VAR_5->ucl_emitter_free_func = ((void*)0);
  VAR_5->ud = VAR_4;
 }

 return VAR_5;
}
