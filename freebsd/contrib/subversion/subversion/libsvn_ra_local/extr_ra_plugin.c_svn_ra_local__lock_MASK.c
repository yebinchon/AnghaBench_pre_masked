
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_7__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
typedef int svn_ra_lock_callback_t ;
struct TYPE_8__ {int repos; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_fs_lock_target_t ;
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
 int VAR_2 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int ,int *) ;
 char* FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int *,char const*,int *) ;
 int * FUNC_12 (int ,int *,char const*,int ,int ,int ,int ,struct lock_baton_t*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_session_t *VAR_4,
                   apr_hash_t *VAR_5,
                   const char *VAR_6,
                   svn_boolean_t VAR_7,
                   svn_ra_lock_callback_t VAR_8,
                   void *VAR_9,
                   apr_pool_t *VAR_10)
{
  svn_ra_local__session_baton_t *VAR_11 = VAR_4->priv;
  apr_hash_t *VAR_12 = FUNC_2(VAR_10);
  apr_hash_index_t *VAR_13;
  svn_error_t *VAR_14;
  struct lock_baton_t VAR_15 = {0};


  FUNC_0(FUNC_6(VAR_4, VAR_10));

  for (VAR_13 = FUNC_1(VAR_10, VAR_5); VAR_13; VAR_13 = FUNC_3(VAR_13))
    {
      const char *VAR_16 = FUNC_10(VAR_11->fs_path->data,
                                              FUNC_4(VAR_13), VAR_10);
      svn_revnum_t VAR_17 = *(svn_revnum_t *)FUNC_5(VAR_13);
      svn_fs_lock_target_t *VAR_18 = FUNC_9(((void*)0),
                                                               VAR_17,
                                                               VAR_10);

      FUNC_11(VAR_12, VAR_16, VAR_18);
    }

  VAR_15.lock_func = VAR_8;
  VAR_15.lock_baton = VAR_9;
  VAR_15.fs_path = VAR_11->fs_path->data;
  VAR_15.is_lock = VAR_2;
  VAR_15.cb_err = VAR_1;

  VAR_14 = FUNC_12(VAR_11->repos, VAR_12, VAR_6,
                               VAR_0 ,
                               0 , VAR_7,
                               VAR_3, &VAR_15,
                               VAR_10, VAR_10);

  if (VAR_14 && VAR_15.cb_err)
    FUNC_7(VAR_14, VAR_15.cb_err);
  else if (!VAR_14)
    VAR_14 = VAR_15.cb_err;

  return FUNC_8(VAR_14);
}
