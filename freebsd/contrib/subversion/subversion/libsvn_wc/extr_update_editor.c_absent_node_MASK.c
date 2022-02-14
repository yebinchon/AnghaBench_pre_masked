
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_wc_notify_t ;
typedef scalar_t__ svn_wc__db_status_t ;
typedef int svn_skel_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct edit_baton {int cancel_baton; int cancel_func; int conflict_baton; scalar_t__ conflict_func; int db; int * target_revision; int repos_uuid; int repos_root; int notify_baton; int (* notify_func ) (int ,int *,int *) ;} ;
struct dir_baton {int new_repos_relpath; int edit_obstructed; int shadowed; int local_abspath; scalar_t__ skip_this; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int **,struct edit_baton*,char const*,scalar_t__,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *,struct edit_baton*,char const*,int *,int ,char const*,int ,int ,int *,int *,int *) ;
 int FUNC_4 (char const*,int ,struct dir_baton*,int *) ;
 int FUNC_5 (struct edit_baton*,char const*,int ,int ,int *) ;
 int FUNC_6 (struct dir_baton*,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 char* FUNC_8 (char const*,int *) ;
 char* FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 char* FUNC_14 (int ,char const*,int *) ;
 int FUNC_15 (int ,char const*,int ,int *,int *,scalar_t__,int ,int ,int ,int *) ;
 int FUNC_16 (int ,char const*,char const*,int ,int ,int ,int ,scalar_t__,int *,int *,int *) ;
 int FUNC_17 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int ,char const*,int *,int *) ;
 int FUNC_18 (scalar_t__*,int ,char const*,int *) ;
 TYPE_1__* FUNC_19 (scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * FUNC_20 (char const*,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static svn_error_t *
FUNC_21(const char *VAR_12,
            svn_node_kind_t VAR_13,
            void *VAR_14,
            apr_pool_t *VAR_15)
{
  struct dir_baton *VAR_16 = VAR_14;
  struct edit_baton *VAR_17 = VAR_16->edit_baton;
  apr_pool_t *VAR_18 = FUNC_12(VAR_15);
  const char *VAR_19 = FUNC_8(VAR_12, ((void*)0));
  const char *VAR_20;
  svn_error_t *VAR_21;
  svn_wc__db_status_t VAR_22;
  svn_node_kind_t VAR_23;
  svn_skel_t *VAR_24 = ((void*)0);

  if (VAR_16->skip_this)
    return VAR_3;

  VAR_20 = FUNC_9(VAR_16->local_abspath, VAR_19, VAR_18);


  VAR_21 = FUNC_19(&VAR_22, &VAR_23, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                             VAR_17->db, VAR_20,
                             VAR_18, VAR_18);

  if (VAR_21)
    {
      if (VAR_21->apr_err != VAR_1)
        return FUNC_11(VAR_21);

      FUNC_10(VAR_21);
      VAR_22 = VAR_7;
      VAR_23 = VAR_4;
    }

  if (VAR_22 != VAR_8)
    FUNC_0(FUNC_6(VAR_16, VAR_18));


  if (VAR_22 == VAR_6)
    {
      svn_boolean_t VAR_25;


      FUNC_0(FUNC_18(&VAR_25, VAR_17->db, VAR_20,
                                   VAR_18));

      if (VAR_25)
        {
        }
      else
        {
          svn_boolean_t VAR_26;
          svn_revnum_t VAR_27;

          FUNC_0(FUNC_17(((void*)0), ((void*)0), &VAR_27, ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           &VAR_26,
                                           VAR_17->db, VAR_20,
                                           VAR_18, VAR_18));

          if (VAR_26)
            {
              if (VAR_17->notify_func)
                {
                  svn_wc_notify_t *VAR_28;
                  VAR_28 = FUNC_20(
                                    VAR_20,
                                    VAR_11,
                                    VAR_18);

                  VAR_17->notify_func(VAR_17->notify_baton, VAR_28, VAR_18);
                }

              FUNC_13(VAR_18);
              return VAR_3;
            }
          else
            {



              FUNC_0(FUNC_4(VAR_12, VAR_27, VAR_16, VAR_18));



            }
        }
    }
  else if (VAR_22 == VAR_7
           || VAR_22 == VAR_8
           || VAR_22 == VAR_5)
    {


    }
  else
    {



      FUNC_1(VAR_22 != VAR_6);

      if (!VAR_16->shadowed && !VAR_16->edit_obstructed)
        FUNC_0(FUNC_2(&VAR_24, VAR_17, VAR_20,
                                    VAR_22, VAR_0, VAR_4,
                                    VAR_9,
                                    VAR_18, VAR_18));

    }

  {
    const char *VAR_29;
    VAR_29 = FUNC_14(VAR_16->new_repos_relpath, VAR_19, VAR_18);

    if (VAR_24)
      FUNC_0(FUNC_3(VAR_24, VAR_17, VAR_20,
                                ((void*)0), VAR_2, VAR_29,
                                VAR_23, VAR_4, ((void*)0),
                                VAR_18, VAR_18));



    FUNC_0(FUNC_16(VAR_17->db, VAR_20,
                                              VAR_29, VAR_17->repos_root,
                                              VAR_17->repos_uuid,
                                              *(VAR_17->target_revision),
                                              VAR_13,
                                              VAR_8,
                                              VAR_24, ((void*)0),
                                              VAR_18));

    if (VAR_24)
      {
        if (VAR_17->conflict_func)
          FUNC_0(FUNC_15(VAR_17->db, VAR_20,
                                                   VAR_23,
                                                   VAR_24,
                                                   ((void*)0) ,
                                                   VAR_17->conflict_func,
                                                   VAR_17->conflict_baton,
                                                   VAR_17->cancel_func,
                                                   VAR_17->cancel_baton,
                                                   VAR_18));
        FUNC_5(VAR_17, VAR_20, VAR_23, VAR_10,
                        VAR_18);
      }
  }

  FUNC_13(VAR_18);

  return VAR_3;
}
