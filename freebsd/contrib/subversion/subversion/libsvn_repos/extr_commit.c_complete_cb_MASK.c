
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct ev2_baton {TYPE_1__* repos; int commit_baton; int commit_cb; int txn_name; int inner; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_3__ {int fs; int hooks_env_path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ,int ,char const*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ,int *,int ) ;
 int * FUNC_8 (int ,int *,int ,char const*) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *,int **,char const**,int ,int *,int *) ;
 int * FUNC_11 (TYPE_1__*,int *,int ,int ,int *) ;
 int FUNC_12 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_13 (int **,int ,int *,int *) ;
 char* FUNC_14 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_15(void *VAR_2,
            apr_pool_t *VAR_3)
{
  struct ev2_baton *VAR_4 = VAR_2;
  svn_revnum_t VAR_5;
  svn_error_t *VAR_6;
  const char *VAR_7;
  svn_error_t *VAR_8;
  const char *VAR_9;
  apr_hash_t *VAR_10;


  FUNC_0(FUNC_13(&VAR_10, VAR_4->repos->hooks_env_path,
                                     VAR_3, VAR_3));



  FUNC_0(FUNC_12(VAR_4->repos, VAR_10,
                                      VAR_4->txn_name, VAR_3));


  FUNC_0(FUNC_10(&VAR_5, &VAR_6, &VAR_7,
                                VAR_4->inner, VAR_3, VAR_3));


  if (VAR_7 != ((void*)0))
    return FUNC_8(VAR_0, ((void*)0),
                             FUNC_3("Conflict at '%s'"), VAR_7);





  FUNC_1(FUNC_2(VAR_5));
  VAR_8 = FUNC_11(VAR_4->repos, VAR_10, VAR_5,
                                     VAR_4->txn_name, VAR_3);
  if (VAR_8)
    VAR_8 = FUNC_7(VAR_1, VAR_8,
                           FUNC_3("Commit succeeded, but post-commit hook failed"));


  VAR_8 = FUNC_6(VAR_6, VAR_8);
  if (VAR_8)
    {
      VAR_9 = FUNC_14(VAR_8, VAR_3);
      FUNC_5(VAR_8);
    }
  else
    {
      VAR_9 = ((void*)0);
    }

  return FUNC_9(FUNC_4(VAR_4->commit_cb, VAR_4->commit_baton,
                                          VAR_4->repos->fs, VAR_5,
                                          VAR_9,
                                          VAR_3));
}
