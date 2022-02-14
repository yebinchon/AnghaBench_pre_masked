
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_repos_verify_callback_t ;
typedef int svn_repos_t ;
struct TYPE_14__ {scalar_t__ revision; } ;
typedef TYPE_1__ svn_repos_notify_t ;
typedef int (* svn_repos_notify_func_t ) (void*,TYPE_1__*,int *) ;
typedef int svn_fs_t ;
typedef int * svn_fs_progress_notify_func_t ;
struct TYPE_15__ {scalar_t__ apr_err; } ;
typedef TYPE_3__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct verify_fs_notify_func_baton_t {void* notify; void* notify_baton; int (* notify_func ) (void*,TYPE_1__*,int *) ;} ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (char*) ;
 struct verify_fs_notify_func_baton_t* FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__,TYPE_3__*,int ,void*,int *) ;
 TYPE_3__* FUNC_5 (int ,int *,int ,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 TYPE_3__* FUNC_10 (int ,int ,scalar_t__,scalar_t__,int *,struct verify_fs_notify_func_baton_t*,int ,void*,int *) ;
 int FUNC_11 (scalar_t__*,int *,int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 void* FUNC_16 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 TYPE_3__* FUNC_17 (int *,scalar_t__,int (*) (void*,TYPE_1__*,int *),void*,scalar_t__,int ,int ,void*,int *) ;

svn_error_t *
FUNC_18(svn_repos_t *VAR_8,
                     svn_revnum_t VAR_9,
                     svn_revnum_t VAR_10,
                     svn_boolean_t VAR_11,
                     svn_boolean_t VAR_12,
                     svn_repos_notify_func_t VAR_13,
                     void *VAR_14,
                     svn_repos_verify_callback_t VAR_15,
                     void *VAR_16,
                     svn_cancel_func_t VAR_17,
                     void *VAR_18,
                     apr_pool_t *VAR_19)
{
  svn_fs_t *VAR_20 = FUNC_15(VAR_8);
  svn_revnum_t VAR_21;
  svn_revnum_t VAR_22;
  apr_pool_t *VAR_23 = FUNC_13(VAR_19);
  svn_repos_notify_t *VAR_24;
  svn_fs_progress_notify_func_t VAR_25 = ((void*)0);
  struct verify_fs_notify_func_baton_t *VAR_26 = ((void*)0);
  svn_error_t *VAR_27;



  FUNC_0(FUNC_9(VAR_20, VAR_19));


  FUNC_0(FUNC_11(&VAR_21, VAR_20, VAR_19));


  if (! FUNC_1(VAR_9))
    VAR_9 = 0;
  if (! FUNC_1(VAR_10))
    VAR_10 = VAR_21;


  if (VAR_9 > VAR_10)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_2("Start revision %ld"
                               " is greater than end revision %ld"),
                             VAR_9, VAR_10);
  if (VAR_10 > VAR_21)
    return FUNC_5(VAR_1, ((void*)0),
                             FUNC_2("End revision %ld is invalid "
                               "(youngest revision is %ld)"),
                             VAR_10, VAR_21);



  if (VAR_13)
    {
      VAR_24 = FUNC_16(VAR_5, VAR_19);

      VAR_25 = VAR_7;
      VAR_26 = FUNC_3(VAR_19, sizeof(*VAR_26));
      VAR_26->notify_func = VAR_13;
      VAR_26->notify_baton = VAR_14;
      VAR_26->notify
        = FUNC_16(VAR_6, VAR_19);
    }


  VAR_27 = FUNC_10(FUNC_8(VAR_20, VAR_19), FUNC_7(VAR_20, VAR_19),
                      VAR_9, VAR_10,
                      VAR_25, VAR_26,
                      VAR_17, VAR_18, VAR_19);

  if (VAR_27 && VAR_27->apr_err == VAR_0)
    {
      return FUNC_6(VAR_27);
    }
  else if (VAR_27)
    {
      FUNC_0(FUNC_4(VAR_2, VAR_27, VAR_15,
                           VAR_16, VAR_23));
    }

  if (!VAR_12)
    for (VAR_22 = VAR_9; VAR_22 <= VAR_10; VAR_22++)
      {
        FUNC_12(VAR_23);


        VAR_27 = FUNC_17(VAR_20, VAR_22, VAR_13, VAR_14,
                                  VAR_9, VAR_11,
                                  VAR_17, VAR_18,
                                  VAR_23);

        if (VAR_27 && VAR_27->apr_err == VAR_0)
          {
            return FUNC_6(VAR_27);
          }
        else if (VAR_27)
          {
            FUNC_0(FUNC_4(VAR_22, VAR_27, VAR_15, VAR_16,
                                 VAR_23));
          }
        else if (VAR_13)
          {

            VAR_24->revision = VAR_22;
            VAR_13(VAR_14, VAR_24, VAR_23);
          }
      }


  if (VAR_13)
    {
      VAR_24 = FUNC_16(VAR_4, VAR_23);
      VAR_13(VAR_14, VAR_24, VAR_23);
    }

  FUNC_14(VAR_23);

  return VAR_3;
}
