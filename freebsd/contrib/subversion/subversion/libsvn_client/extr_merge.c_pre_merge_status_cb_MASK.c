
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ node_status; int depth; int file_external; scalar_t__ switched; } ;
typedef TYPE_1__ svn_wc_status3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct pre_merge_status_baton_t {int missing_subtrees; int shallow_subtrees; int pool; int switched_subtrees; } ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int) ;
 char* FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (int ,char const*,int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_6,
                    const char *VAR_7,
                    const svn_wc_status3_t *VAR_8,
                    apr_pool_t *VAR_9)
{
  struct pre_merge_status_baton_t *VAR_10 = VAR_6;

  if (VAR_8->switched && !VAR_8->file_external)
    {
      FUNC_5(VAR_10->switched_subtrees, VAR_7);
    }

  if (VAR_8->depth == VAR_3
      || VAR_8->depth == VAR_4)
    {
      const char *VAR_11;
      svn_depth_t *VAR_12 = FUNC_3(VAR_10->pool, &VAR_8->depth,
                                       sizeof *VAR_12);

      VAR_11 = FUNC_4(VAR_10->pool, VAR_7);

      FUNC_7(VAR_10->shallow_subtrees, VAR_11, VAR_12);
    }

  if (VAR_8->node_status == VAR_5)
    {
      svn_boolean_t VAR_13 = VAR_2;
      apr_hash_index_t *VAR_14;

      for (VAR_14 = FUNC_0(VAR_9, VAR_10->missing_subtrees);
           VAR_14;
           VAR_14 = FUNC_1(VAR_14))
        {
          const char *VAR_15 = FUNC_2(VAR_14);

          if (FUNC_6(VAR_15,
                                     VAR_7))
            {
              VAR_13 = VAR_0;
              break;
            }
        }

      if (VAR_13)
        FUNC_5(VAR_10->missing_subtrees, VAR_7);
    }

  return VAR_1;
}
