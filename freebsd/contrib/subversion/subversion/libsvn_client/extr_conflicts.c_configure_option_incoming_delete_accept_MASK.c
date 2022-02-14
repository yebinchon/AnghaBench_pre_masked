
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef scalar_t__ svn_wc_conflict_action_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_11__ {int local_abspath; struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
typedef TYPE_2__ svn_client_conflict_t ;
typedef int svn_boolean_t ;
struct conflict_tree_incoming_delete_details {int * moves; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ,char const*,int ) ;
 char* FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char const**,int *,int *,TYPE_2__*,int *,int *) ;
 char* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const**,int ,int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_client_conflict_t *VAR_6,
                                        svn_client_ctx_t *VAR_7,
                                        apr_array_header_t *VAR_8,
                                        apr_pool_t *VAR_9)
{
  svn_wc_conflict_action_t VAR_10;
  svn_wc_conflict_reason_t VAR_11;
  const char *VAR_12;
  svn_revnum_t VAR_13;

  VAR_10 = FUNC_4(VAR_6);
  VAR_11 = FUNC_7(VAR_6);
  FUNC_0(FUNC_5(
            &VAR_12, &VAR_13,
            ((void*)0), VAR_6, VAR_9,
            VAR_9));

  if (VAR_10 == VAR_3)
    {
      struct conflict_tree_incoming_delete_details *VAR_14;
      svn_boolean_t VAR_15;

      VAR_14 = VAR_6->tree_conflict_incoming_details;
      VAR_15 = (VAR_14 != ((void*)0) &&
                          VAR_14->moves != ((void*)0));
      if (VAR_15 &&
          (VAR_11 == VAR_4 ||
          VAR_11 == VAR_5))
        {


          return VAR_0;
        }
      else
        {
          const char *VAR_16;
          const char *VAR_17;
          const char *VAR_18;

          FUNC_0(FUNC_10(&VAR_17, VAR_7->wc_ctx,
                                     VAR_6->local_abspath, VAR_9,
                                     VAR_9));
          VAR_18 = FUNC_6(VAR_6);
          VAR_16 =
            FUNC_3(VAR_9, FUNC_1("accept the deletion of '%s'"),
              FUNC_8(FUNC_9(VAR_17,
                                                              VAR_18),
                                     VAR_9));
          FUNC_2(
            VAR_8, VAR_6,
            VAR_2,
            FUNC_1("Accept incoming deletion"), VAR_16,
            VAR_1);
        }
    }

  return VAR_0;
}
