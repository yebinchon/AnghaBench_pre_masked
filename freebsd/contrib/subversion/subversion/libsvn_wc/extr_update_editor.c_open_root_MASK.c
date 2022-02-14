
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct edit_baton {char const* target_abspath; char* target_basename; int * target_revision; int db; void* root_opened; } ;
struct dir_baton {char const* local_abspath; int was_incomplete; int new_repos_relpath; void* shadowed; int * edit_conflict; int old_revision; int old_repos_relpath; int pool; int ambient_depth; int changed_author; int changed_date; int changed_rev; void* already_notified; void* skip_this; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 void* VAR_3 ;
 TYPE_1__* FUNC_1 (scalar_t__*,scalar_t__*,int ,char const*,int *) ;
 int FUNC_2 (int *,char const*,int ,struct edit_baton*,int *,int ,int *) ;
 int FUNC_3 (int *,struct edit_baton*,char const*,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_4 (struct edit_baton*,char const*,int ,int ,int *) ;
 int FUNC_5 (struct dir_baton**,int *,struct edit_baton*,int *,scalar_t__,int *) ;
 int FUNC_6 (struct edit_baton*,char const*,int *) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *,int ,char const*,int ,int ,char const*,int *,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int ,int *) ;
 int FUNC_13 (int *,int *,char const**,int *,int ,char const*,int *,int *) ;
 int FUNC_14 (int ,char const*,int *,int *,int *) ;
 int FUNC_15 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int ,char const*,int ,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_16 (int ,char const*,int ,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_17(void *VAR_11,
          svn_revnum_t VAR_12,
          apr_pool_t *VAR_13,
          void **VAR_14)
{
  struct edit_baton *VAR_15 = VAR_11;
  struct dir_baton *VAR_16;
  svn_boolean_t VAR_17, VAR_18;
  svn_error_t *VAR_19;
  svn_wc__db_status_t VAR_20;
  svn_wc__db_status_t VAR_21;
  svn_node_kind_t VAR_22;
  svn_boolean_t VAR_23;



  VAR_15->root_opened = VAR_3;

  FUNC_0(FUNC_5(&VAR_16, ((void*)0), VAR_15, ((void*)0), VAR_0, VAR_13));
  *VAR_14 = VAR_16;

  VAR_19 = FUNC_1(&VAR_17, &VAR_18,
                                   VAR_15->db, VAR_16->local_abspath, VAR_13);

  if (VAR_19)
    {
      if (VAR_19->apr_err != VAR_1)
        return FUNC_9(VAR_19);

      FUNC_8(VAR_19);
      VAR_17 = VAR_18 = VAR_0;
    }
  else if (VAR_17)
    {


      FUNC_0(FUNC_6(VAR_15, VAR_16->local_abspath, VAR_13));
      FUNC_0(FUNC_6(VAR_15, VAR_15->target_abspath, VAR_13));

      VAR_16->skip_this = VAR_3;
      VAR_16->already_notified = VAR_3;



      FUNC_4(VAR_15, VAR_15->target_abspath, VAR_5,
                      VAR_9, VAR_13);

      return VAR_2;
    }


  FUNC_0(FUNC_15(&VAR_20, &VAR_22, &VAR_16->old_revision,
                               &VAR_16->old_repos_relpath, ((void*)0), ((void*)0),
                               &VAR_16->changed_rev, &VAR_16->changed_date,
                               &VAR_16->changed_author, &VAR_16->ambient_depth,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), &VAR_23,
                               VAR_15->db, VAR_16->local_abspath,
                               VAR_16->pool, VAR_13));

  if (VAR_23)
    {
      FUNC_0(FUNC_12(&VAR_21, ((void*)0),
                                       &VAR_16->old_revision,
                                       &VAR_16->old_repos_relpath, ((void*)0), ((void*)0),
                                       &VAR_16->changed_rev, &VAR_16->changed_date,
                                       &VAR_16->changed_author,
                                       &VAR_16->ambient_depth,
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       VAR_15->db, VAR_16->local_abspath,
                                       VAR_16->pool, VAR_13));
    }
  else
    VAR_21 = VAR_20;

  FUNC_0(FUNC_2(&VAR_16->new_repos_relpath, VAR_16->local_abspath,
                                  VAR_16->old_repos_relpath, VAR_15, ((void*)0),
                                  VAR_16->pool, VAR_13));

  if (VAR_18)
    VAR_16->shadowed = VAR_3;
  else if (VAR_23)
    {
      const char *VAR_24;

      FUNC_0(FUNC_13(((void*)0), ((void*)0), &VAR_24,
                                       ((void*)0), VAR_15->db, VAR_16->local_abspath,
                                       VAR_13, VAR_13));

      if (VAR_24)
        {



          svn_skel_t *VAR_25 = FUNC_11(VAR_13);

          FUNC_0(FUNC_10(
                    VAR_25, VAR_15->db, VAR_24,
                    VAR_8,
                    VAR_7,
                    VAR_24, VAR_13, VAR_13));

          if (FUNC_7(VAR_16->local_abspath, VAR_24))
            {



              FUNC_0(FUNC_3(VAR_25, VAR_15,
                                        VAR_24,
                                        VAR_16->old_repos_relpath,
                                        VAR_16->old_revision,
                                        VAR_16->new_repos_relpath,
                                        VAR_4, VAR_4,
                                        ((void*)0), VAR_13, VAR_13));
              FUNC_0(FUNC_14(VAR_15->db,
                                                  VAR_24,
                                                  VAR_25,
                                                  ((void*)0), VAR_13));
              FUNC_4(VAR_15, VAR_24, VAR_4,
                              VAR_10, VAR_13);
            }
          else
            VAR_16->edit_conflict = VAR_25;
        }

      VAR_16->shadowed = VAR_3;

    }

  if (*VAR_15->target_basename == '\0')
    {


      VAR_16->was_incomplete = (VAR_21 == VAR_6);
      FUNC_0(FUNC_16(VAR_15->db,
                                                        VAR_16->local_abspath,
                                                        VAR_16->new_repos_relpath,
                                                        *VAR_15->target_revision,
                                                        VAR_13));
    }

  return VAR_2;
}
