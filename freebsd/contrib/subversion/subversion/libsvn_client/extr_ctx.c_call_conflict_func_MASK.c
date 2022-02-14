
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_wc_conflict_result_t ;
typedef int svn_wc_conflict_description_t ;
typedef int svn_wc_conflict_description2_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int conflict_baton; int (* conflict_func ) (int **,int const*,int ,int *) ;} ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int const*,int ,int *) ;
 int * FUNC_2 (int const*,int *) ;
 int VAR_1 ;
 int * FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc_conflict_result_t **VAR_2,
                   const svn_wc_conflict_description2_t *VAR_3,
                   void *VAR_4,
                   apr_pool_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  svn_client_ctx_t *VAR_7 = VAR_4;

  if (VAR_7->conflict_func)
    {
      const svn_wc_conflict_description_t *VAR_8;

      VAR_8 = FUNC_2(VAR_3, VAR_6);
      FUNC_0(VAR_7->conflict_func(VAR_2, VAR_8, VAR_7->conflict_baton,
                                 VAR_5));
    }
  else
    {

      *VAR_2 = FUNC_3(VAR_1,
                                              ((void*)0), VAR_5);
    }

  return VAR_0;
}
