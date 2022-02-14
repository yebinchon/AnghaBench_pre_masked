
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_12__ {int local_abspath; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ,char const*,int ) ;
 char* FUNC_3 (int *,int ,char const*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char const**,int *,int *,TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int * FUNC_9 (int ,int *,int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char const**,int ,int ,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_client_conflict_t *VAR_12,
                                     svn_client_ctx_t *VAR_13,
                                     apr_array_header_t *VAR_14,
                                     apr_pool_t *VAR_15)
{
  svn_wc_operation_t VAR_16;
  svn_wc_conflict_action_t VAR_17;
  svn_wc_conflict_reason_t VAR_18;
  const char *VAR_19;
  svn_revnum_t VAR_20;
  svn_node_kind_t VAR_21;

  VAR_16 = FUNC_7(VAR_12);
  VAR_17 = FUNC_4(VAR_12);
  VAR_18 = FUNC_6(VAR_12);
  VAR_21 = FUNC_8(VAR_12);
  FUNC_0(FUNC_5(
            &VAR_19, &VAR_20,
            ((void*)0), VAR_12, VAR_15,
            VAR_15));


  if (VAR_21 == VAR_4 &&
      VAR_17 == VAR_6 &&
      (VAR_18 == VAR_8 ||
       VAR_18 == VAR_7))
    {
      const char *VAR_22;
      const char *VAR_23;

      FUNC_0(FUNC_10(&VAR_23, VAR_13->wc_ctx,
                                 VAR_12->local_abspath, VAR_15,
                                 VAR_15));
      if (VAR_16 == VAR_9)
        VAR_22 =
          FUNC_3(VAR_15,
                       FUNC_1("ignore and do not add '^/%s@%ld' here"),
                       VAR_19, VAR_20);
      else if (VAR_16 == VAR_11 ||
               VAR_16 == VAR_10)
        {
          if (VAR_21 == VAR_5)
            VAR_22 =
              FUNC_3(VAR_15,
                           FUNC_1("replace '^/%s@%ld' with the locally added file"),
                           VAR_19, VAR_20);
          else if (VAR_21 == VAR_4)
            VAR_22 =
              FUNC_3(VAR_15,
                           FUNC_1("replace '^/%s@%ld' with the locally added "
                             "directory"),
                           VAR_19, VAR_20);
          else
            VAR_22 =
              FUNC_3(VAR_15,
                           FUNC_1("replace '^/%s@%ld' with the locally added item"),
                           VAR_19, VAR_20);
        }
      else
        return FUNC_9(VAR_0, ((void*)0),
                                 FUNC_1("unexpected operation code '%d'"),
                                 VAR_16);
      FUNC_2(
        VAR_14, VAR_12, VAR_3,
        FUNC_1("Ignore incoming addition"), VAR_22, VAR_2);
    }

  return VAR_1;
}
