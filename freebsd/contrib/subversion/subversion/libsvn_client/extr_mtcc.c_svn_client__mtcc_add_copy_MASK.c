
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_6__ {scalar_t__ head_revision; int pool; int root_op; int ra_session; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {scalar_t__ src_rev; int src_relpath; int kind; } ;
typedef TYPE_2__ mtcc_op_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (TYPE_2__**,int *,char const*,int ,int ,int ,int,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,char const*,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (int ,char const*,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ FUNC_9 (char const*) ;

svn_error_t *
FUNC_10(const char *VAR_9,
                          svn_revnum_t VAR_10,
                          const char *VAR_11,
                          svn_client__mtcc_t *VAR_12,
                          apr_pool_t *VAR_13)
{
  mtcc_op_t *VAR_14;
  svn_boolean_t VAR_15;
  svn_node_kind_t VAR_16;

  FUNC_1(FUNC_9(VAR_9)
                 && FUNC_9(VAR_11));

  if (! FUNC_2(VAR_10))
    VAR_10 = VAR_12->head_revision;
  else if (VAR_10 > VAR_12->head_revision)
    {
      return FUNC_7(VAR_4, ((void*)0),
                               FUNC_3("No such revision %ld"), VAR_10);
    }

  FUNC_0(FUNC_6(VAR_12, VAR_11, VAR_13));


  FUNC_0(FUNC_8(VAR_12->ra_session, VAR_9, VAR_10, &VAR_16,
                            VAR_13));

  if (VAR_16 != VAR_7 && VAR_16 != VAR_8)
    {
      return FUNC_7(VAR_3, ((void*)0),
                               FUNC_3("Path '%s' not found in revision %ld"),
                               VAR_9, VAR_10);
    }

  FUNC_0(FUNC_5(&VAR_14, &VAR_15, VAR_11, VAR_12->root_op, VAR_0, VAR_0,
                       (VAR_16 == VAR_8), VAR_12->pool, VAR_13));

  if (!VAR_14 || !VAR_15)
    {
      return FUNC_7(VAR_5, ((void*)0),
                               FUNC_3("Can't add node at '%s'"),
                               VAR_11);
    }

  VAR_14->kind = (VAR_16 == VAR_8) ? VAR_2 : VAR_1;
  VAR_14->src_relpath = FUNC_4(VAR_12->pool, VAR_9);
  VAR_14->src_rev = VAR_10;

  return VAR_6;
}
