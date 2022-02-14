
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef scalar_t__ svn_mergeinfo_t ;
struct TYPE_4__ {int changed_paths2; int revision; } ;
typedef TYPE_1__ svn_log_entry_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_5__ {char* source_repos_rel_path; int * result_pool; int unmerged_catalog; int merged_catalog; int target_fspath; } ;
typedef TYPE_2__ log_find_operative_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*,int ) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (int *,char const*,scalar_t__) ;
 int FUNC_7 (int *,char const**,char const*,scalar_t__,int ,int *,int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 char* FUNC_9 (int ,char const*) ;
 scalar_t__ FUNC_10 (int ,char const*) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_13 (scalar_t__*,int ,int *) ;
 char* FUNC_14 (char*,char const*,int *) ;
 char* FUNC_15 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_16(void *VAR_1,
                        svn_log_entry_t *VAR_2,
                        apr_pool_t *VAR_3)
{
  log_find_operative_baton_t *VAR_4 = VAR_1;
  apr_hash_index_t *VAR_5;
  svn_revnum_t VAR_6;



  if (!VAR_2->changed_paths2)
    return VAR_0;

  VAR_6 = VAR_2->revision;

  for (VAR_5 = FUNC_1(VAR_3, VAR_2->changed_paths2);
       VAR_5;
       VAR_5 = FUNC_2(VAR_5))
    {
      const char *VAR_7;
      const char *VAR_8 = FUNC_3(VAR_5);
      const char *VAR_9;
      const char *VAR_10;
      svn_boolean_t VAR_11;
      svn_mergeinfo_t VAR_12;

      VAR_9 = FUNC_9(VAR_4->target_fspath, VAR_8);

      if (VAR_9 == ((void*)0))
        continue;

      VAR_10 = FUNC_14(VAR_4->source_repos_rel_path,
                                         VAR_9, VAR_3);

      FUNC_0(FUNC_13(&VAR_12,
                                  FUNC_4(VAR_3, "%s:%ld",
                                               VAR_8, VAR_6),
                                  VAR_3));

      FUNC_0(FUNC_7(&VAR_11, &VAR_7,
                                   VAR_10, VAR_12,
                                   VAR_4->merged_catalog,
                                   VAR_3, VAR_3));

      if (!VAR_11)
        {
          svn_mergeinfo_t VAR_13;
          const char *VAR_14, *VAR_15;




          if (!VAR_7)
            VAR_7 = VAR_4->source_repos_rel_path;

          VAR_14 = FUNC_15(VAR_7,
                                             VAR_10);
          if (VAR_14 && VAR_14[0] != '\0')
            {
              VAR_15 = FUNC_6(VAR_3, VAR_8,
                                            FUNC_8(VAR_8) - FUNC_8(VAR_14) - 1);
            }
          else
            {
              VAR_15 = VAR_8;
            }

          FUNC_0(FUNC_13(&VAR_12,
                                      FUNC_4(VAR_3, "%s:%ld",
                                                   VAR_15, VAR_6),
                                      VAR_4->result_pool));
          VAR_13 = FUNC_10(VAR_4->unmerged_catalog,
                                           VAR_7);

          if (VAR_13)
            {
              FUNC_0(FUNC_12(VAR_13,
                                           VAR_12,
                                           VAR_4->result_pool,
                                           VAR_3));
            }
          else
            {
              FUNC_11(VAR_4->unmerged_catalog,
                            FUNC_5(VAR_4->result_pool,
                                        VAR_7),
                            VAR_12);
            }

        }
    }
  return VAR_0;
}
