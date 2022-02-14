
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_character ) (unsigned char const,int,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;


 int FUNC_0 (unsigned char const,int,int ) ;

void
FUNC_1 (struct ucl_emitter_context *VAR_0)
{
 const struct ucl_emitter_functions *VAR_1 = VAR_0->func;
 const unsigned char VAR_2 = 0xc0;

 VAR_1->ucl_emitter_append_character (VAR_2, 1, VAR_1->ud);
}
