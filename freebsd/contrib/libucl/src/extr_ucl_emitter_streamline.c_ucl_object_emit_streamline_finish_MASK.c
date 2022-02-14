
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_context_streamline {int * containers; } ;
struct ucl_emitter_context {int dummy; } ;


 struct ucl_emitter_context_streamline* FUNC_0 (struct ucl_emitter_context*) ;
 int FUNC_1 (struct ucl_emitter_context_streamline*) ;
 int FUNC_2 (struct ucl_emitter_context*) ;

void
FUNC_3 (struct ucl_emitter_context *VAR_0)
{
 struct ucl_emitter_context_streamline *VAR_1 = FUNC_0(VAR_0);

 while (VAR_1->containers != ((void*)0)) {
  FUNC_2 (VAR_0);
 }

 FUNC_1 (VAR_1);
}
