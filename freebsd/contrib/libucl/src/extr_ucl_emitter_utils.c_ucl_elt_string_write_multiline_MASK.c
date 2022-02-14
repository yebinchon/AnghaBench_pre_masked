
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_len ) (char*,int,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (char*,int,int ) ;

void
FUNC_3 (const char *VAR_0, size_t VAR_1,
  struct ucl_emitter_context *VAR_2)
{
 const struct ucl_emitter_functions *VAR_3 = VAR_2->func;

 VAR_3->ucl_emitter_append_len ("<<EOD\n", sizeof ("<<EOD\n") - 1, VAR_3->ud);
 VAR_3->ucl_emitter_append_len (VAR_0, VAR_1, VAR_3->ud);
 VAR_3->ucl_emitter_append_len ("\nEOD", sizeof ("\nEOD") - 1, VAR_3->ud);
}
