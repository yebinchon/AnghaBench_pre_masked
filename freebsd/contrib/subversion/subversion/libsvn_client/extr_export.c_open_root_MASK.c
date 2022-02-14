
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct edit_baton {int root_path; int notify_baton; int notify_func; int force; } ;
struct dir_baton {struct edit_baton* edit_baton; int path; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct dir_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
          svn_revnum_t VAR_2,
          apr_pool_t *VAR_3,
          void **VAR_4)
{
  struct edit_baton *VAR_5 = VAR_1;
  struct dir_baton *VAR_6 = FUNC_1(VAR_3, sizeof(*VAR_6));

  FUNC_0(FUNC_2(VAR_5->root_path, VAR_5->force,
                             VAR_5->notify_func, VAR_5->notify_baton, VAR_3));


  VAR_6->path = VAR_5->root_path;
  VAR_6->edit_baton = VAR_5;
  *VAR_4 = VAR_6;

  return VAR_0;
}
