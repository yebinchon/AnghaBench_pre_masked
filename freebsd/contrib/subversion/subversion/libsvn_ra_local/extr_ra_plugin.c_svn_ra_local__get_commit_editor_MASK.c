
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pool; TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_9__ {TYPE_1__* fs_path; int repos_url; int repos; int useragent; int username; int fs; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int svn_delta_editor_t ;
typedef int svn_commit_callback2_t ;
typedef int svn_boolean_t ;
struct deltify_etc_baton {void* commit_baton; int commit_cb; int * lock_tokens; int fspath_base; int repos; int fs; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_7__ {int data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,int ,int *) ;
 int * FUNC_2 (int *,int *) ;
 struct deltify_etc_baton* FUNC_3 (int *,int) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,void**,TYPE_2__*,int ,void*,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int const**,void**,int ,int *,int ,int ,int *,int ,struct deltify_etc_baton*,int *,int *,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_ra_session_t *VAR_5,
                                const svn_delta_editor_t **VAR_6,
                                void **VAR_7,
                                apr_hash_t *VAR_8,
                                svn_commit_callback2_t VAR_9,
                                void *VAR_10,
                                apr_hash_t *VAR_11,
                                svn_boolean_t VAR_12,
                                apr_pool_t *VAR_13)
{
  svn_ra_local__session_baton_t *VAR_14 = VAR_5->priv;
  struct deltify_etc_baton *VAR_15 = FUNC_3(VAR_13, sizeof(*VAR_15));


  FUNC_5(&VAR_9, &VAR_10, VAR_5,
                        VAR_9, VAR_10, VAR_13);


  VAR_15->fs = VAR_14->fs;
  VAR_15->repos = VAR_14->repos;
  VAR_15->fspath_base = VAR_14->fs_path->data;
  if (! VAR_12)
    VAR_15->lock_tokens = VAR_11;
  else
    VAR_15->lock_tokens = ((void*)0);
  VAR_15->commit_cb = VAR_9;
  VAR_15->commit_baton = VAR_10;

  FUNC_0(FUNC_4(VAR_5, VAR_13));


  FUNC_0(FUNC_1(VAR_14->fs, VAR_14->fs_path->data, VAR_11,
                            VAR_5->pool, VAR_13));


  VAR_8 = FUNC_2(VAR_13, VAR_8);
  FUNC_6(VAR_8, VAR_0,
                FUNC_9(VAR_14->username, VAR_13));
  FUNC_6(VAR_8, VAR_1,
                FUNC_9(VAR_3, VAR_13));
  FUNC_6(VAR_8, VAR_2,
                FUNC_9(VAR_14->useragent, VAR_13));


  return FUNC_8
         (VAR_6, VAR_7, VAR_14->repos, ((void*)0),
          FUNC_7(VAR_14->repos_url, VAR_13), VAR_14->fs_path->data,
          VAR_8, VAR_4, VAR_15, ((void*)0), ((void*)0), VAR_13);
}
