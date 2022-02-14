
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct dir_baton {void* already_notified; int local_abspath; TYPE_1__* edit_baton; scalar_t__ edit_conflict; int pool; int new_repos_relpath; int old_revision; int old_repos_relpath; void* edited; struct dir_baton* parent_baton; } ;
typedef int apr_pool_t ;
struct TYPE_3__ {int db; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int * FUNC_1 (scalar_t__,TYPE_1__*,int ,int ,int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int *) ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ,scalar_t__,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_4(struct dir_baton *VAR_4, apr_pool_t *VAR_5)
{
  if (VAR_4->edited)
    return VAR_0;

  if (VAR_4->parent_baton)
    FUNC_0(FUNC_4(VAR_4->parent_baton, VAR_5));

  VAR_4->edited = VAR_1;

  if (VAR_4->edit_conflict)
    {


      FUNC_0(FUNC_1(VAR_4->edit_conflict, VAR_4->edit_baton,
                                VAR_4->local_abspath,
                                VAR_4->old_repos_relpath, VAR_4->old_revision,
                                VAR_4->new_repos_relpath,
                                VAR_2, VAR_2,
                                ((void*)0),
                                VAR_4->pool, VAR_5));
      FUNC_0(FUNC_3(VAR_4->edit_baton->db,
                                          VAR_4->local_abspath,
                                          VAR_4->edit_conflict, ((void*)0),
                                          VAR_5));

      FUNC_2(VAR_4->edit_baton, VAR_4->local_abspath, VAR_2,
                      VAR_3, VAR_5);
      VAR_4->already_notified = VAR_1;
    }

  return VAR_0;
}
