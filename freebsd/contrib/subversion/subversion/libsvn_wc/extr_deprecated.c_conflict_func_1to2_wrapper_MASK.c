
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_conflict_result_t ;
typedef int svn_wc_conflict_description_t ;
typedef int svn_wc_conflict_description2_t ;
typedef int svn_error_t ;
struct conflict_func_1to2_baton {int inner_baton; int (* inner_func ) (int **,int *,int ,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int **,int *,int ,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_wc_conflict_result_t **VAR_0,
                           const svn_wc_conflict_description2_t *VAR_1,
                           void *VAR_2,
                           apr_pool_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  struct conflict_func_1to2_baton *VAR_5 = VAR_2;
  svn_wc_conflict_description_t *VAR_6 = FUNC_2(VAR_1,
                                                        VAR_4);

  return FUNC_1(VAR_5->inner_func(VAR_0, VAR_6, VAR_5->inner_baton,
                                         VAR_3));
}
