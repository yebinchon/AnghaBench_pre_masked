
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct merge_dir_baton_t {scalar_t__ pending_deletes; int pool; } ;
struct TYPE_5__ {scalar_t__ ancestral; } ;
struct TYPE_6__ {int merged_abspaths; scalar_t__ added_abspaths; scalar_t__ reintegrate_merge; TYPE_1__ merge_source; } ;
typedef TYPE_2__ merge_cmd_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*,int ,int *) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (scalar_t__,char const*,int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(merge_cmd_baton_t *VAR_2,
                     struct merge_dir_baton_t *VAR_3,
                     const char *VAR_4,
                     svn_node_kind_t VAR_5,
                     apr_pool_t *VAR_6)
{

  if (VAR_2->merge_source.ancestral
      || VAR_2->reintegrate_merge)
    {



      FUNC_5(VAR_2->added_abspaths, VAR_4, ((void*)0));
      FUNC_4(VAR_2->merged_abspaths, VAR_4);
    }

  FUNC_0(FUNC_3(VAR_2, VAR_4, VAR_1, VAR_6));

  if (VAR_3)
    {
      const char *VAR_7 = FUNC_2(VAR_3->pool, VAR_4);

      if (!VAR_3->pending_deletes)
        VAR_3->pending_deletes = FUNC_1(VAR_3->pool);

      FUNC_5(VAR_3->pending_deletes, VAR_7,
                    FUNC_6(VAR_5));
    }

  return VAR_0;
}
