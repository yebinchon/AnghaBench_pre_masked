
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fs; int hooks_env_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int * (* svn_fs_lock_callback_t ) (void*,char const*,int *,int *,int *) ;
typedef int svn_fs_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct lock_many_baton_t {TYPE_5__* paths; int * pool; int * cb_err; void* lock_baton; int * (* lock_callback ) (void*,char const*,int *,int *,int *) ;int need_lock; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 TYPE_5__* FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 char* FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int ,int *,int ) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (char const**,int *) ;
 int FUNC_15 (int **,int ) ;
 int * FUNC_16 (int ,int *,int ,int ,struct lock_many_baton_t*,int *,int *) ;
 int FUNC_17 (int *,char const*,char const*) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (TYPE_1__*,int *,TYPE_5__*,char const*,int *) ;
 int * FUNC_22 (TYPE_1__*,int *,char const*,char const*,char const*,int ,int *) ;
 int FUNC_23 (int **,int ,int *,int *) ;

svn_error_t *
FUNC_24(svn_repos_t *VAR_5,
                         apr_hash_t *VAR_6,
                         svn_boolean_t VAR_7,
                         svn_fs_lock_callback_t VAR_8,
                         void *VAR_9,
                         apr_pool_t *VAR_10,
                         apr_pool_t *VAR_11)
{
  svn_error_t *VAR_12, *VAR_13 = VAR_3;
  svn_fs_access_t *VAR_14 = ((void*)0);
  const char *VAR_15 = ((void*)0);
  apr_hash_t *VAR_16;
  apr_hash_t *VAR_17 = FUNC_5(VAR_11);
  apr_hash_index_t *VAR_18;
  apr_pool_t *VAR_19 = FUNC_19(VAR_11);
  struct lock_many_baton_t VAR_20;

  if (!FUNC_3(VAR_6))
    return VAR_3;


  FUNC_0(FUNC_23(&VAR_16, VAR_5->hooks_env_path,
                                     VAR_11, VAR_11));

  FUNC_0(FUNC_15(&VAR_14, VAR_5->fs));
  if (VAR_14)
    FUNC_0(FUNC_14(&VAR_15, VAR_14));

  if (! VAR_7 && ! VAR_15)
    return FUNC_12
      (VAR_1, ((void*)0),
       FUNC_1("Cannot unlock, no authenticated username available"));



  for (VAR_18 = FUNC_4(VAR_11, VAR_6); VAR_18; VAR_18 = FUNC_6(VAR_18))
    {
      const char *VAR_21 = FUNC_7(VAR_18);
      const char *VAR_22 = FUNC_8(VAR_18);

      FUNC_18(VAR_19);

      VAR_12 = FUNC_22(VAR_5, VAR_16, VAR_21, VAR_15, VAR_22,
                                        VAR_7, VAR_19);
      if (VAR_12)
        {
          if (!VAR_13 && VAR_8)
            VAR_13 = VAR_8(VAR_9, VAR_21, ((void*)0), VAR_12, VAR_19);
          FUNC_9(VAR_12);

          continue;
        }

      FUNC_17(VAR_17, VAR_21, VAR_22);
    }

  if (!FUNC_3(VAR_17))
    return FUNC_13(VAR_13);

  VAR_20.need_lock = VAR_0;
  VAR_20.paths = FUNC_2(VAR_11, FUNC_3(VAR_17),
                               sizeof(const char *));
  VAR_20.lock_callback = VAR_8;
  VAR_20.lock_baton = VAR_9;
  VAR_20.cb_err = VAR_13;
  VAR_20.pool = VAR_11;

  VAR_12 = FUNC_16(VAR_5->fs, VAR_17, VAR_7,
                           VAR_4, &VAR_20, VAR_10, VAR_19);


  if (VAR_20.paths->nelts)
    {
      svn_error_t *VAR_23 = FUNC_21(VAR_5, VAR_16,
                                                       VAR_20.paths,
                                                       VAR_15, VAR_19);
      if (VAR_23)
        {
          VAR_23 = FUNC_12(VAR_2, VAR_23,
                           FUNC_1("Unlock succeeded, but post-unlock hook failed"));
          VAR_12 = FUNC_11(VAR_12, VAR_23);
        }
    }

  FUNC_20(VAR_19);

  if (VAR_12 && VAR_13)
    FUNC_10(VAR_12, VAR_13);
  else if (!VAR_12)
    VAR_12 = VAR_13;

  return FUNC_13(VAR_12);
}
