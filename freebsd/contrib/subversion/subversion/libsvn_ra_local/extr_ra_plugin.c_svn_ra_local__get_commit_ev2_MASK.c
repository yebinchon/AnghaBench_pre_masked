
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pool; TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_9__ {int repos; int username; TYPE_1__* fs_path; int fs; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_ra__provide_props_cb_t ;
typedef int svn_ra__provide_base_cb_t ;
typedef int svn_ra__get_copysrc_kind_cb_t ;
typedef int svn_error_t ;
typedef int svn_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct deltify_etc_baton {void* commit_baton; int commit_cb; int * lock_tokens; int fspath_base; int repos; int fs; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;
 int * FUNC_2 (int *,int *) ;
 struct deltify_etc_baton* FUNC_3 (int *,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,void**,TYPE_2__*,int ,void*,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int **,int ,int *,int *,int *,int *,int ,struct deltify_etc_baton*,int ,void*,int *,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_editor_t **VAR_2,
                             svn_ra_session_t *VAR_3,
                             apr_hash_t *VAR_4,
                             svn_commit_callback2_t VAR_5,
                             void *VAR_6,
                             apr_hash_t *VAR_7,
                             svn_boolean_t VAR_8,
                             svn_ra__provide_base_cb_t VAR_9,
                             svn_ra__provide_props_cb_t VAR_10,
                             svn_ra__get_copysrc_kind_cb_t VAR_11,
                             void *VAR_12,
                             svn_cancel_func_t VAR_13,
                             void *VAR_14,
                             apr_pool_t *VAR_15,
                             apr_pool_t *VAR_16)
{
  svn_ra_local__session_baton_t *VAR_17 = VAR_3->priv;
  struct deltify_etc_baton *VAR_18 = FUNC_3(VAR_15, sizeof(*VAR_18));

  FUNC_5(&VAR_5, &VAR_6, VAR_3,
                        VAR_5, VAR_6, VAR_15);





  VAR_18->fs = VAR_17->fs;
  VAR_18->repos = VAR_17->repos;
  VAR_18->fspath_base = VAR_17->fs_path->data;
  if (! VAR_8)
    VAR_18->lock_tokens = VAR_7;
  else
    VAR_18->lock_tokens = ((void*)0);
  VAR_18->commit_cb = VAR_5;
  VAR_18->commit_baton = VAR_6;



  FUNC_0(FUNC_4(VAR_3, VAR_16));


  FUNC_0(FUNC_1(VAR_17->fs, VAR_17->fs_path->data, VAR_7,
                            VAR_3->pool, VAR_16));


  VAR_4 = FUNC_2(VAR_16, VAR_4);
  FUNC_7(VAR_4, VAR_0,
                FUNC_9(VAR_17->username, VAR_16));

  return FUNC_6(FUNC_8(
                           VAR_2, VAR_17->repos, ((void*)0) ,
                           ((void*)0) , ((void*)0) ,
                           VAR_4,
                           VAR_1, VAR_18, VAR_13, VAR_14,
                           VAR_15, VAR_16));
}
