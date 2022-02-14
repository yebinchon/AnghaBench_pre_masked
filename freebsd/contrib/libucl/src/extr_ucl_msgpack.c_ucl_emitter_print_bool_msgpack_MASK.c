
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_character ) (unsigned char const,int,int ) ;} ;
struct ucl_emitter_context {struct ucl_emitter_functions* func; } ;


 int FUNC_0 (unsigned char const,int,int ) ;

void
FUNC_1 (struct ucl_emitter_context *VAR_0, bool VAR_1)
{
 const struct ucl_emitter_functions *VAR_2 = VAR_0->func;
 const unsigned char VAR_3 = 0xc3, VAR_4 = 0xc2;

 VAR_2->ucl_emitter_append_character (VAR_1 ? VAR_3 : VAR_4, 1, VAR_2->ud);
}
