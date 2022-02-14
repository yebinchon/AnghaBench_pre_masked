
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int fs; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int mergeinfo_count; } ;
typedef TYPE_2__ node_revision_t ;
struct TYPE_15__ {scalar_t__ kind; } ;
typedef TYPE_3__ dag_node_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ,int *,int ,...) ;
 int FUNC_4 (TYPE_3__*,char const*) ;
 int * FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (TYPE_2__**,int *,int const*,TYPE_1__*,int *) ;
 int * FUNC_9 (int *,int const*,TYPE_2__*,TYPE_1__*,int *) ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_10(dag_node_t *VAR_6,
                                        apr_int64_t VAR_7,
                                        const char *VAR_8,
                                        trail_t *VAR_9,
                                        apr_pool_t *VAR_10)
{
  node_revision_t *VAR_11;
  svn_fs_t *VAR_12 = FUNC_5(VAR_6);
  const svn_fs_id_t *VAR_13 = FUNC_6(VAR_6);

  FUNC_0(FUNC_7
          (VAR_9->fs, "mergeinfo", VAR_3));

  if (! FUNC_4(VAR_6, VAR_8))
    return FUNC_3(VAR_2, ((void*)0),
                             FUNC_1("Attempted mergeinfo count change on "
                               "immutable node"));

  if (VAR_7 == 0)
    return VAR_4;

  FUNC_0(FUNC_8(&VAR_11, VAR_12, VAR_13, VAR_9, VAR_10));
  VAR_11->mergeinfo_count = VAR_11->mergeinfo_count + VAR_7;
  if ((VAR_11->mergeinfo_count < 0)
      || ((VAR_6->kind == VAR_5) && (VAR_11->mergeinfo_count > 1)))
    return FUNC_3(VAR_1, ((void*)0),
                             FUNC_2(VAR_10,
                                          FUNC_1("Invalid value (%%%s) for node "
                                            "revision mergeinfo count"),
                                          VAR_0),
                             VAR_11->mergeinfo_count);

  return FUNC_9(VAR_12, VAR_13, VAR_11, VAR_9, VAR_10);
}
