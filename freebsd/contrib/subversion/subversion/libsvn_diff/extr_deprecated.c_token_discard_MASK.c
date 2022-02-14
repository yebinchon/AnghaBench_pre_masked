
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fns_wrapper_baton {int old_baton; TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* token_discard ) (int ,void*) ;} ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0,
              void *VAR_1)
{
  struct fns_wrapper_baton *VAR_2 = VAR_0;
  VAR_2->vtable->token_discard(VAR_2->old_baton, VAR_1);
}
