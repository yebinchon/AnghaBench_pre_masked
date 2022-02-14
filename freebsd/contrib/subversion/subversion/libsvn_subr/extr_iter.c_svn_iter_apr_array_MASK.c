
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* (* svn_iter_apr_array_cb_t ) (void*,void*,int *) ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_12__ {int nelts; int elt_size; void* elts; } ;
typedef TYPE_3__ apr_array_header_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__* FUNC_0 (void*,void*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_boolean_t *VAR_3,
                   const apr_array_header_t *VAR_4,
                   svn_iter_apr_array_cb_t VAR_5,
                   void *VAR_6,
                   apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8 = VAR_1;
  apr_pool_t *VAR_9 = FUNC_3(VAR_7);
  int VAR_10;

  for (VAR_10 = 0; (! VAR_8) && VAR_10 < VAR_4->nelts; ++VAR_10)
    {
      void *VAR_11 = VAR_4->elts + VAR_4->elt_size*VAR_10;

      FUNC_2(VAR_9);

      VAR_8 = (*VAR_5)(VAR_6, VAR_11, VAR_9);
    }

  if (VAR_3)
    *VAR_3 = ! VAR_8;

  if (VAR_8 && VAR_8->apr_err == VAR_0)
    {
      if (VAR_8 != &VAR_2)


        FUNC_1(VAR_8);

      VAR_8 = VAR_1;
    }



  FUNC_4(VAR_9);

  return VAR_8;
}
