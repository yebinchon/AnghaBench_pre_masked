
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__committables_t ;
typedef int svn_client__check_url_kind_t ;
struct copy_committables_baton {void* check_url_baton; int check_url_func; int * result_pool; int * committables; int * ctx; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int **,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int const*,int ,struct copy_committables_baton*,int *) ;

svn_error_t *
FUNC_2(svn_client__committables_t **VAR_1,
                                  const apr_array_header_t *VAR_2,
                                  svn_client__check_url_kind_t VAR_3,
                                  void *VAR_4,
                                  svn_client_ctx_t *VAR_5,
                                  apr_pool_t *VAR_6,
                                  apr_pool_t *VAR_7)
{
  struct copy_committables_baton VAR_8;


  FUNC_0(VAR_1, VAR_6);

  VAR_8.ctx = VAR_5;
  VAR_8.committables = *VAR_1;
  VAR_8.result_pool = VAR_6;

  VAR_8.check_url_func = VAR_3;
  VAR_8.check_url_baton = VAR_4;



  return FUNC_1(((void*)0), VAR_2,
                            VAR_0, &VAR_8, VAR_7);
}
