
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_baton {int * ood_changed_author; int ood_kind; int name; int repos_relpath; scalar_t__ ood_changed_date; int ood_changed_rev; struct edit_baton* edit_baton; struct dir_baton* dir_baton; int * pool; int local_abspath; } ;
struct edit_baton {int anchor_abspath; } ;
struct dir_baton {struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 struct file_baton* FUNC_0 (int *,int) ;
 int FUNC_1 (struct dir_baton*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char const*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static struct file_baton *
FUNC_5(struct dir_baton *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4)
{
  struct dir_baton *VAR_5 = VAR_2;
  struct edit_baton *VAR_6 = VAR_5->edit_baton;
  struct file_baton *VAR_7 = FUNC_0(VAR_4, sizeof(*VAR_7));


  VAR_7->local_abspath = FUNC_3(VAR_6->anchor_abspath, VAR_3, VAR_4);
  VAR_7->name = FUNC_2(VAR_7->local_abspath, ((void*)0));
  VAR_7->pool = VAR_4;
  VAR_7->dir_baton = VAR_5;
  VAR_7->edit_baton = VAR_6;
  VAR_7->ood_changed_rev = VAR_0;
  VAR_7->ood_changed_date = 0;
  VAR_7->repos_relpath = FUNC_4(FUNC_1(VAR_5, VAR_4),
                                      VAR_7->name, VAR_4);
  VAR_7->ood_kind = VAR_1;
  VAR_7->ood_changed_author = ((void*)0);
  return VAR_7;
}
