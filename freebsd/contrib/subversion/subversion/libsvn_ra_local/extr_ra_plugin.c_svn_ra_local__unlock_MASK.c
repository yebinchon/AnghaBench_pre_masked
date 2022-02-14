
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_lock_callback_t ;
struct TYPE_8__ {int repos; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct lock_baton_t {int * cb_err; int is_lock; int fs_path; void* lock_baton; int lock_func; int member_0; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_6__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int VAR_2 ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int *,char const*,char const*) ;
 int * FUNC_11 (int ,int *,int ,int ,struct lock_baton_t*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_ra_session_t *VAR_3,
                     apr_hash_t *VAR_4,
                     svn_boolean_t VAR_5,
                     svn_ra_lock_callback_t VAR_6,
                     void *VAR_7,
                     apr_pool_t *VAR_8)
{
  svn_ra_local__session_baton_t *VAR_9 = VAR_3->priv;
  apr_hash_t *VAR_10 = FUNC_2(VAR_8);
  apr_hash_index_t *VAR_11;
  svn_error_t *VAR_12;
  struct lock_baton_t VAR_13 = {0};


  FUNC_0(FUNC_6(VAR_3, VAR_8));

  for (VAR_11 = FUNC_1(VAR_8, VAR_4); VAR_11; VAR_11 = FUNC_3(VAR_11))
    {
      const char *VAR_14 = FUNC_9(VAR_9->fs_path->data,
                                              FUNC_4(VAR_11), VAR_8);
      const char *VAR_15 = FUNC_5(VAR_11);

      FUNC_10(VAR_10, VAR_14, VAR_15);
    }

  VAR_13.lock_func = VAR_6;
  VAR_13.lock_baton = VAR_7;
  VAR_13.fs_path = VAR_9->fs_path->data;
  VAR_13.is_lock = VAR_0;
  VAR_13.cb_err = VAR_1;

  VAR_12 = FUNC_11(VAR_9->repos, VAR_10, VAR_5, VAR_2, &VAR_13,
                                 VAR_8, VAR_8);

  if (VAR_12 && VAR_13.cb_err)
    FUNC_7(VAR_12, VAR_13.cb_err);
  else if (!VAR_12)
    VAR_12 = VAR_13.cb_err;

  return FUNC_8(VAR_12);
}
