
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_atomic_t ;
typedef int svn_atomic__err_init_func_t ;
struct TYPE_3__ {int * err; void* baton; int * pool; int err_init_func; } ;
typedef TYPE_1__ init_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int volatile*,int ,TYPE_1__*) ;
 int * FUNC_1 (int ,int *,char*) ;

svn_error_t *
FUNC_2(volatile svn_atomic_t *VAR_3,
                      svn_atomic__err_init_func_t VAR_4,
                      void *VAR_5,
                      apr_pool_t* VAR_6)
{
  init_baton_t VAR_7;
  VAR_7.err_init_func = VAR_4;
  VAR_7.err = ((void*)0);
  VAR_7.pool = VAR_6;
  VAR_7.baton = VAR_5;

  if (FUNC_0(VAR_3, VAR_2, &VAR_7))
    return VAR_1;

  return FUNC_1(VAR_0, VAR_7.err,
                          "Couldn't perform atomic initialization");
}
