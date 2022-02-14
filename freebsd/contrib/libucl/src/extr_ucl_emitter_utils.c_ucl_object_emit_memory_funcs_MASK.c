
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ucl_emitter_functions {TYPE_1__* ud; int ucl_emitter_free_func; int ucl_emitter_append_len; int ucl_emitter_append_int; int ucl_emitter_append_double; int ucl_emitter_append_character; } ;
struct TYPE_3__ {void** pd; void* d; } ;
typedef TYPE_1__ UT_string ;


 struct ucl_emitter_functions* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

struct ucl_emitter_functions*
FUNC_2 (void **VAR_5)
{
 struct ucl_emitter_functions *VAR_6;
 UT_string *VAR_7;

 VAR_6 = FUNC_0 (1, sizeof (*VAR_6));

 if (VAR_6 != ((void*)0)) {
  VAR_6->ucl_emitter_append_character = VAR_1;
  VAR_6->ucl_emitter_append_double = VAR_2;
  VAR_6->ucl_emitter_append_int = VAR_3;
  VAR_6->ucl_emitter_append_len = VAR_4;
  VAR_6->ucl_emitter_free_func = VAR_0;
  FUNC_1 (VAR_7);
  VAR_6->ud = VAR_7;
  *VAR_5 = VAR_7->d;
  VAR_7->pd = VAR_5;
 }

 return VAR_6;
}
