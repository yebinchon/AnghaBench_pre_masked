
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_action_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct edit_baton {char const* target_abspath; int target_deleted; int cancel_baton; int cancel_func; int conflict_baton; scalar_t__ conflict_func; int db; int * target_revision; } ;
struct dir_baton {scalar_t__ edit_obstructed; scalar_t__ shadowed; int local_abspath; int pool; scalar_t__ deletion_conflicts; scalar_t__ old_repos_relpath; scalar_t__ skip_this; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char const**,char const*,char const*,struct edit_baton*,struct dir_baton*,int *,int *) ;
 int FUNC_4 (int **,struct edit_baton*,char const*,scalar_t__,int,int ,int ,int ,int *) ;
 int FUNC_5 (int *,struct edit_baton*,char const*,char const*,int ,char const*,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct edit_baton*,char const*,int ,int ,int *) ;
 int FUNC_7 (struct dir_baton*,int *) ;
 int FUNC_8 (int*,int *,int ,char const*,int *) ;
 int FUNC_9 (char const**,int ,char const*,int *) ;
 int FUNC_10 (struct edit_baton*,char const*,int *) ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 int FUNC_12 (scalar_t__,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 char* FUNC_15 (char const*,int *) ;
 char* FUNC_16 (scalar_t__,char const*) ;
 int FUNC_17 (int ,char const*,int ,int *,int *,scalar_t__,int ,int ,int ,int *) ;
 int FUNC_18 (scalar_t__*,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 int FUNC_19 (int ,char const*,int,int,int,int ,int *,int *,int *) ;
 int FUNC_20 (int*,int ,char const*,int *) ;
 int FUNC_21 (scalar_t__*,int *,int *,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *,int *,int *,int *,int*,int ,char const*,int *,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_22 (int ,int ,int ,int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static svn_error_t *
FUNC_23(const char *VAR_15,
             svn_revnum_t VAR_16,
             void *VAR_17,
             apr_pool_t *VAR_18)
{
  struct dir_baton *VAR_19 = VAR_17;
  struct edit_baton *VAR_20 = VAR_19->edit_baton;
  const char *VAR_21 = FUNC_15(VAR_15, ((void*)0));
  const char *VAR_22;
  const char *VAR_23;
  const char *VAR_24;
  svn_node_kind_t VAR_25;
  svn_revnum_t VAR_26;
  svn_boolean_t VAR_27;
  svn_boolean_t VAR_28;
  svn_skel_t *VAR_29 = ((void*)0);
  svn_wc__db_status_t VAR_30;
  svn_wc__db_status_t VAR_31;
  apr_pool_t *VAR_32;
  svn_boolean_t VAR_33;
  svn_boolean_t VAR_34;

  if (VAR_19->skip_this)
    return VAR_2;

  VAR_32 = FUNC_13(VAR_19->pool);

  FUNC_0(FUNC_7(VAR_19, VAR_32));

  FUNC_0(FUNC_9(&VAR_22, VAR_19->local_abspath, VAR_21,
                               VAR_32));

  VAR_33 = (FUNC_11(VAR_22, VAR_20->target_abspath) == 0);


  {
    svn_boolean_t VAR_35;


    FUNC_0(FUNC_20(&VAR_35, VAR_20->db, VAR_22,
                                 VAR_32));

    if (VAR_35)
      {

        FUNC_0(FUNC_10(VAR_20, VAR_22, VAR_18));
        FUNC_6(VAR_20, VAR_22, VAR_5,
                        VAR_14, VAR_32);

        FUNC_14(VAR_32);

        return VAR_2;
      }
  }

  FUNC_0(FUNC_21(&VAR_30, &VAR_25, &VAR_26, &VAR_23,
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_27, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), &VAR_28,
                               VAR_20->db, VAR_22,
                               VAR_32, VAR_32));

  if (!VAR_28)
    {
      VAR_31 = VAR_30;
    }
  else
    FUNC_0(FUNC_18(&VAR_31, ((void*)0), &VAR_26,
                                     &VAR_23,
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                     VAR_20->db, VAR_22,
                                     VAR_32, VAR_32));

  if (VAR_19->old_repos_relpath && VAR_23)
    {
      const char *VAR_36;

      VAR_36 = FUNC_16(VAR_19->old_repos_relpath,
                                                VAR_23);

      VAR_34 = (!VAR_36 || FUNC_11(VAR_36, VAR_21) != 0);
    }
  else
    VAR_34 = VAR_0;


  if (VAR_19->shadowed)
    VAR_27 = VAR_0;
  else if (VAR_27)
    FUNC_0(FUNC_8(&VAR_27, ((void*)0),
                                    VAR_20->db, VAR_22, VAR_32));
  if (VAR_27)
    {
      FUNC_0(FUNC_10(VAR_20, VAR_22, VAR_32));

      FUNC_6(VAR_20, VAR_22, VAR_5,
                      VAR_10,
                      VAR_32);

      FUNC_14(VAR_32);

      return VAR_2;
    }




  if (VAR_31 == VAR_7
      || VAR_31 == VAR_6
      || VAR_31 == VAR_8)
    {
      FUNC_0(FUNC_19(VAR_20->db, VAR_22, VAR_3,
                                     VAR_33, VAR_0,
                                     *VAR_20->target_revision,
                                     ((void*)0), ((void*)0),
                                     VAR_32));

      if (VAR_33)
        VAR_20->target_deleted = VAR_3;

      FUNC_14(VAR_32);

      return VAR_2;
    }
  if (!VAR_19->shadowed && !VAR_19->edit_obstructed)
    {
      FUNC_0(FUNC_4(&VAR_29, VAR_20, VAR_22,
                                  VAR_30, VAR_3,
                                  VAR_25,
                                  VAR_9,
                                  VAR_19->pool, VAR_32));
    }

  if (VAR_29 != ((void*)0))
    {




      if (!VAR_19->deletion_conflicts)
        VAR_19->deletion_conflicts = FUNC_1(VAR_19->pool);

      FUNC_12(VAR_19->deletion_conflicts, FUNC_2(VAR_19->pool, VAR_21),
                    VAR_29);



    }




  FUNC_0(FUNC_3(&VAR_24, VAR_22,
                                  VAR_23, VAR_20, VAR_19, VAR_32,
                                  VAR_32));
  FUNC_0(FUNC_5(VAR_29, VAR_20, VAR_22, VAR_23,
                            VAR_26, VAR_24,
                            VAR_25, VAR_4, ((void*)0),
                            VAR_19->pool, VAR_32));
  if (! VAR_33 && ! VAR_34)
    {

      FUNC_0(FUNC_19(VAR_20->db, VAR_22,
                                     (VAR_29 != ((void*)0)),
                                     VAR_0, VAR_0,
                                     VAR_1 ,
                                     VAR_29, ((void*)0),
                                     VAR_32));
    }
  else
    {

      FUNC_0(FUNC_19(VAR_20->db, VAR_22,
                                     (VAR_29 != ((void*)0)),
                                     VAR_3, VAR_0,
                                     *VAR_20->target_revision,
                                     VAR_29, ((void*)0),
                                     VAR_32));
      if (VAR_33)
        VAR_20->target_deleted = VAR_3;
      else
        {

          FUNC_0(FUNC_10(VAR_20, VAR_22, VAR_18));
        }
    }

  FUNC_0(FUNC_22(VAR_20->db, VAR_19->local_abspath,
                         VAR_20->cancel_func, VAR_20->cancel_baton,
                         VAR_32));


  if (VAR_29)
    {
      if (VAR_20->conflict_func)
        FUNC_0(FUNC_17(VAR_20->db, VAR_22,
                                                 VAR_25,
                                                 VAR_29,
                                                 ((void*)0) ,
                                                 VAR_20->conflict_func,
                                                 VAR_20->conflict_baton,
                                                 VAR_20->cancel_func,
                                                 VAR_20->cancel_baton,
                                                 VAR_32));
      FUNC_6(VAR_20, VAR_22, VAR_25,
                      VAR_11, VAR_32);
    }
  else
    {
      svn_wc_notify_action_t VAR_37 = VAR_12;

      if (VAR_19->shadowed || VAR_19->edit_obstructed)
        VAR_37 = VAR_13;

      FUNC_6(VAR_20, VAR_22, VAR_25, VAR_37, VAR_32);
    }

  FUNC_14(VAR_32);

  return VAR_2;
}
