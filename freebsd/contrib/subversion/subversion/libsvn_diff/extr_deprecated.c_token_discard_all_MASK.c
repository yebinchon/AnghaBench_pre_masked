
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fns_wrapper_baton {int old_baton; TYPE_1__* vtable; } ;
struct TYPE_2__ {int (* token_discard_all ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
  struct fns_wrapper_baton *VAR_1 = VAR_0;
  VAR_1->vtable->token_discard_all(VAR_1->old_baton);
}
