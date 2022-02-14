
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_11__ ;


struct TYPE_34__ {int * props; int const* checksum; TYPE_1__* location_and_kind; } ;
typedef TYPE_2__ working_node_version_t ;
struct TYPE_35__ {int db; TYPE_11__* wcroot; int operation; int cancel_baton; int cancel_func; TYPE_1__* new_version; TYPE_1__* old_version; } ;
typedef TYPE_3__ update_move_baton_t ;
typedef int svn_wc_notify_state_t ;
typedef int svn_skel_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_36__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_37__ {scalar_t__ skip; TYPE_3__* umb; } ;
typedef TYPE_5__ node_move_baton_t ;
typedef enum svn_wc_merge_outcome_t { ____Placeholder_svn_wc_merge_outcome_t } svn_wc_merge_outcome_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
struct TYPE_33__ {int peg_rev; } ;
struct TYPE_32__ {int abspath; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,char*,int ) ;
 TYPE_4__* FUNC_3 (char const*,char const*,TYPE_11__*,int *) ;
 TYPE_4__* FUNC_4 (int **,char const*,int ,char const*,int *,int ,TYPE_2__*,TYPE_2__*,scalar_t__,int,int *,int *) ;
 TYPE_4__* FUNC_5 (int **,TYPE_5__*,char const*,scalar_t__,scalar_t__,int ,int ,int *,int *,int *) ;
 TYPE_4__* FUNC_6 (TYPE_5__*,int *) ;
 char* FUNC_7 (int ,char const*,int *) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char const*,int *) ;
 char* FUNC_11 (char const*,int *) ;
 char* FUNC_12 (char const*,int ,int *) ;
 TYPE_4__* FUNC_13 (int *,scalar_t__*,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_11__*,char const*,int *,int *) ;
 TYPE_4__* FUNC_14 (char const**,int ,int ,int const*,int *,int *) ;
 TYPE_4__* FUNC_15 (int **,int **,int*,int ,char const*,char const*,char const*,char const*,char const*,int ,char const*,int *,scalar_t__,int *,int *,int *,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_16 (int **,int ,char const*,char const*,scalar_t__,scalar_t__,int *,int *) ;
 int * FUNC_17 (int *,int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__* FUNC_18 (TYPE_11__*,char const*,int ,int ,scalar_t__,int ,int ,int *,int *,int *) ;
 TYPE_4__* FUNC_19 (int *,int **,int **,int **,TYPE_3__*,char const*,TYPE_2__*,TYPE_2__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_20(node_move_baton_t *VAR_16,
                                     const char *VAR_17,
                                     const char *VAR_18,
                                     const svn_checksum_t *VAR_19,
                                     const svn_checksum_t *VAR_20,
                                     apr_hash_t *VAR_21,
                                     apr_hash_t *VAR_22,
                                     svn_boolean_t VAR_23,
                                     apr_pool_t *VAR_24)
{
  update_move_baton_t *VAR_25 = VAR_16->umb;
  working_node_version_t VAR_26, VAR_27;
  const char *VAR_28 = FUNC_7(VAR_25->wcroot->abspath,
                                            VAR_17,
                                            VAR_24);
  svn_skel_t *VAR_29 = ((void*)0);
  enum svn_wc_merge_outcome_t VAR_30;
  svn_wc_notify_state_t VAR_31 = VAR_14;
  svn_wc_notify_state_t VAR_32 = VAR_14;
  svn_skel_t *VAR_33, *VAR_34 = ((void*)0);
  svn_node_kind_t VAR_35;
  const char *VAR_36;
  svn_boolean_t VAR_37 = VAR_0;
  svn_node_kind_t VAR_38;
  svn_error_t *VAR_39;

  FUNC_0(FUNC_6(VAR_16, VAR_24));
  if (VAR_16->skip)
    return VAR_2;

  VAR_39 = FUNC_13(((void*)0), &VAR_38, ((void*)0),
                                          &VAR_36,
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                          VAR_25->wcroot, VAR_17,
                                          VAR_24, VAR_24);
  if (VAR_39 && VAR_39->apr_err == VAR_1)
    {
      const char *VAR_40;
      const char *VAR_41;
      const char *VAR_42;
      FUNC_8(VAR_39);


      FUNC_0(FUNC_3(VAR_18, VAR_17, VAR_25->wcroot,
                                VAR_24));


      VAR_38 = VAR_5;
      FUNC_0(FUNC_5(&VAR_29, VAR_16, VAR_17,
                                        VAR_4, VAR_38,
                                        VAR_8,
                                        VAR_6,
                                        ((void*)0), VAR_24, VAR_24));
      VAR_40 = FUNC_11(VAR_17, VAR_24);
      FUNC_0(FUNC_13(((void*)0), ((void*)0), ((void*)0),
                                                &VAR_41,
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                                ((void*)0), VAR_25->wcroot,
                                                VAR_40,
                                                VAR_24, VAR_24));
      VAR_36 = FUNC_12(VAR_41,
                                           FUNC_10(VAR_17,
                                                                VAR_24),
                                           VAR_24);
      VAR_37 = VAR_3;


      VAR_42 = FUNC_7(VAR_25->wcroot->abspath, VAR_18,
                                    VAR_24);
      FUNC_0(FUNC_16(&VAR_33, VAR_25->db,
                                            VAR_28,
                                            VAR_42,
                                            VAR_0 ,
                                            VAR_3 ,
                                            VAR_24, VAR_24));
      VAR_34 = FUNC_17(VAR_34, VAR_33, VAR_24);
    }
  else
    FUNC_0(VAR_39);

  if ((VAR_38 == VAR_5 || VAR_38 != VAR_4) &&
      VAR_29 == ((void*)0))
    {
      FUNC_0(FUNC_5(&VAR_29, VAR_16, VAR_17,
                                        VAR_4, VAR_38,
                                        VAR_38 == VAR_5
                                          ? VAR_9
                                          : VAR_10,
                                        VAR_7,
                                        ((void*)0),
                                        VAR_24, VAR_24));
      VAR_37 = VAR_3;
    }

  FUNC_0(FUNC_9(VAR_28, &VAR_35, VAR_24));
  if ((VAR_35 == VAR_5 || VAR_35 != VAR_4)
      && VAR_29 == ((void*)0))
    {
      FUNC_0(FUNC_5(&VAR_29, VAR_16, VAR_17,
                                        VAR_4, VAR_35,
                                        VAR_35 == VAR_5
                                          ? VAR_9
                                          : VAR_10,
                                        VAR_7,
                                        ((void*)0),
                                        VAR_24, VAR_24));
      VAR_37 = VAR_3;
    }

  VAR_26.location_and_kind = VAR_25->old_version;
  VAR_27.location_and_kind = VAR_25->new_version;

  VAR_26.checksum = VAR_19;
  VAR_26.props = VAR_22;
  VAR_27.checksum = VAR_20;
  VAR_27.props = VAR_21;


  if (VAR_29 == ((void*)0))
    {
      apr_hash_t *VAR_43;
      apr_array_header_t *VAR_44;

      FUNC_0(FUNC_19(&VAR_31, &VAR_29, &VAR_44,
                                   &VAR_43, VAR_25, VAR_17,
                                   &VAR_26, &VAR_27,
                                   VAR_24, VAR_24));
      if (VAR_23)
        {
          const char *VAR_45;
          const char *VAR_46;
          const char *VAR_47;
          const char *VAR_48;
          FUNC_0(FUNC_14(&VAR_45,
                                               VAR_25->db, VAR_25->wcroot->abspath,
                                               VAR_19,
                                               VAR_24, VAR_24));
          VAR_46 = FUNC_7(VAR_25->wcroot->abspath, VAR_18,
                                        VAR_24);
          VAR_47 = FUNC_2(VAR_24, ".r%ld",
                                    VAR_25->old_version->peg_rev);
          VAR_48 = FUNC_2(VAR_24, ".r%ld",
                                      VAR_25->new_version->peg_rev);
          FUNC_0(FUNC_15(&VAR_33, &VAR_29,
                                         &VAR_30, VAR_25->db,
                                         VAR_45,
                                         VAR_46,
                                         VAR_28,
                                         VAR_28,
                                         VAR_47,
                                         FUNC_1(".working"),
                                         VAR_48,
                                         VAR_43,
                                         VAR_0,
                                         ((void*)0),
                                         ((void*)0),
                                         VAR_44,
                                         VAR_25->cancel_func, VAR_25->cancel_baton,
                                         VAR_24, VAR_24));

          VAR_34 = FUNC_17(VAR_34, VAR_33, VAR_24);

          if (VAR_30 == VAR_11)
            VAR_32 = VAR_12;
          else
            VAR_32 = VAR_13;
        }
    }



  if (VAR_29)
    {
      FUNC_0(FUNC_4(&VAR_33, VAR_28, VAR_25->db,
                                      VAR_36, VAR_29,
                                      VAR_25->operation, &VAR_26, &VAR_27,
                                      VAR_4, !VAR_37,
                                      VAR_24, VAR_24));

      VAR_34 = FUNC_17(VAR_34, VAR_33, VAR_24);
    }

  FUNC_0(FUNC_18(VAR_25->wcroot, VAR_17, VAR_25->db,
                               VAR_15,
                               VAR_4,
                               VAR_32,
                               VAR_31,
                               VAR_29, VAR_34, VAR_24));

  return VAR_2;
}
