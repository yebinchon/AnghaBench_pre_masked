
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_emitter_functions {int dummy; } ;
struct ucl_emitter_context_streamline {int const* top; struct ucl_emitter_functions* func; } ;
struct ucl_emitter_context {int dummy; } ;
typedef enum ucl_emitter { ____Placeholder_ucl_emitter } ucl_emitter ;


 struct ucl_emitter_context_streamline* FUNC_0 (int,int) ;
 int FUNC_1 (struct ucl_emitter_context_streamline*,struct ucl_emitter_context const*,int) ;
 struct ucl_emitter_context* FUNC_2 (int) ;
 int FUNC_3 (struct ucl_emitter_context*,int const*) ;

struct ucl_emitter_context*
FUNC_4 (const ucl_object_t *VAR_0,
  enum ucl_emitter VAR_1,
  struct ucl_emitter_functions *VAR_2)
{
 const struct ucl_emitter_context *VAR_3;
 struct ucl_emitter_context_streamline *VAR_4;

 VAR_3 = FUNC_2 (VAR_1);
 if (VAR_3 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_4 = FUNC_0 (1, sizeof (*VAR_4));
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_1 (VAR_4, VAR_3, sizeof (*VAR_3));
 VAR_4->func = VAR_2;
 VAR_4->top = VAR_0;

 FUNC_3 ((struct ucl_emitter_context *)VAR_4,
   VAR_0);

 return (struct ucl_emitter_context *)VAR_4;
}
