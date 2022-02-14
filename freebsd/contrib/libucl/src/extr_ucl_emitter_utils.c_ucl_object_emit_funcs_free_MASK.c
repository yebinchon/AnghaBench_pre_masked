
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucl_emitter_functions {int ud; int (* ucl_emitter_free_func ) (int ) ;} ;


 int FUNC_0 (struct ucl_emitter_functions*) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct ucl_emitter_functions *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->ucl_emitter_free_func != ((void*)0)) {
   VAR_0->ucl_emitter_free_func (VAR_0->ud);
  }
  FUNC_0 (VAR_0);
 }
}
