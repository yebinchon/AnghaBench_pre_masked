
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_18__ {struct conflict_tree_local_missing_details* tree_conflict_local_details; int pool; int local_abspath; } ;
typedef TYPE_2__ svn_client_conflict_t ;
struct TYPE_19__ {scalar_t__ rev; } ;
typedef TYPE_3__ svn_client__pathrev_t ;
struct conflict_tree_local_missing_details {char const* deleted_rev_author; int * sibling_moves; int * moves; int deleted_repos_relpath; scalar_t__ deleted_rev; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 struct conflict_tree_local_missing_details* FUNC_1 (int ,int) ;
 int FUNC_2 (int **,char const*,scalar_t__,int ,scalar_t__,char const*,char const*,char const*,int *,TYPE_1__*,int ,int *) ;
 int FUNC_3 (TYPE_3__**,char const*,scalar_t__,char const*,scalar_t__,char const*,char const*,int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (char const**,scalar_t__*,char const*,scalar_t__,char const*,scalar_t__,TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_5 (scalar_t__*,char const**,int *,int **,TYPE_2__*,char const*,char const*,scalar_t__,int ,char const*,scalar_t__,TYPE_1__*,int ,int *) ;
 int FUNC_6 (int **,char const**,char const*,int *,int *,int ,int ,TYPE_1__*,int *,int *) ;
 int FUNC_7 (char const**,scalar_t__*,int *,TYPE_2__*,int *,int *) ;
 int FUNC_8 (char const**,scalar_t__*,int *,TYPE_2__*,int *,int *) ;
 char* FUNC_9 (TYPE_2__*) ;
 char* FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 char* FUNC_12 (char const*,char const*,int *) ;
 int FUNC_13 (int *,char*,scalar_t__,int *,int *) ;
 int FUNC_14 (char const*,char const*,int ) ;
 int FUNC_15 (scalar_t__*,char const**,char const**,char const**,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_client_conflict_t *VAR_3,
                                        svn_client_ctx_t *VAR_4,
                                        apr_pool_t *VAR_5)
{
  const char *VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  svn_revnum_t VAR_9;
  svn_revnum_t VAR_10;
  svn_revnum_t VAR_11;
  svn_revnum_t VAR_12;
  const char *VAR_13;
  svn_node_kind_t VAR_14;
  const char *VAR_15;
  struct conflict_tree_local_missing_details *VAR_16;
  apr_array_header_t *VAR_17 = ((void*)0);
  apr_array_header_t *VAR_18 = ((void*)0);
  const char *VAR_19;
  svn_revnum_t VAR_20;
  const char *VAR_21;
  const char *VAR_22;

  FUNC_0(FUNC_8(
            &VAR_6, &VAR_10, ((void*)0), VAR_3,
            VAR_5, VAR_5));
  FUNC_0(FUNC_7(
            &VAR_7, &VAR_11, ((void*)0), VAR_3,
            VAR_5, VAR_5));



  VAR_15 = FUNC_10(VAR_3->local_abspath,
                                         VAR_5);
  FUNC_0(FUNC_15(&VAR_9, &VAR_8,
                                      &VAR_21, &VAR_22,
                                      VAR_4->wc_ctx,
                                      FUNC_11(
                                        VAR_3->local_abspath,
                                        VAR_5),
                                      VAR_5,
                                      VAR_5));



  VAR_19 =
            (VAR_10 < VAR_11 ? VAR_7 : VAR_6);
  VAR_20 = (VAR_10 < VAR_11 ? VAR_11 : VAR_10);



  if (VAR_19 != ((void*)0) && VAR_20 != VAR_1)
    FUNC_0(FUNC_4(
              &VAR_19, &VAR_20,
              VAR_19, VAR_20,
              (VAR_10 < VAR_11 ? VAR_6 : VAR_7),
              (VAR_10 < VAR_11 ? VAR_10 : VAR_11),
              VAR_3, VAR_4, VAR_5, VAR_5));

  FUNC_0(FUNC_5(
            &VAR_12, &VAR_13, &VAR_14, &VAR_17,
            VAR_3, VAR_15, VAR_8,
            VAR_9, 0, VAR_19, VAR_20,
            VAR_4, VAR_3->pool, VAR_5));


  if (VAR_12 == VAR_1)
    {
      const char *VAR_23;
      svn_ra_session_t *VAR_24;
      const char *VAR_25, *VAR_26;
      svn_client__pathrev_t *VAR_27;
      svn_revnum_t VAR_28;
      svn_node_kind_t VAR_29;




      VAR_23 = FUNC_9(VAR_3);
      VAR_25 = FUNC_12(VAR_21, VAR_19,
                                        VAR_5);
      FUNC_0(FUNC_6(&VAR_24,
                                                   &VAR_26,
                                                   VAR_25, ((void*)0), ((void*)0),
                                                   VAR_0,
                                                   VAR_0,
                                                   VAR_4,
                                                   VAR_5,
                                                   VAR_5));


      FUNC_0(FUNC_3(&VAR_27, VAR_19, VAR_20,
                               VAR_8, VAR_9,
                               VAR_21, VAR_22, VAR_24, VAR_4,
                               VAR_5, VAR_5));
      if (VAR_27 == ((void*)0))
        return VAR_2;
      VAR_28 = VAR_27->rev;



      if (VAR_28 >= VAR_20)
        VAR_28 = VAR_20 > 0 ? VAR_20 - 1 : 0;

      FUNC_0(FUNC_13(VAR_24, "", VAR_20,
                                &VAR_29, VAR_5));
      FUNC_0(FUNC_2(&VAR_18,
                                            VAR_19,
                                            VAR_20,
                                            VAR_29,
                                            VAR_28,
                                            VAR_23,
                                            VAR_21, VAR_22,
                                            VAR_24, VAR_4,
                                            VAR_3->pool, VAR_5));

      if (VAR_18 == ((void*)0))
        return VAR_2;


    }

  VAR_16 = FUNC_1(VAR_3->pool, sizeof(*VAR_16));
  VAR_16->deleted_rev = VAR_12;
  VAR_16->deleted_rev_author = VAR_13;
  if (VAR_12 != VAR_1)
    VAR_16->deleted_repos_relpath = FUNC_14(VAR_8,
                                                      VAR_15,
                                                      VAR_3->pool);
  VAR_16->moves = VAR_17;
  VAR_16->sibling_moves = VAR_18;

  VAR_3->tree_conflict_local_details = VAR_16;

  return VAR_2;
}
