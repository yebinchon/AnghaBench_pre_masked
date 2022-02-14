
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int (* abort_edit ) (void*,int *) ;} ;
typedef TYPE_3__ svn_delta_editor_t ;
typedef int svn_boolean_t ;
struct TYPE_15__ {TYPE_2__* repository; } ;
typedef TYPE_4__ server_baton_t ;
struct TYPE_16__ {int * conn; TYPE_4__* server; } ;
typedef TYPE_5__ authz_baton_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {TYPE_1__* fs_path; int fs; } ;
struct TYPE_12__ {int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *,int *,int ) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int **,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (TYPE_3__ const**,void**,int *,int *,int *,int *) ;
 int * FUNC_10 (int *,int ,int ,int ,TYPE_3__ const*,void*,int ,TYPE_5__*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_11(svn_ra_svn_conn_t *VAR_0,
                                        server_baton_t *VAR_1,
                                        svn_revnum_t VAR_2,
                                        svn_revnum_t VAR_3,
                                        svn_boolean_t VAR_4,
                                        apr_pool_t *VAR_5)
{
  const svn_delta_editor_t *VAR_6;
  void *VAR_7;
  svn_fs_root_t *VAR_8;
  svn_error_t *VAR_9;
  authz_baton_t VAR_10;

  VAR_10.server = VAR_1;
  VAR_10.conn = VAR_0;

  FUNC_1(FUNC_3(VAR_1, VAR_0, VAR_5,
                      FUNC_7(VAR_1->repository->fs_path->data, VAR_2,
                                      VAR_5)));

  FUNC_9(&VAR_6, &VAR_7, VAR_0, VAR_5, ((void*)0), ((void*)0));

  VAR_9 = FUNC_6(&VAR_8, VAR_1->repository->fs, VAR_2, VAR_5);

  if (! VAR_9)
    VAR_9 = FUNC_10(VAR_8, VAR_1->repository->fs_path->data,
                            VAR_3, VAR_4, VAR_6, VAR_7,
                            FUNC_2(VAR_1), &VAR_10, VAR_5);

  if (VAR_9)
    FUNC_5(VAR_6->abort_edit(VAR_7, VAR_5));
  FUNC_0(VAR_9);

  return FUNC_8(VAR_0, VAR_5);
}
