
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct fp_baton {int cb_baton; int (* provide_props_cb ) (int **,int *,int ,char const*,int *,int *) ;} ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int **,int *,int ,char const*,int *,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_hash_t **VAR_0,
            void *VAR_1,
            const char *VAR_2,
            svn_revnum_t VAR_3,
            apr_pool_t *VAR_4,
            apr_pool_t *VAR_5)
{
  struct fp_baton *VAR_6 = VAR_1;
  svn_revnum_t VAR_7;



  return FUNC_1(VAR_6->provide_props_cb(VAR_0, &VAR_7,
                                               VAR_6->cb_baton,
                                               VAR_2,
                                               VAR_4, VAR_5));
}
