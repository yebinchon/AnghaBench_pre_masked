
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_6__ {int changed_paths2; } ;
typedef TYPE_1__ svn_log_entry_t ;
struct TYPE_7__ {scalar_t__ node_kind; char action; } ;
typedef TYPE_2__ svn_log_changed_path2_t ;
typedef int svn_error_t ;
struct TYPE_8__ {scalar_t__ depth; int result_pool; int operative_children; int merge_target_abspath; int wc_ctx; int merge_source_fspath; } ;
typedef TYPE_3__ log_find_operative_subtree_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (int ,char const*,int *) ;
 char* FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (char const*,int *) ;
 int FUNC_14 (scalar_t__*,int ,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(void *VAR_6,
                                svn_log_entry_t *VAR_7,
                                apr_pool_t *VAR_8)
{
  log_find_operative_subtree_baton_t *VAR_9 = VAR_6;
  apr_hash_index_t *VAR_10;
  apr_pool_t *VAR_11;



  if (!VAR_7->changed_paths2)
    return VAR_1;

  VAR_11 = FUNC_11(VAR_8);

  for (VAR_10 = FUNC_1(VAR_8, VAR_7->changed_paths2);
       VAR_10;
       VAR_10 = FUNC_2(VAR_10))
    {
      const char *VAR_12 = FUNC_3(VAR_10);
      svn_log_changed_path2_t *VAR_13 = FUNC_4(VAR_10);

        {
          const char *VAR_14;
          const char *VAR_15;
          const char *VAR_16 =
            FUNC_7(VAR_9->merge_source_fspath, VAR_12);




          if (VAR_16 == ((void*)0)
              || VAR_16[0] == '\0')
            continue;

          FUNC_10(VAR_11);

          VAR_14 = FUNC_13(VAR_16, VAR_11);
          if (VAR_14[0] == '\0')
            {






              svn_node_kind_t VAR_17;

              if (VAR_13->node_kind == VAR_5)
                {
                  const char *VAR_18 =
                    FUNC_6(VAR_9->merge_target_abspath,
                                    VAR_16, VAR_11);

                  FUNC_0(FUNC_14(&VAR_17, VAR_9->wc_ctx,
                                            VAR_18, VAR_0, VAR_0,
                                            VAR_11));
                }
              else
                {
                  VAR_17 = VAR_13->node_kind;
                }



              if (VAR_9->depth == VAR_2
                  && VAR_17 != VAR_4)
                continue;





              if (VAR_9->depth == VAR_3)
                continue;

              VAR_14 = VAR_16;
            }

          VAR_15 = FUNC_6(VAR_9->merge_target_abspath,
                                            VAR_14, VAR_11);

          if (VAR_13->action == 'A'
              || !FUNC_8(VAR_9->operative_children,
                                VAR_15))
            {
              FUNC_9(VAR_9->operative_children,
                            FUNC_5(VAR_9->result_pool,
                                        VAR_15),
                            FUNC_5(VAR_9->result_pool, VAR_12));
            }
        }
    }
  FUNC_12(VAR_11);
  return VAR_1;
}
