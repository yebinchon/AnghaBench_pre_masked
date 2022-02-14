
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_18__ {struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; int pool; int local_abspath; } ;
typedef TYPE_2__ svn_client_conflict_t ;
struct conflict_tree_incoming_delete_details {char const* rev_author; int * moves; scalar_t__ replacing_node_kind; void* repos_relpath; scalar_t__ added_rev; scalar_t__ deleted_rev; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 struct conflict_tree_incoming_delete_details* FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const**,scalar_t__*,char const*,scalar_t__,char const*,scalar_t__,TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_4 (scalar_t__*,char const**,scalar_t__*,int **,TYPE_2__*,int ,char const*,scalar_t__,scalar_t__,char const*,scalar_t__,TYPE_1__*,int ,int *) ;
 int FUNC_5 (struct conflict_tree_incoming_delete_details**,char const*,char const*,scalar_t__,scalar_t__,TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (struct conflict_tree_incoming_delete_details*,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_7 (char const**,scalar_t__*,scalar_t__*,TYPE_2__*,int *,int *) ;
 int FUNC_8 (char const**,scalar_t__*,scalar_t__*,TYPE_2__*,int *,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char const**,int *,TYPE_2__*,int *,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_14 (char const*,int *) ;
 char const* FUNC_15 (char const*,int *) ;
 int FUNC_16 (scalar_t__*,char const**,int *,int *,int ,int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_client_conflict_t *VAR_6,
                                          svn_client_ctx_t *VAR_7,
                                          apr_pool_t *VAR_8)
{
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  svn_revnum_t VAR_12;
  svn_revnum_t VAR_13;
  svn_node_kind_t VAR_14;
  svn_node_kind_t VAR_15;
  struct conflict_tree_incoming_delete_details *VAR_16;
  svn_wc_operation_t VAR_17;

  FUNC_0(FUNC_8(
            &VAR_9, &VAR_12, &VAR_14, VAR_6, VAR_8,
            VAR_8));
  FUNC_0(FUNC_7(
            &VAR_10, &VAR_13, &VAR_15, VAR_6, VAR_8,
            VAR_8));
  FUNC_0(FUNC_11(&VAR_11, ((void*)0),
                                             VAR_6,
                                             VAR_8, VAR_8));
  VAR_17 = FUNC_10(VAR_6);

  if (VAR_17 == VAR_5)
    {
      if (VAR_12 < VAR_13)
        {
          const char *VAR_18;
          svn_revnum_t VAR_19;
          svn_revnum_t VAR_20;
          const char *VAR_21;
          svn_node_kind_t VAR_22;
          apr_array_header_t *VAR_23;
          const char *VAR_24;
          svn_revnum_t VAR_25;


          FUNC_0(FUNC_16(&VAR_19,
                                              &VAR_18,
                                              ((void*)0), ((void*)0),
                                              VAR_7->wc_ctx,
                                              FUNC_13(
                                                VAR_6->local_abspath,
                                                VAR_8),
                                              VAR_8,
                                              VAR_8));
          if (VAR_15 == VAR_2)
            {
              FUNC_0(FUNC_3(&VAR_24,
                                        &VAR_25,
                                        VAR_10, VAR_13,
                                        VAR_9, VAR_12,
                                        VAR_6, VAR_7,
                                        VAR_8, VAR_8));
            }
          else
            {

              VAR_24 = ((void*)0);
              VAR_25 = VAR_0;
            }

          FUNC_0(FUNC_4(
                    &VAR_20, &VAR_21, &VAR_22,
                    &VAR_23, VAR_6,
                    FUNC_12(VAR_6->local_abspath, VAR_8),
                    VAR_18, VAR_19,
                    VAR_15 == VAR_2 ? 0 : VAR_12,
                    VAR_24, VAR_25,
                    VAR_7, VAR_6->pool, VAR_8));
          if (VAR_20 == VAR_0)
            {



              return VAR_1;
            }

          VAR_16 = FUNC_1(VAR_6->pool, sizeof(*VAR_16));
          VAR_16->deleted_rev = VAR_20;
          VAR_16->added_rev = VAR_0;
          VAR_16->repos_relpath = FUNC_2(VAR_6->pool,
                                               VAR_10);
          VAR_16->rev_author = VAR_21;
          VAR_16->replacing_node_kind = VAR_22;
          VAR_16->moves = VAR_23;
        }
      else
        {


          FUNC_0(FUNC_5(
                    &VAR_16, VAR_11, VAR_9,
                    VAR_12, VAR_13, VAR_7,
                    FUNC_9(VAR_6),
                    VAR_6->pool, VAR_8));
        }
    }
  else if (VAR_17 == VAR_4 ||
           VAR_17 == VAR_3)
    {
      if (VAR_12 < VAR_13)
        {
          svn_revnum_t VAR_26;
          const char *VAR_27;
          svn_node_kind_t VAR_28;
          apr_array_header_t *VAR_29;






          FUNC_0(FUNC_4(
                    &VAR_26, &VAR_27, &VAR_28,
                    &VAR_29, VAR_6,
                    FUNC_14(VAR_10, VAR_8),
                    FUNC_15(VAR_10, VAR_8),
                    VAR_13, VAR_12, VAR_9, VAR_12, VAR_7,
                    VAR_6->pool, VAR_8));
          if (VAR_26 == VAR_0)
            {



              return VAR_1;
            }

          VAR_16 = FUNC_1(VAR_6->pool, sizeof(*VAR_16));
          VAR_16->deleted_rev = VAR_26;
          VAR_16->added_rev = VAR_0;
          VAR_16->repos_relpath = FUNC_2(VAR_6->pool,
                                               VAR_10);
          VAR_16->rev_author = FUNC_2(VAR_6->pool,
                                            VAR_27);
          VAR_16->replacing_node_kind = VAR_28;
          VAR_16->moves = VAR_29;
        }
      else
        {



          FUNC_0(FUNC_5(
                    &VAR_16, VAR_11, VAR_9,
                    VAR_12, VAR_13, VAR_7,
                    FUNC_9(VAR_6),
                    VAR_6->pool, VAR_8));
        }
    }
  else
    {
      VAR_16 = ((void*)0);
    }

  VAR_6->tree_conflict_incoming_details = VAR_16;

  if (VAR_16 && VAR_16->moves)
    FUNC_0(FUNC_6(VAR_16, VAR_6, VAR_7, VAR_8));

  return VAR_1;
}
