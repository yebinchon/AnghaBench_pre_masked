
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_lock_t ;
struct TYPE_4__ {int path; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int (* svn_fs_get_locks_callback_t ) (void*,int *,int *) ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char const* FUNC_5 (int ,char const*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int **,int **,int ,char const*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_fs_t *VAR_1,
           const char *VAR_2,
           svn_fs_get_locks_callback_t VAR_3,
           void *VAR_4,
           svn_boolean_t VAR_5,
           apr_pool_t *VAR_6)
{
  apr_hash_index_t *VAR_7;
  apr_hash_t *VAR_8;
  apr_pool_t *VAR_9;
  svn_lock_t *VAR_10;


  FUNC_0(FUNC_7(&VAR_8, &VAR_10, VAR_1->path, VAR_2, VAR_6));

  if (VAR_10 && FUNC_6(VAR_10))
    {


      if (VAR_5)
        FUNC_0(FUNC_11(VAR_1, VAR_10, VAR_6));
    }
  else if (VAR_10)
    {
      FUNC_0(VAR_3(VAR_4, VAR_10, VAR_6));
    }


  if (! FUNC_1(VAR_8))
    return VAR_0;
  VAR_9 = FUNC_9(VAR_6);
  for (VAR_7 = FUNC_2(VAR_6, VAR_8); VAR_7; VAR_7 = FUNC_3(VAR_7))
    {
      const char *VAR_11 = FUNC_4(VAR_7);
      FUNC_8(VAR_9);

      FUNC_0(FUNC_7
              (((void*)0), &VAR_10, VAR_1->path,
               FUNC_5(VAR_1->path, VAR_11, VAR_9), VAR_9));

      if (VAR_10 && FUNC_6(VAR_10))
        {


          if (VAR_5)
            FUNC_0(FUNC_11(VAR_1, VAR_10, VAR_6));
        }
      else if (VAR_10)
        {
          FUNC_0(VAR_3(VAR_4, VAR_10, VAR_6));
        }
    }
  FUNC_10(VAR_9);
  return VAR_0;
}
