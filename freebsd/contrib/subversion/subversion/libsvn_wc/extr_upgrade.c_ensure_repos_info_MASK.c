
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* svn_wc_upgrade_get_repos_info_t ) (int **,int **,void*,int *,int *,int *) ;
struct TYPE_3__ {int * url; int * uuid; int * repos; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int **,int **,void*,int *,int *,int *) ;
 int FUNC_6 (char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_wc_entry_t *VAR_2,
                  const char *VAR_3,
                  svn_wc_upgrade_get_repos_info_t VAR_4,
                  void *VAR_5,
                  apr_hash_t *VAR_6,
                  apr_pool_t *VAR_7,
                  apr_pool_t *VAR_8)
{

  if (VAR_2->repos != ((void*)0) && VAR_2->uuid != ((void*)0))
    return VAR_1;

  if ((VAR_2->repos == ((void*)0) || VAR_2->uuid == ((void*)0))
      && VAR_2->url)
    {
      apr_hash_index_t *VAR_9;

      for (VAR_9 = FUNC_1(VAR_8, VAR_6);
           VAR_9; VAR_9 = FUNC_2(VAR_9))
        {
          if (FUNC_9(FUNC_3(VAR_9), VAR_2->url))
            {
              if (!VAR_2->repos)
                VAR_2->repos = FUNC_3(VAR_9);

              if (!VAR_2->uuid)
                VAR_2->uuid = FUNC_4(VAR_9);

              return VAR_1;
            }
        }
    }

  if (VAR_2->repos == ((void*)0) && VAR_4 == ((void*)0))
    return FUNC_7(
        VAR_0, ((void*)0),
        FUNC_0("Working copy '%s' can't be upgraded because the repository root is "
          "not available and can't be retrieved"),
        FUNC_6(VAR_3, VAR_8));

  if (VAR_2->uuid == ((void*)0) && VAR_4 == ((void*)0))
    return FUNC_7(
        VAR_0, ((void*)0),
        FUNC_0("Working copy '%s' can't be upgraded because the repository uuid is "
          "not available and can't be retrieved"),
        FUNC_6(VAR_3, VAR_8));

   if (VAR_2->url == ((void*)0))
     return FUNC_7(
        VAR_0, ((void*)0),
        FUNC_0("Working copy '%s' can't be upgraded because it doesn't have a url"),
        FUNC_6(VAR_3, VAR_8));

   return FUNC_8((*VAR_4)(&VAR_2->repos, &VAR_2->uuid,
                                             VAR_5,
                                             VAR_2->url,
                                             VAR_7, VAR_8));
}
