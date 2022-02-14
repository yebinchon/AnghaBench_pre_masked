
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status3_t ;
typedef int svn_wc_status2_t ;
typedef int svn_error_t ;
struct status4_wrapper_baton {int old_baton; int * (* old_func ) (int ,char const*,int *,int *) ;int * anchor_abspath; int anchor_relpath; int wc_ctx; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char const*,int *,int *) ;
 char* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int **,int const*,int ,char const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_0,
                     const char *VAR_1,
                     const svn_wc_status3_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  struct status4_wrapper_baton *VAR_4 = VAR_0;
  svn_wc_status2_t *VAR_5;
  const char *VAR_6 = VAR_1;

  FUNC_0(FUNC_4(&VAR_5, VAR_2, VAR_4->wc_ctx, VAR_1,
                                 VAR_3, VAR_3));

  if (VAR_4->anchor_abspath != ((void*)0))
    {
      VAR_6 = FUNC_2(
                VAR_4->anchor_relpath,
                FUNC_3(VAR_4->anchor_abspath, VAR_1),
                VAR_3);
    }

  return (*VAR_4->old_func)(VAR_4->old_baton, VAR_6, VAR_5, VAR_3);
}
