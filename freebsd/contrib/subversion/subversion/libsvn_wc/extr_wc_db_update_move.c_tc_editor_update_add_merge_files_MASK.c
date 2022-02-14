
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int db; TYPE_4__* wcroot; int new_version; int cancel_baton; int cancel_func; } ;
typedef TYPE_1__ update_local_add_baton_t ;
typedef scalar_t__ svn_wc_notify_state_t ;
struct TYPE_13__ {char const* path_in_repos; int peg_rev; scalar_t__ node_kind; } ;
typedef TYPE_2__ svn_wc_conflict_version_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_14__ {int local_relpath; TYPE_1__* b; scalar_t__ skip; } ;
typedef TYPE_3__ added_node_baton_t ;
struct TYPE_15__ {int abspath; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (char const*,scalar_t__*,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,char const**,int *,int ,int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int **,int *,int ,int *) ;
 int FUNC_6 (int **,int ,char const*,int *,int *,int *) ;
 int FUNC_7 (int *,int *,TYPE_2__*,int *,int *) ;
 int FUNC_8 (int *,scalar_t__*,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_4__*,int ,int *,int *) ;
 int FUNC_9 (char const**,int ,int ,int const*,int *,int *) ;
 int FUNC_10 (int *,int ,char const*,int ,int *) ;
 int FUNC_11 (int **,int **,int*,int ,char const*,char const*,char const*,char const*,int *,int *,int *,int ,int ,int *,int *,int *,int ,int ,int *,int *) ;
 int FUNC_12 (int **,int ,char const*,int *,int ,scalar_t__,int *,int *) ;
 int * FUNC_13 (int *,int *,int *) ;
 TYPE_2__* FUNC_14 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (scalar_t__*,int **,int ,int *,int *,int ,TYPE_4__*,int *,int *) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (TYPE_3__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_18 (TYPE_4__*,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_19(added_node_baton_t *VAR_10,
                                 const svn_checksum_t *VAR_11,
                                 const svn_checksum_t *VAR_12,
                                 apr_hash_t *VAR_13,
                                 apr_hash_t *VAR_14,
                                 apr_pool_t *VAR_15)
{
  update_local_add_baton_t *VAR_16 = VAR_10->b;
  apr_array_header_t *VAR_17;
  svn_boolean_t VAR_18;
  enum svn_wc_merge_outcome_t VAR_19;
  svn_skel_t *VAR_20 = ((void*)0);
  svn_wc_notify_state_t VAR_21, VAR_22;
  svn_skel_t *VAR_23 = ((void*)0);
  svn_node_kind_t VAR_24;
  const char *VAR_25 = FUNC_2(VAR_16->wcroot->abspath,
                                              VAR_10->local_relpath,
                                              VAR_15);

  FUNC_0(FUNC_16(VAR_10, VAR_15));
  if (VAR_10->skip)
    return VAR_1;


  FUNC_0(FUNC_3(VAR_25, &VAR_24, VAR_15));
  if (VAR_24 != VAR_4)
    {
      FUNC_0(FUNC_17(VAR_10, VAR_4,
                                                            VAR_24,
                                                            VAR_15));
      VAR_10->skip = VAR_2;
      return VAR_1;
    }

  FUNC_0(FUNC_15(&VAR_21, &VAR_20,
                                          VAR_10->local_relpath,
                                          VAR_14, VAR_13,
                                          VAR_16->db, VAR_16->wcroot,
                                          VAR_15, VAR_15));

  FUNC_0(FUNC_10(&VAR_18,
                                           VAR_16->db, VAR_25,
                                           VAR_0 ,
                                           VAR_15));
  if (!VAR_18)
    {
      svn_skel_t *VAR_26 = ((void*)0);

      FUNC_0(FUNC_12(&VAR_26, VAR_16->db,
                                            VAR_25, ((void*)0),

                                            VAR_0,
                                            VAR_2,
                                            VAR_15, VAR_15));
      VAR_23 = FUNC_13(VAR_23, VAR_26, VAR_15);
      VAR_22 = VAR_6;
    }
  else
    {
      const char *VAR_27;
      const char *VAR_28;
      svn_skel_t *VAR_29 = ((void*)0);







      FUNC_0(FUNC_4(((void*)0), &VAR_27, ((void*)0),
                                       VAR_3,
                                       VAR_15, VAR_15));
      FUNC_0(FUNC_9(&VAR_28, VAR_16->db,
                                           VAR_16->wcroot->abspath, VAR_12,
                                           VAR_15, VAR_15));


      FUNC_0(FUNC_5(&VAR_17, VAR_13,
                             FUNC_1(VAR_15), VAR_15));

      FUNC_0(FUNC_11(&VAR_29, &VAR_20,
                                     &VAR_19, VAR_16->db,
                                     VAR_27,
                                     VAR_28,
                                     VAR_25,
                                     VAR_25,
                                     ((void*)0), ((void*)0), ((void*)0),
                                     FUNC_1(VAR_15),
                                     VAR_0,
                                     ((void*)0),
                                     ((void*)0),
                                     VAR_17,
                                     VAR_16->cancel_func, VAR_16->cancel_baton,
                                     VAR_15, VAR_15));

      VAR_23 = FUNC_13(VAR_23, VAR_29, VAR_15);

      if (VAR_19 == VAR_5)
        VAR_22 = VAR_7;
      else
        VAR_22 = VAR_8;
    }



  if (VAR_20)
    {
      svn_wc_conflict_version_t *VAR_30;
      svn_node_kind_t VAR_31;
      svn_revnum_t VAR_32;
      const char *VAR_33;

      VAR_30 = FUNC_14(VAR_10->b->new_version,
                                                VAR_15);
      FUNC_0(FUNC_8(((void*)0), &VAR_31, &VAR_32,
                                                &VAR_33, ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                VAR_16->wcroot, VAR_10->local_relpath,
                                                VAR_15, VAR_15));

      VAR_30->path_in_repos = VAR_33;
      VAR_30->node_kind = VAR_31;
      VAR_30->peg_rev = VAR_32;


      FUNC_0(FUNC_7(VAR_20, ((void*)0),
                                                  VAR_30, VAR_15,
                                                  VAR_15));
      if (VAR_21 == VAR_7)
        FUNC_0(FUNC_6(&VAR_23, VAR_16->db,
                                                VAR_25,
                                                VAR_20,
                                                VAR_15,
                                                VAR_15));
    }

  FUNC_0(FUNC_18(VAR_16->wcroot, VAR_10->local_relpath, VAR_16->db,
                               VAR_9,
                               VAR_4, VAR_22, VAR_21,
                               VAR_20, VAR_23, VAR_15));

  return VAR_1;
}
