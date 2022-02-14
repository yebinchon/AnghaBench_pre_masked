
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
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ,char const*,int ) ;
 char* FUNC_3 (int *,int ,int ,char const*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char const**,int *,scalar_t__*,TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (char const**,int ,int ,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_client_conflict_t *VAR_7,
                                            svn_client_ctx_t *VAR_8,
                                            apr_array_header_t *VAR_9,
                                            apr_pool_t *VAR_10)
{
  svn_wc_operation_t VAR_11;
  svn_wc_conflict_action_t VAR_12;
  svn_wc_conflict_reason_t VAR_13;
  svn_node_kind_t VAR_14;
  const char *VAR_15;
  svn_revnum_t VAR_16;
  svn_node_kind_t VAR_17;

  VAR_11 = FUNC_7(VAR_7);
  VAR_12 = FUNC_4(VAR_7);
  VAR_13 = FUNC_6(VAR_7);
  VAR_14 = FUNC_8(VAR_7);
  FUNC_0(FUNC_5(
            &VAR_15, &VAR_16,
            &VAR_17, VAR_7, VAR_10,
            VAR_10));

  if (VAR_11 == VAR_6 &&
      VAR_14 == VAR_3 &&
      VAR_17 == VAR_3 &&
      VAR_12 == VAR_4 &&
      VAR_13 == VAR_5)
    {
      const char *VAR_18;
      const char *VAR_19;

      FUNC_0(FUNC_11(&VAR_19, VAR_8->wc_ctx,
                                 VAR_7->local_abspath, VAR_10,
                                 VAR_10));
      VAR_18 =
        FUNC_3(VAR_10, FUNC_1("delete '%s' and copy '^/%s@%ld' here"),
          FUNC_9(
            FUNC_10(VAR_19,
                                     VAR_7->local_abspath),
            VAR_10),
          VAR_15, VAR_16);
      FUNC_2(
        VAR_9, VAR_7,
        VAR_2,
        FUNC_1("Delete my directory and replace it with incoming directory"),
        VAR_18, VAR_1);
    }

  return VAR_0;
}
