
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
struct TYPE_11__ {char const* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_12__ {struct conflict_tree_incoming_add_details* tree_conflict_incoming_details; int pool; } ;
typedef TYPE_2__ svn_client_conflict_t ;
struct find_added_rev_baton {scalar_t__ added_rev; char const* repos_relpath; int * pool; int * parent_repos_relpath; int * ctx; void* victim_abspath; int member_0; } ;
struct conflict_tree_incoming_add_details {scalar_t__ added_rev; int * moves; int * added_rev_author; int * deleted_rev_author; scalar_t__ deleted_rev; void* repos_relpath; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (char*) ;
 struct conflict_tree_incoming_add_details* FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,char const*) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__*,char const**,int *,int **,TYPE_2__*,int ,int ,scalar_t__,scalar_t__,int *,scalar_t__,int *,int ,int *) ;
 int FUNC_6 (int **,char const**,char const*,int *,int *,int ,int ,int *,int *,int *) ;
 int FUNC_7 (char const**,scalar_t__*,int *,TYPE_2__*,int *,int *) ;
 int FUNC_8 (char const**,scalar_t__*,int *,TYPE_2__*,int *,int *) ;
 void* FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char const**,int *,TYPE_2__*,int *,int *) ;
 char* FUNC_12 (char const*,char const*,int *) ;
 int FUNC_13 (int *,char*,scalar_t__,scalar_t__,scalar_t__*,int *) ;
 int FUNC_14 (int *,scalar_t__*,int *) ;
 int FUNC_15 (int *,char*,scalar_t__,scalar_t__,scalar_t__,int ,struct find_added_rev_baton*,int *) ;
 int FUNC_16 (int *,scalar_t__,int ,TYPE_1__**,int *) ;
 int FUNC_17 (char const*,int *) ;
 int FUNC_18 (char const*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_client_conflict_t *VAR_8,
                                       svn_client_ctx_t *VAR_9,
                                       apr_pool_t *VAR_10)
{
  const char *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  svn_revnum_t VAR_14;
  svn_revnum_t VAR_15;
  struct conflict_tree_incoming_add_details *VAR_16;
  svn_wc_operation_t VAR_17;

  FUNC_0(FUNC_8(
            &VAR_11, &VAR_14, ((void*)0), VAR_8, VAR_10,
            VAR_10));
  FUNC_0(FUNC_7(
            &VAR_12, &VAR_15, ((void*)0), VAR_8, VAR_10,
            VAR_10));
  FUNC_0(FUNC_11(&VAR_13, ((void*)0),
                                             VAR_8,
                                             VAR_10, VAR_10));
  VAR_17 = FUNC_10(VAR_8);

  if (VAR_17 == VAR_7 ||
      VAR_17 == VAR_6)
    {
      const char *VAR_18;
      const char *VAR_19;
      svn_string_t *VAR_20;
      struct find_added_rev_baton VAR_21 = { 0 };
      svn_ra_session_t *VAR_22;
      svn_revnum_t VAR_23;
      svn_revnum_t VAR_24;

      VAR_18 = FUNC_12(VAR_13, VAR_12,
                                        VAR_10);
      FUNC_0(FUNC_6(&VAR_22,
                                                   &VAR_19,
                                                   VAR_18, ((void*)0), ((void*)0),
                                                   VAR_0,
                                                   VAR_0,
                                                   VAR_9,
                                                   VAR_10,
                                                   VAR_10));

      VAR_16 = FUNC_3(VAR_8->pool, sizeof(*VAR_16));
      VAR_21.ctx = VAR_9,
      VAR_21.victim_abspath = FUNC_9(VAR_8),
      VAR_21.added_rev = VAR_1;
      VAR_21.repos_relpath = ((void*)0);
      VAR_21.parent_repos_relpath = ((void*)0);
      VAR_21.pool = VAR_10;


      FUNC_0(FUNC_15(VAR_22, "", VAR_15,
                                           VAR_15, VAR_1,
                                           VAR_4, &VAR_21,
                                           VAR_10));

      FUNC_0(FUNC_16(VAR_22, VAR_21.added_rev,
                              VAR_3,
                              &VAR_20, VAR_10));
      VAR_16->repos_relpath = FUNC_4(VAR_8->pool, VAR_21.repos_relpath);
      VAR_16->added_rev = VAR_21.added_rev;
      if (VAR_20)
        VAR_16->added_rev_author = FUNC_4(VAR_8->pool,
                                          VAR_20->data);
      else
        VAR_16->added_rev_author = FUNC_2("unknown author");
      VAR_16->deleted_rev = VAR_1;
      VAR_16->deleted_rev_author = ((void*)0);




      FUNC_0(FUNC_14(VAR_22, &VAR_24, VAR_10));
      if (VAR_15 < VAR_24)
        {
          FUNC_0(FUNC_13(VAR_22, "", VAR_15, VAR_24,
                                         &VAR_23, VAR_10));
          if (FUNC_1(VAR_23))
           {
              FUNC_0(FUNC_16(VAR_22, VAR_23,
                                      VAR_3,
                                      &VAR_20, VAR_10));
              VAR_16->deleted_rev = VAR_23;
              if (VAR_20)
                VAR_16->deleted_rev_author = FUNC_4(VAR_8->pool,
                                                          VAR_20->data);
              else
                VAR_16->deleted_rev_author = FUNC_2("unknown author");
            }
        }
    }
  else if (VAR_17 == VAR_5)
    {
      if (VAR_14 < VAR_15)
        {



          const char *VAR_25;
          const char *VAR_26;
          svn_string_t *VAR_27;
          struct find_added_rev_baton VAR_28 = { 0 };
          svn_ra_session_t *VAR_29;

          VAR_25 = FUNC_12(VAR_13, VAR_12,
                                            VAR_10);
          FUNC_0(FUNC_6(&VAR_29,
                                                       &VAR_26,
                                                       VAR_25, ((void*)0), ((void*)0),
                                                       VAR_0,
                                                       VAR_0,
                                                       VAR_9,
                                                       VAR_10,
                                                       VAR_10));

          VAR_16 = FUNC_3(VAR_8->pool, sizeof(*VAR_16));
          VAR_28.victim_abspath = FUNC_9(VAR_8);
          VAR_28.ctx = VAR_9;
          VAR_28.added_rev = VAR_1;
          VAR_28.repos_relpath = ((void*)0);
          VAR_28.parent_repos_relpath = ((void*)0);
          VAR_28.pool = VAR_10;


          FUNC_0(FUNC_15(VAR_29, "", VAR_15,
                                               VAR_15, VAR_14,
                                               VAR_4, &VAR_28,
                                               VAR_10));

          FUNC_0(FUNC_16(VAR_29, VAR_28.added_rev,
                                  VAR_3,
                                  &VAR_27, VAR_10));
          VAR_16->repos_relpath = FUNC_4(VAR_8->pool, VAR_28.repos_relpath);
          VAR_16->added_rev = VAR_28.added_rev;
          if (VAR_27)
            VAR_16->added_rev_author = FUNC_4(VAR_8->pool,
                                                    VAR_27->data);
          else
            VAR_16->added_rev_author = FUNC_2("unknown author");
          VAR_16->deleted_rev = VAR_1;
          VAR_16->deleted_rev_author = ((void*)0);
        }
      else
        {




          svn_revnum_t VAR_30;
          const char *VAR_31;
          svn_node_kind_t VAR_32;
          apr_array_header_t *VAR_33;

          FUNC_0(FUNC_5(
                    &VAR_30, &VAR_31, &VAR_32,
                    &VAR_33, VAR_8,
                    FUNC_17(VAR_11, VAR_10),
                    FUNC_18(VAR_11, VAR_10),
                    VAR_14, VAR_15,
                    ((void*)0), VAR_1,
                    VAR_9,
                    VAR_8->pool, VAR_10));
          if (VAR_30 == VAR_1)
            {



              return VAR_2;
            }

          VAR_16 = FUNC_3(VAR_8->pool, sizeof(*VAR_16));
          VAR_16->repos_relpath = FUNC_4(VAR_8->pool,
                                               VAR_12);
          VAR_16->deleted_rev = VAR_30;
          VAR_16->deleted_rev_author = FUNC_4(VAR_8->pool,
                                                    VAR_31);

          VAR_16->added_rev = VAR_1;
          VAR_16->added_rev_author = ((void*)0);
          VAR_16->moves = VAR_33;
        }
    }
  else
    {
      VAR_16 = ((void*)0);
    }

  VAR_8->tree_conflict_incoming_details = VAR_16;

  return VAR_2;
}
