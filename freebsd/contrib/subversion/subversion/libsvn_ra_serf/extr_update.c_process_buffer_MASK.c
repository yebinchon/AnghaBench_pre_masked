
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inner_handler_baton; int * (* inner_handler ) (int *,int *,int ,int *) ;} ;
typedef TYPE_1__ update_delay_baton_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int serf_request_t ;
typedef int serf_bucket_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (void const*,int ,int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int ,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (void const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(update_delay_baton_t *VAR_0,
               serf_request_t *VAR_1,
               const void *VAR_2,
               apr_size_t VAR_3,
               svn_boolean_t VAR_4,
               serf_bucket_alloc_t *VAR_5,
               apr_pool_t *VAR_6)
{
  serf_bucket_t *VAR_7;
  svn_error_t *VAR_8;




  if (VAR_4)
  {
      VAR_7 = FUNC_1(VAR_2, VAR_3, ((void*)0), ((void*)0),
                                             VAR_5);
  }
  else
  {
      VAR_7 = FUNC_4(VAR_2, VAR_3,
                                                          VAR_5);
  }



  VAR_8 = VAR_0->inner_handler(VAR_1, VAR_7,
                           VAR_0->inner_handler_baton, VAR_6);



  FUNC_0(VAR_7);

  return FUNC_3(VAR_8);
}
