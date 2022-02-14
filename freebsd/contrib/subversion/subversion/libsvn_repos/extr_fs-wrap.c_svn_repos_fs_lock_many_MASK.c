
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fs; int hooks_env_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_fs_lock_target_t ;
typedef int * (* svn_fs_lock_callback_t ) (void*,char const*,int *,int *,int *) ;
typedef int svn_fs_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct lock_many_baton_t {TYPE_5__* paths; int * pool; int * cb_err; void* lock_baton; int * (* lock_callback ) (void*,char const*,int *,int *,int *) ;int need_lock; } ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char*) ;
 TYPE_5__* FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (int ,int *,char*) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (char const**,int *) ;
 int FUNC_15 (int **,int ) ;
 int * FUNC_16 (int ,int *,char const*,int ,int ,int ,int ,struct lock_many_baton_t*,int *,int *) ;
 int FUNC_17 (int *,char const*) ;
 int FUNC_18 (int *,char const*,int *) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (TYPE_1__*,int *,TYPE_5__*,char const*,int *) ;
 int * FUNC_23 (TYPE_1__*,int *,char const**,char const*,char const*,char const*,int ,int *) ;
 int FUNC_24 (int **,int ,int *,int *) ;

svn_error_t *
FUNC_25(svn_repos_t *VAR_5,
                       apr_hash_t *VAR_6,
                       const char *VAR_7,
                       svn_boolean_t VAR_8,
                       apr_time_t VAR_9,
                       svn_boolean_t VAR_10,
                       svn_fs_lock_callback_t VAR_11,
                       void *VAR_12,
                       apr_pool_t *VAR_13,
                       apr_pool_t *VAR_14)
{
  svn_error_t *VAR_15, *VAR_16 = VAR_2;
  svn_fs_access_t *VAR_17 = ((void*)0);
  const char *VAR_18 = ((void*)0);
  apr_hash_t *VAR_19;
  apr_hash_t *VAR_20 = FUNC_5(VAR_14);
  apr_hash_index_t *VAR_21;
  apr_pool_t *VAR_22 = FUNC_20(VAR_14);
  struct lock_many_baton_t VAR_23;

  if (!FUNC_3(VAR_6))
    return VAR_2;


  FUNC_0(FUNC_24(&VAR_19, VAR_5->hooks_env_path,
                                     VAR_14, VAR_14));

  FUNC_0(FUNC_15(&VAR_17, VAR_5->fs));
  if (VAR_17)
    FUNC_0(FUNC_14(&VAR_18, VAR_17));

  if (! VAR_18)
    return FUNC_12
      (VAR_0, ((void*)0),
       "Cannot lock path, no authenticated username available.");



  for (VAR_21 = FUNC_4(VAR_14, VAR_6); VAR_21; VAR_21 = FUNC_6(VAR_21))
    {
      const char *VAR_24;
      svn_fs_lock_target_t *VAR_25;
      const char *VAR_26 = FUNC_7(VAR_21);

      FUNC_19(VAR_22);

      VAR_15 = FUNC_23(VAR_5, VAR_19, &VAR_24, VAR_26,
                                      VAR_18, VAR_7, VAR_10, VAR_22);
      if (VAR_15)
        {
          if (!VAR_16 && VAR_11)
            VAR_16 = VAR_11(VAR_12, VAR_26, ((void*)0), VAR_15, VAR_22);
          FUNC_9(VAR_15);

          continue;
        }

      VAR_25 = FUNC_8(VAR_21);
      if (*VAR_24)
        FUNC_17(VAR_25, VAR_24);
      FUNC_18(VAR_20, VAR_26, VAR_25);
    }

  if (!FUNC_3(VAR_20))
    return FUNC_13(VAR_16);

  VAR_23.need_lock = VAR_3;
  VAR_23.paths = FUNC_2(VAR_14, FUNC_3(VAR_20),
                               sizeof(const char *));
  VAR_23.lock_callback = VAR_11;
  VAR_23.lock_baton = VAR_12;
  VAR_23.cb_err = VAR_16;
  VAR_23.pool = VAR_14;

  VAR_15 = FUNC_16(VAR_5->fs, VAR_20, VAR_7,
                         VAR_8, VAR_9, VAR_10,
                         VAR_4, &VAR_23, VAR_13, VAR_22);


  if (VAR_23.paths->nelts)
    {
      svn_error_t *VAR_27 = FUNC_22(VAR_5, VAR_19,
                                                     VAR_23.paths, VAR_18,
                                                     VAR_22);
      if (VAR_27)
        {
          VAR_27 = FUNC_12(VAR_1, VAR_27,
                            FUNC_1("Locking succeeded, but post-lock hook failed"));
          VAR_15 = FUNC_11(VAR_15, VAR_27);
        }
    }

  FUNC_21(VAR_22);

  if (VAR_15 && VAR_16)
    FUNC_10(VAR_15, VAR_16);
  else if (!VAR_15)
    VAR_15 = VAR_16;

  return FUNC_13(VAR_15);
}
