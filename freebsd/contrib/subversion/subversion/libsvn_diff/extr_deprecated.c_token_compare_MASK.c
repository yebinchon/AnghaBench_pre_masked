
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct fns_wrapper_baton {int old_baton; TYPE_1__* vtable; } ;
struct TYPE_2__ {int * (* token_compare ) (int ,void*,void*,int*) ;} ;


 int * FUNC_0 (int ,void*,void*,int*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
              void *VAR_1,
              void *VAR_2,
              int *VAR_3)
{
  struct fns_wrapper_baton *VAR_4 = VAR_0;
  return VAR_4->vtable->token_compare(VAR_4->old_baton, VAR_1, VAR_2, VAR_3);
}
