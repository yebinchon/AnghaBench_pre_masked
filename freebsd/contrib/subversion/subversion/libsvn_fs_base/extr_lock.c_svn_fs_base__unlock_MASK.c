
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int * (* svn_fs_lock_callback_t ) (void*,char const*,int *,int *,int *) ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct unlock_args {char const* token; int break_lock; int path; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *,int ,struct unlock_args*,int ,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_2 ;

svn_error_t *
FUNC_13(svn_fs_t *VAR_3,
                    apr_hash_t *VAR_4,
                    svn_boolean_t VAR_5,
                    svn_fs_lock_callback_t VAR_6,
                    void *VAR_7,
                    apr_pool_t *VAR_8,
                    apr_pool_t *VAR_9)
{
  apr_hash_index_t *VAR_10;
  svn_error_t *VAR_11 = VAR_0;
  apr_pool_t *VAR_12 = FUNC_11(VAR_9);

  FUNC_0(FUNC_8(VAR_3, VAR_1));

  for (VAR_10 = FUNC_1(VAR_9, VAR_4); VAR_10; VAR_10 = FUNC_2(VAR_10))
    {
      struct unlock_args VAR_13;
      const char *VAR_14 = FUNC_3(VAR_10);
      const char *VAR_15 = FUNC_4(VAR_10);
      svn_error_t *VAR_16;

      FUNC_10(VAR_12);
      VAR_13.path = FUNC_7(VAR_14, VAR_8);
      VAR_13.token = VAR_15;
      VAR_13.break_lock = VAR_5;

      VAR_16 = FUNC_9(VAR_3, VAR_2, &VAR_13, VAR_1,
                                   VAR_12);
      if (!VAR_11 && VAR_6)
        VAR_11 = VAR_6(VAR_7, VAR_14, ((void*)0), VAR_16, VAR_12);
      FUNC_5(VAR_16);
    }
  FUNC_12(VAR_12);

  return FUNC_6(VAR_11);
}
