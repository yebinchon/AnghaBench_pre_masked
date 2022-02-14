
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_info_t ;
typedef int svn_error_t ;
typedef int svn_client_info2_t ;
struct info_to_relpath_baton {int info_baton; int (* info_receiver ) (int ,char const*,int *,int *) ;int wc_ctx; int anchor_abspath; scalar_t__ anchor_relpath; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int const*,int *) ;
 int FUNC_2 (int ,char const*,int *,int *) ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 char* FUNC_4 (scalar_t__,int ,int *) ;
 int FUNC_5 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_1,
                              const char *VAR_2,
                              const svn_client_info2_t *VAR_3,
                              apr_pool_t *VAR_4)
{
  struct info_to_relpath_baton *VAR_5 = VAR_1;
  const char *VAR_6 = VAR_2;
  svn_info_t *VAR_7;

  if (VAR_5->anchor_relpath &&
      FUNC_3(VAR_5->anchor_abspath, VAR_2))
    {
      VAR_6 = FUNC_4(VAR_5->anchor_relpath,
                             FUNC_5(VAR_5->anchor_abspath,
                                                      VAR_2),
                             VAR_4);
    }

  FUNC_0(FUNC_1(&VAR_7, VAR_5->wc_ctx, VAR_3, VAR_4));

  FUNC_0(VAR_5->info_receiver(VAR_5->info_baton,
                            VAR_6,
                            VAR_7,
                            VAR_4));

  return VAR_0;
}
