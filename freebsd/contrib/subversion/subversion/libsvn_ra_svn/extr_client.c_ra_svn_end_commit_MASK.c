
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {int repos_root; int post_commit_err; int author; int date; int revision; } ;
typedef TYPE_1__ svn_commit_info_t ;
struct TYPE_8__ {int pool; int callback_baton; int (* callback ) (TYPE_1__*,int ,int ) ;TYPE_6__* sess_baton; } ;
typedef TYPE_2__ ra_svn_commit_callback_baton_t ;
struct TYPE_10__ {TYPE_3__* conn; } ;
struct TYPE_9__ {int repos_root; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,char*,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *FUNC_6(void *VAR_1)
{
  ra_svn_commit_callback_baton_t *VAR_2 = VAR_1;
  svn_commit_info_t *VAR_3 = FUNC_4(VAR_2->pool);

  FUNC_0(FUNC_2(VAR_2->sess_baton, VAR_2->pool));
  FUNC_0(FUNC_5(VAR_2->sess_baton->conn, VAR_2->pool,
                                 "r(?c)(?c)?(?c)",
                                 &(VAR_3->revision),
                                 &(VAR_3->date),
                                 &(VAR_3->author),
                                 &(VAR_3->post_commit_err)));

  VAR_3->repos_root = FUNC_1(VAR_2->pool,
                                        VAR_2->sess_baton->conn->repos_root);

  if (VAR_2->callback)
    FUNC_0(VAR_2->callback(VAR_3, VAR_2->callback_baton, VAR_2->pool));

  return VAR_0;
}
