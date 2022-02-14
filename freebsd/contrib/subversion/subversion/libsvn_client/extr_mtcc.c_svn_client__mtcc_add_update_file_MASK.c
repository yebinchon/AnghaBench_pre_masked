
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int pool; int root_op; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {scalar_t__ kind; int * base_checksum; int * base_stream; int * src_checksum; int * src_stream; } ;
typedef TYPE_2__ mtcc_op_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__**,int *,char const*,int ,int ,int ,int ,int ,int *) ;
 int * FUNC_4 (int const*,int ) ;
 int FUNC_5 (scalar_t__*,char const*,int ,TYPE_1__*,int *) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (char const*) ;

svn_error_t *
FUNC_8(const char *VAR_8,
                                 svn_stream_t *VAR_9,
                                 const svn_checksum_t *VAR_10,
                                 svn_stream_t *VAR_11,
                                 const svn_checksum_t *VAR_12,
                                 svn_client__mtcc_t *VAR_13,
                                 apr_pool_t *VAR_14)
{
  mtcc_op_t *VAR_15;
  svn_boolean_t VAR_16;
  svn_node_kind_t VAR_17;
  FUNC_1(FUNC_7(VAR_8) && VAR_9);

  FUNC_0(FUNC_5(&VAR_17, VAR_8, VAR_0,
                                      VAR_13, VAR_14));

  if (VAR_17 != VAR_7)
    return FUNC_6(VAR_3, ((void*)0),
                             FUNC_2("Can't update '%s' because it is not a file"),
                             VAR_8);

  FUNC_0(FUNC_3(&VAR_15, &VAR_16, VAR_8, VAR_13->root_op, VAR_6, VAR_0,
                       VAR_6, VAR_13->pool, VAR_14));

  if (!VAR_15
      || (VAR_15->kind != VAR_2 && VAR_15->kind != VAR_1)
      || (VAR_15->src_stream != ((void*)0)))
    {
      return FUNC_6(VAR_4, ((void*)0),
                               FUNC_2("Can't update file at '%s'"), VAR_8);
    }

  VAR_15->src_stream = VAR_9;
  VAR_15->src_checksum = VAR_10 ? FUNC_4(VAR_10, VAR_13->pool)
                                  : ((void*)0);

  VAR_15->base_stream = VAR_11;
  VAR_15->base_checksum = VAR_12 ? FUNC_4(VAR_12,
                                                       VAR_13->pool)
                                    : ((void*)0);

  return VAR_5;
}
