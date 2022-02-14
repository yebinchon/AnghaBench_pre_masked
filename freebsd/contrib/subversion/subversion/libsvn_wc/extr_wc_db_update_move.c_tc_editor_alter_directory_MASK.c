
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int * props; int * checksum; int location_and_kind; } ;
typedef TYPE_1__ working_node_version_t ;
struct TYPE_15__ {int db; TYPE_7__* wcroot; int operation; int dst_op_depth; int new_version; int old_version; } ;
typedef TYPE_2__ update_move_baton_t ;
typedef scalar_t__ svn_wc_notify_state_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_16__ {scalar_t__ skip; TYPE_2__* umb; } ;
typedef TYPE_3__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_17__ {int abspath; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char const*,int ,char const*,int *,int ,TYPE_1__*,TYPE_1__*,scalar_t__,int,int *,int *) ;
 int FUNC_2 (int **,TYPE_3__*,char const*,scalar_t__,scalar_t__,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 char* FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_7__*,char const*,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_7__*,char const*,int ,int ,scalar_t__,int ,scalar_t__,int *,int *,int *) ;
 int FUNC_8 (scalar_t__*,int **,int **,int **,TYPE_2__*,char const*,TYPE_1__*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(node_move_baton_t *VAR_10,
                          const char *VAR_11,
                          apr_hash_t *VAR_12,
                          apr_hash_t *VAR_13,
                          apr_pool_t *VAR_14)
{
  update_move_baton_t *VAR_15 = VAR_10->umb;
  working_node_version_t VAR_16, VAR_17;
  svn_skel_t *VAR_18 = ((void*)0);
  svn_skel_t *VAR_19 = ((void*)0);
  const char *VAR_20 = FUNC_4(VAR_15->wcroot->abspath, VAR_11,
                                              VAR_14);
  svn_wc_notify_state_t VAR_21;
  apr_hash_t *VAR_22;
  apr_array_header_t *VAR_23;
  svn_node_kind_t VAR_24;
  svn_boolean_t VAR_25 = VAR_0;

  FUNC_0(FUNC_3(VAR_10, VAR_14));
  if (VAR_10->skip)
    return VAR_1;

  FUNC_0(FUNC_5(VAR_20, &VAR_24, VAR_14));
  if (VAR_24 != VAR_4 && VAR_24 != VAR_3)
    {
      FUNC_0(FUNC_2(&VAR_19, VAR_10, VAR_11,
                                        VAR_3, VAR_3,
                                        VAR_6,
                                        VAR_5,
                                        ((void*)0),
                                        VAR_14, VAR_14));
      VAR_25 = VAR_2;
    }

  VAR_16.location_and_kind = VAR_15->old_version;
  VAR_17.location_and_kind = VAR_15->new_version;

  VAR_16.checksum = ((void*)0);
  VAR_16.props = VAR_12;
  VAR_17.checksum = ((void*)0);
  VAR_17.props = VAR_13;

  FUNC_0(FUNC_8(&VAR_21, &VAR_19,
                                &VAR_23, &VAR_22,
                                VAR_15, VAR_11,
                                &VAR_16, &VAR_17,
                                VAR_14, VAR_14));

  if (VAR_21 == VAR_7)
    {
      const char *VAR_26;

      FUNC_0(FUNC_6(((void*)0), ((void*)0), ((void*)0),
                                        &VAR_26, ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        ((void*)0),
                                        VAR_15->wcroot, VAR_11,
                                        VAR_15->dst_op_depth,
                                        VAR_14, VAR_14));

      FUNC_0(FUNC_1(&VAR_18, VAR_20,
                                      VAR_15->db, VAR_26,
                                      VAR_19, VAR_15->operation,
                                      &VAR_16, &VAR_17,
                                      VAR_3, !VAR_25,
                                      VAR_14, VAR_14));
    }

  FUNC_0(FUNC_7(VAR_15->wcroot, VAR_11, VAR_15->db,
                               VAR_9,
                               VAR_3,
                               VAR_8,
                               VAR_21,
                               VAR_19, VAR_18, VAR_14));

  return VAR_1;
}
