
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
typedef int * svn_mergeinfo_t ;
typedef scalar_t__ svn_mergeinfo_catalog_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (scalar_t__*,char const**,char const*,int const*,int ,int ,TYPE_1__*,int *,int *,int *) ;
 int FUNC_3 (int **,int *,char const*,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *) ;
 int * FUNC_5 (scalar_t__,char const*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char const*,int *) ;
 int FUNC_8 (int *,char const**,int *,int *,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_9(apr_hash_t **VAR_2,
                                const char *VAR_3,
                                const svn_opt_revision_t *VAR_4,
                                svn_client_ctx_t *VAR_5,
                                apr_pool_t *VAR_6)
{
  const char *VAR_7;
  svn_mergeinfo_catalog_t VAR_8;
  svn_mergeinfo_t VAR_9;

  FUNC_0(FUNC_2(&VAR_8, &VAR_7, VAR_3,
                        VAR_4, VAR_0, VAR_0, VAR_5, ((void*)0), VAR_6, VAR_6));
  if (VAR_8)
    {
      const char *VAR_10;

      if (! FUNC_6(VAR_3))
        {
          FUNC_0(FUNC_4(&VAR_3, VAR_3, VAR_6));
          FUNC_0(FUNC_8(((void*)0), &VAR_10, ((void*)0), ((void*)0),
                                              VAR_5->wc_ctx, VAR_3,
                                              VAR_6, VAR_6));
        }
      else
        {
          VAR_10 = FUNC_7(VAR_7, VAR_3, VAR_6);

          FUNC_1(VAR_10 != ((void*)0));
        }

      VAR_9 = FUNC_5(VAR_8, VAR_10);
    }
  else
    {
      VAR_9 = ((void*)0);
    }

  FUNC_0(FUNC_3(VAR_2, VAR_9,
                                     VAR_7, VAR_6, VAR_6));
  return VAR_1;
}
