
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_10__ {TYPE_4__* priv; } ;
typedef TYPE_3__ svn_ra_session_t ;
typedef int svn_ra_reporter3_t ;
struct TYPE_11__ {TYPE_2__* fs_path; int repos; int callback_baton; TYPE_1__* callbacks; int repos_url; int fs; } ;
typedef TYPE_4__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int cancel_func; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 void* FUNC_5 (TYPE_4__*,void*,int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int const*,void*,int const**,void**,int *) ;
 int * FUNC_7 (int ,int *,int ,char const*,int ) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (void**,int ,int ,int ,char const*,char const*,int ,int ,int ,int ,int const*,void*,int *,int *,int ,int *) ;
 char* FUNC_10 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_ra_session_t *VAR_4,
              const svn_ra_reporter3_t **VAR_5,
              void **VAR_6,
              svn_revnum_t VAR_7,
              const char *VAR_8,
              const char *VAR_9,
              svn_boolean_t VAR_10,
              svn_depth_t VAR_11,
              svn_boolean_t VAR_12,
              svn_boolean_t VAR_13,
              const svn_delta_editor_t *VAR_14,
              void *VAR_15,
              apr_pool_t *VAR_16,
              apr_pool_t *VAR_17)
{
  svn_ra_local__session_baton_t *VAR_18 = VAR_4->priv;
  void *VAR_19;
  const char *VAR_20 = ((void*)0);


  if (! FUNC_1(VAR_7))
    FUNC_0(FUNC_8(&VAR_7, VAR_18->fs, VAR_17));



  if (VAR_9)
    {
      const char *VAR_21
        = FUNC_10(VAR_18->repos_url, VAR_9, VAR_17);



      if (! VAR_21)
        return FUNC_7
          (VAR_0, ((void*)0),
           FUNC_2("'%s'\n"
             "is not the same repository as\n"
             "'%s'"), VAR_9, VAR_18->repos_url);

      VAR_20 = FUNC_3(VAR_17, "/", VAR_21,
                                  VAR_2);
    }


  *VAR_5 = &VAR_3;

  FUNC_0(FUNC_4(VAR_4, VAR_17));

  if (VAR_18->callbacks)
    FUNC_0(FUNC_6(VAR_18->callbacks->cancel_func,
                                              VAR_18->callback_baton,
                                              VAR_14,
                                              VAR_15,
                                              &VAR_14,
                                              &VAR_15,
                                              VAR_16));


  FUNC_0(FUNC_9(&VAR_19,
                                  VAR_7,
                                  VAR_18->repos,
                                  VAR_18->fs_path->data,
                                  VAR_8,
                                  VAR_20,
                                  VAR_10,
                                  VAR_11,
                                  VAR_13,
                                  VAR_12,
                                  VAR_14,
                                  VAR_15,
                                  ((void*)0),
                                  ((void*)0),
                                  0,






                                  VAR_16));



  *VAR_6 = FUNC_5(VAR_18, VAR_19, VAR_16);

  return VAR_1;
}
