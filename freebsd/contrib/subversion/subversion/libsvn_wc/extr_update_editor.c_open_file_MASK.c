
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_wc_conflict_reason_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct file_baton {void* shadowed; void* edit_obstructed; int local_abspath; int * edit_conflict; int pool; void* already_notified; void* skip_this; int old_repos_relpath; int new_repos_relpath; int original_checksum; int changed_author; int changed_date; int changed_rev; int old_revision; int local_prop_mods; } ;
struct edit_baton {int db; } ;
struct dir_baton {struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int *,int ,int ,struct edit_baton*,struct dir_baton*,int ,int *) ;
 int FUNC_3 (int **,struct edit_baton*,int ,int ,void*,int ,int ,int ,int *) ;
 int FUNC_4 (struct edit_baton*,int ,int ,int ,int *) ;
 int FUNC_5 (struct file_baton**,struct dir_baton*,char const*,scalar_t__,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int ,int ,int *) ;
 int FUNC_7 (struct edit_baton*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__*,int *,int *,int ,int ,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,int ,int ,int *) ;
 int FUNC_12 (scalar_t__*,int ,int ,int *) ;
 int FUNC_13 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,scalar_t__*,int ,int ,int ,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_14(const char *VAR_12,
          void *VAR_13,
          svn_revnum_t VAR_14,
          apr_pool_t *VAR_15,
          void **VAR_16)
{
  struct dir_baton *VAR_17 = VAR_13;
  struct edit_baton *VAR_18 = VAR_17->edit_baton;
  struct file_baton *VAR_19;
  svn_boolean_t VAR_20;
  svn_boolean_t VAR_21 = VAR_0;
  svn_boolean_t VAR_22;
  svn_wc__db_status_t VAR_23;
  svn_node_kind_t VAR_24;
  svn_skel_t *VAR_25 = ((void*)0);



  apr_pool_t *VAR_26 = FUNC_8(VAR_15);

  FUNC_0(FUNC_5(&VAR_19, VAR_17, VAR_12, VAR_0, VAR_15));
  *VAR_16 = VAR_19;

  if (VAR_19->skip_this)
    return VAR_1;


  {
    svn_boolean_t VAR_27;

    FUNC_0(FUNC_12(&VAR_27, VAR_18->db, VAR_19->local_abspath,
                                 VAR_15));

    if (VAR_27)
      {

        FUNC_0(FUNC_7(VAR_18, VAR_19->local_abspath, VAR_15));
        VAR_19->skip_this = VAR_2;
        VAR_19->already_notified = VAR_2;

        FUNC_4(VAR_18, VAR_19->local_abspath, VAR_3,
                        VAR_11, VAR_15);

        return VAR_1;
      }
  }



  FUNC_0(FUNC_13(&VAR_23, &VAR_24, &VAR_19->old_revision,
                               &VAR_19->old_repos_relpath, ((void*)0), ((void*)0),
                               &VAR_19->changed_rev, &VAR_19->changed_date,
                               &VAR_19->changed_author, ((void*)0),
                               &VAR_19->original_checksum, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_20, ((void*)0), ((void*)0), &VAR_19->local_prop_mods,
                               ((void*)0), ((void*)0), &VAR_22,
                               VAR_18->db, VAR_19->local_abspath,
                               VAR_19->pool, VAR_26));

  if (VAR_22)
    FUNC_0(FUNC_11(((void*)0), ((void*)0), &VAR_19->old_revision,
                                     &VAR_19->old_repos_relpath, ((void*)0), ((void*)0),
                                     &VAR_19->changed_rev, &VAR_19->changed_date,
                                     &VAR_19->changed_author, ((void*)0),
                                     &VAR_19->original_checksum, ((void*)0), ((void*)0),
                                     ((void*)0), ((void*)0), ((void*)0),
                                     VAR_18->db, VAR_19->local_abspath,
                                     VAR_19->pool, VAR_26));

  FUNC_0(FUNC_2(&VAR_19->new_repos_relpath, VAR_19->local_abspath,
                                  VAR_19->old_repos_relpath, VAR_18, VAR_17,
                                  VAR_19->pool, VAR_26));


  if (VAR_19->shadowed)
    VAR_20 = VAR_0;
  else if (VAR_20)
    FUNC_0(FUNC_6(&VAR_20, &VAR_21,
                                    VAR_18->db, VAR_19->local_abspath, VAR_15));
  if (VAR_20)
    {
      FUNC_0(FUNC_7(VAR_18, VAR_19->local_abspath, VAR_15));

      VAR_19->skip_this = VAR_2;
      VAR_19->already_notified = VAR_2;

      FUNC_4(VAR_18, VAR_19->local_abspath, VAR_4,
                      VAR_10, VAR_26);

      FUNC_9(VAR_26);

      return VAR_1;
    }
  else if (VAR_21)
    {
      VAR_19->shadowed = VAR_2;
    }



  if (!VAR_19->shadowed)
    FUNC_0(FUNC_3(&VAR_25, VAR_18, VAR_19->local_abspath,
                                VAR_23, VAR_2, VAR_3,
                                VAR_5,
                                VAR_19->pool, VAR_26));


  if (VAR_25 != ((void*)0))
    {
      svn_wc_conflict_reason_t VAR_28;
      VAR_19->edit_conflict = VAR_25;


      FUNC_0(FUNC_10(&VAR_28, ((void*)0), ((void*)0),
                                                  VAR_18->db, VAR_19->local_abspath,
                                                  VAR_25,
                                                  VAR_26, VAR_26));
      FUNC_1(VAR_28 == VAR_6
                     || VAR_28 == VAR_7
                     || VAR_28 == VAR_9
                     || VAR_28 == VAR_8);


      if (VAR_28 == VAR_8)
        VAR_19->edit_obstructed = VAR_2;
      else
        VAR_19->shadowed = VAR_2;
    }

  FUNC_9(VAR_26);

  return VAR_1;
}
