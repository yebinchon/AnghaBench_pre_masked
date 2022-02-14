
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


struct TYPE_20__ {int revision; } ;
typedef TYPE_1__ svn_wc_notify_t ;
struct TYPE_21__ {int data; } ;
typedef TYPE_2__ svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_22__ {int revprops; int revision; int changed_paths2; } ;
typedef TYPE_3__ svn_log_entry_t ;
struct TYPE_23__ {char action; int node_kind; } ;
typedef TYPE_4__ svn_log_changed_path2_t ;
struct TYPE_24__ {scalar_t__ apr_err; } ;
typedef TYPE_5__ svn_error_t ;
typedef int svn_client__pathrev_t ;
typedef scalar_t__ svn_boolean_t ;
struct repos_move_info {int moved_from_repos_relpath; int moved_to_repos_relpath; } ;
struct find_deleted_rev_baton {scalar_t__ related_peg_rev; int replacing_node_kind; int deleted_rev_author; int result_pool; int deleted_rev; int deleted_repos_relpath; struct repos_move_info* move; int moves_table; TYPE_14__* ctx; int extra_ra_session; int repos_uuid; int repos_root_url; int * related_repos_relpath; int victim_abspath; } ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
typedef int apr_array_header_t ;
struct TYPE_19__ {int notify_baton2; int (* notify_func2 ) (int ,TYPE_1__*,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int *,int) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 TYPE_5__* FUNC_7 (int **,int *,scalar_t__,int ,int ,int ,int ,int ,TYPE_14__*,int *,int *) ;
 struct repos_move_info* FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_5__*) ;
 TYPE_5__* FUNC_12 (int ,int *,int *) ;
 TYPE_5__* FUNC_13 (TYPE_5__*) ;
 TYPE_2__* FUNC_14 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_15 (int ,char const*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char const*,int ) ;
 char* FUNC_20 (int ,int ) ;
 TYPE_1__* FUNC_21 (int ,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static svn_error_t *
FUNC_22(void *VAR_9,
                 svn_log_entry_t *VAR_10,
                 apr_pool_t *VAR_11)
{
  struct find_deleted_rev_baton *VAR_12 = VAR_9;
  apr_hash_index_t *VAR_13;
  apr_pool_t *VAR_14;
  svn_boolean_t VAR_15 = VAR_0;
  svn_node_kind_t VAR_16 = VAR_7;

  if (VAR_12->ctx->notify_func2)
    {
      svn_wc_notify_t *VAR_17;

      VAR_17 = FUNC_21(
                 VAR_12->victim_abspath,
                 VAR_8,
                 VAR_11),
      VAR_17->revision = VAR_10->revision;
      VAR_12->ctx->notify_func2(VAR_12->ctx->notify_baton2, VAR_17, VAR_11);
    }


  if (! VAR_10->changed_paths2)
    return VAR_4;

  VAR_14 = FUNC_17(VAR_11);
  for (VAR_13 = FUNC_1(VAR_11, VAR_10->changed_paths2);
       VAR_13 != ((void*)0);
       VAR_13 = FUNC_3(VAR_13))
    {
      const char *VAR_18 = FUNC_4(VAR_13);
      svn_log_changed_path2_t *VAR_19 = FUNC_5(VAR_13);

      FUNC_16(VAR_14);


      if (VAR_18[0] == '/')
          VAR_18++;


      if (!VAR_15 &&
          FUNC_15(VAR_12->deleted_repos_relpath, VAR_18) == 0 &&
          (VAR_19->action == 'D' || VAR_19->action == 'R'))
        {
          VAR_15 = VAR_6;

          if (VAR_12->related_repos_relpath != ((void*)0) &&
              VAR_12->related_peg_rev != VAR_3)
            {
              svn_client__pathrev_t *VAR_20;
              svn_error_t *VAR_21;





              VAR_21 = FUNC_7(&VAR_20,
                             VAR_12->related_repos_relpath,
                             VAR_12->related_peg_rev,
                             VAR_12->deleted_repos_relpath,
                             FUNC_9(VAR_10->revision),
                             VAR_12->repos_root_url, VAR_12->repos_uuid,
                             VAR_12->extra_ra_session, VAR_12->ctx, VAR_14, VAR_14);
              if (VAR_21)
                {

                  if (VAR_21->apr_err == VAR_2)
                    {
                      FUNC_11(VAR_21);
                      VAR_20 = ((void*)0);
                    }
                  else
                    return FUNC_13(VAR_21);
                }

              VAR_15 = (VAR_20 != ((void*)0));
            }

          if (VAR_15 && VAR_19->action == 'R')
            VAR_16 = VAR_19->node_kind;
        }
    }
  FUNC_18(VAR_14);

  if (!VAR_15)
    {
      apr_array_header_t *VAR_22;

      VAR_22 = FUNC_2(VAR_12->moves_table, &VAR_10->revision,
                           sizeof(svn_revnum_t));
      if (VAR_22)
        {
          struct repos_move_info *VAR_23;

          VAR_23 = FUNC_8(VAR_12->deleted_repos_relpath,
                                          VAR_22, VAR_11);
          if (VAR_23)
            {
              const char *VAR_24;


              VAR_12->move = VAR_23;
              VAR_24 = FUNC_20(VAR_23->moved_to_repos_relpath,
                                                  VAR_12->deleted_repos_relpath);
              if (VAR_24)
                VAR_12->deleted_repos_relpath =
                  FUNC_19(VAR_23->moved_from_repos_relpath, VAR_24,
                                   VAR_12->result_pool);
            }
        }
    }
  else
    {
      svn_string_t *VAR_25;

      VAR_12->deleted_rev = VAR_10->revision;
      VAR_25 = FUNC_14(VAR_10->revprops,
                             VAR_5);
      if (VAR_25)
        VAR_12->deleted_rev_author = FUNC_6(VAR_12->result_pool, VAR_25->data);
      else
        VAR_12->deleted_rev_author = FUNC_0("unknown author");

      VAR_12->replacing_node_kind = VAR_16;


      return FUNC_12(VAR_1, ((void*)0), ((void*)0));
    }

  return VAR_4;
}
