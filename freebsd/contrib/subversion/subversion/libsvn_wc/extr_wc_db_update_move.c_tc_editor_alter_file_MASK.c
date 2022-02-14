
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int const* checksum; int * props; int location_and_kind; } ;
typedef TYPE_1__ working_node_version_t ;
struct TYPE_15__ {int db; TYPE_7__* wcroot; int operation; int dst_op_depth; int cancel_baton; int cancel_func; int new_version; int old_version; } ;
typedef TYPE_2__ update_move_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
struct TYPE_16__ {scalar_t__ skip; TYPE_2__* umb; } ;
typedef TYPE_3__ node_move_baton_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
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
 int FUNC_4 (int const*,int const*) ;
 char* FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_7__*,char const*,int ,int *,int *) ;
 int FUNC_8 (char const**,int ,int ,int const*,int *,int *) ;
 int FUNC_9 (int *,int ,char const*,int ,int *) ;
 int FUNC_10 (int **,int **,int*,int ,char const*,char const*,char const*,char const*,int *,int *,int *,int *,int ,int *,int *,int *,int ,int ,int *,int *) ;
 int FUNC_11 (int **,int ,char const*,int *,int ,int ,int *,int *) ;
 int * FUNC_12 (int *,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (TYPE_7__*,char const*,int ,int ,scalar_t__,int ,int ,int *,int *,int *) ;
 int FUNC_14 (int *,int **,int **,int **,TYPE_2__*,char const*,TYPE_1__*,TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(node_move_baton_t *VAR_13,
                     const char *VAR_14,
                     const svn_checksum_t *VAR_15,
                     const svn_checksum_t *VAR_16,
                     apr_hash_t *VAR_17,
                     apr_hash_t *VAR_18,
                     apr_pool_t *VAR_19)
{
  update_move_baton_t *VAR_20 = VAR_13->umb;
  working_node_version_t VAR_21, VAR_22;
  const char *VAR_23 = FUNC_5(VAR_20->wcroot->abspath,
                                              VAR_14,
                                              VAR_19);
  const char *VAR_24;
  const char *VAR_25;
  svn_skel_t *VAR_26 = ((void*)0);
  apr_hash_t *VAR_27;
  apr_array_header_t *VAR_28;
  enum svn_wc_merge_outcome_t VAR_29;
  svn_wc_notify_state_t VAR_30, VAR_31;
  svn_skel_t *VAR_32, *VAR_33 = ((void*)0);
  svn_node_kind_t VAR_34;
  svn_boolean_t VAR_35 = VAR_0;

  FUNC_0(FUNC_3(VAR_13, VAR_19));
  if (VAR_13->skip)
    return VAR_1;

  FUNC_0(FUNC_6(VAR_23, &VAR_34, VAR_19));
  if (VAR_34 != VAR_4 && VAR_34 != VAR_3)
    {
      FUNC_0(FUNC_2(&VAR_26, VAR_13, VAR_14,
                                        VAR_3, VAR_3,
                                        VAR_6,
                                        VAR_5,
                                        ((void*)0),
                                        VAR_19, VAR_19));
      VAR_35 = VAR_2;
    }

  VAR_21.location_and_kind = VAR_20->old_version;
  VAR_22.location_and_kind = VAR_20->new_version;

  VAR_21.checksum = VAR_15;
  VAR_21.props = VAR_17;
  VAR_22.checksum = VAR_16;
  VAR_22.props = VAR_18;


  FUNC_0(FUNC_14(&VAR_30, &VAR_26, &VAR_28,
                               &VAR_27, VAR_20, VAR_14,
                               &VAR_21, &VAR_22,
                               VAR_19, VAR_19));

  if (!VAR_35
      && !FUNC_4(VAR_22.checksum, VAR_21.checksum))
    {
      svn_boolean_t VAR_36;

      FUNC_0(FUNC_9(&VAR_36,
                                               VAR_20->db, VAR_23,
                                               VAR_0 ,
                                               VAR_19));
      if (!VAR_36)
        {
          FUNC_0(FUNC_11(&VAR_32, VAR_20->db,
                                                VAR_23,
                                                ((void*)0),
                                                VAR_0 ,
                                                VAR_2 ,
                                                VAR_19, VAR_19));

          VAR_33 = FUNC_12(VAR_33, VAR_32, VAR_19);

          VAR_31 = VAR_8;
        }
      else
        {






          FUNC_0(FUNC_8(&VAR_24,
                                               VAR_20->db, VAR_20->wcroot->abspath,
                                               VAR_21.checksum,
                                               VAR_19, VAR_19));
          FUNC_0(FUNC_8(&VAR_25,
                                               VAR_20->db, VAR_20->wcroot->abspath,
                                               VAR_22.checksum,
                                               VAR_19, VAR_19));
          FUNC_0(FUNC_10(&VAR_32, &VAR_26,
                                         &VAR_29, VAR_20->db,
                                         VAR_24,
                                         VAR_25,
                                         VAR_23,
                                         VAR_23,
                                         ((void*)0), ((void*)0), ((void*)0),
                                         VAR_27,
                                         VAR_0,
                                         ((void*)0),
                                         ((void*)0),
                                         VAR_28,
                                         VAR_20->cancel_func, VAR_20->cancel_baton,
                                         VAR_19, VAR_19));

          VAR_33 = FUNC_12(VAR_33, VAR_32, VAR_19);

          if (VAR_29 == VAR_7)
            VAR_31 = VAR_9;
          else
            VAR_31 = VAR_10;
        }
    }
  else
    VAR_31 = VAR_11;



  if (VAR_26)
    {
      const char *VAR_37;

      FUNC_0(FUNC_7(((void*)0), ((void*)0), ((void*)0),
                                        &VAR_37, ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        ((void*)0),
                                        VAR_20->wcroot, VAR_14,
                                        VAR_20->dst_op_depth,
                                        VAR_19, VAR_19));

      FUNC_0(FUNC_1(&VAR_32, VAR_23, VAR_20->db,
                                      VAR_37, VAR_26,
                                      VAR_20->operation, &VAR_21, &VAR_22,
                                      VAR_3, !VAR_35,
                                      VAR_19, VAR_19));

      VAR_33 = FUNC_12(VAR_33, VAR_32, VAR_19);
    }

  FUNC_0(FUNC_13(VAR_20->wcroot, VAR_14, VAR_20->db,
                               VAR_12,
                               VAR_3,
                               VAR_31,
                               VAR_30,
                               VAR_26, VAR_33, VAR_19));

  return VAR_1;
}
