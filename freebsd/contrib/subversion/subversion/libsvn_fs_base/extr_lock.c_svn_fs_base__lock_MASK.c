
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_lock_t ;
typedef int svn_fs_t ;
struct TYPE_3__ {scalar_t__ current_rev; int token; } ;
typedef TYPE_1__ svn_fs_lock_target_t ;
typedef int * (* svn_fs_lock_callback_t ) (void*,int ,int *,int *,int *) ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
struct lock_args {char const* comment; scalar_t__ current_rev; int path; int * result_pool; int expiration_date; void* steal_lock; void* is_dav_comment; int token; int ** lock_p; } ;
typedef int apr_time_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,int *,int ,scalar_t__) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (int *,int ) ;
 int * FUNC_12 (int *,int ,struct lock_args*,int ,int *) ;
 int FUNC_13 (scalar_t__*,int *,int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_4 ;

svn_error_t *
FUNC_17(svn_fs_t *VAR_5,
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
  apr_hash_index_t *VAR_15;
  svn_error_t *VAR_16 = VAR_2;
  svn_revnum_t VAR_17 = VAR_1;
  apr_pool_t *VAR_18 = FUNC_15(VAR_14);

  FUNC_0(FUNC_11(VAR_5, VAR_3));
  FUNC_0(FUNC_13(&VAR_17, VAR_5, VAR_14));

  for (VAR_15 = FUNC_3(VAR_14, VAR_6); VAR_15; VAR_15 = FUNC_4(VAR_15))
    {
      struct lock_args VAR_19;
      const char *VAR_20 = FUNC_5(VAR_15);
      const svn_fs_lock_target_t *VAR_21 = FUNC_6(VAR_15);
      svn_lock_t *VAR_22;
      svn_error_t *VAR_23 = ((void*)0);

      FUNC_14(VAR_18);
      VAR_19.lock_p = &VAR_22;
      VAR_19.path = FUNC_10(VAR_20, VAR_13);
      VAR_19.token = VAR_21->token;
      VAR_19.comment = VAR_7;
      VAR_19.is_dav_comment = VAR_8;
      VAR_19.steal_lock = VAR_10;
      VAR_19.expiration_date = VAR_9;
      VAR_19.current_rev = VAR_21->current_rev;
      VAR_19.result_pool = VAR_13;

      if (FUNC_1(VAR_21->current_rev))
        {
          if (VAR_21->current_rev > VAR_17)
            VAR_23 = FUNC_8(VAR_0, ((void*)0),
                                    FUNC_2("No such revision %ld"),
                                    VAR_21->current_rev);
        }

      if (!VAR_23)
        VAR_23 = FUNC_12(VAR_5, VAR_4, &VAR_19, VAR_3,
                                     VAR_18);
      if (!VAR_16 && VAR_11)
        VAR_16 = VAR_11(VAR_12, VAR_19.path, VAR_22, VAR_23, VAR_18);
      FUNC_7(VAR_23);
    }
  FUNC_16(VAR_18);

  return FUNC_9(VAR_16);
}
