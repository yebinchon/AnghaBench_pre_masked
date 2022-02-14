
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_baton {int action; int copyfrom_rev; int * copyfrom_path; int is_copy; void* deleted_props; void* props; int repos_relpath; int * pool; int eb; } ;
struct dir_baton {int eb; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 struct file_baton* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (char const*,int *) ;

__attribute__((used)) static struct file_baton *
FUNC_3(const char *VAR_3,
                struct dir_baton *VAR_4,
                apr_pool_t *VAR_5)
{
  struct file_baton *VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));

  VAR_6->eb = VAR_4->eb;
  VAR_6->pool = VAR_5;
  VAR_6->repos_relpath = FUNC_2(VAR_3, VAR_5);
  VAR_6->props = FUNC_0(VAR_5);
  VAR_6->deleted_props = FUNC_0(VAR_5);
  VAR_6->is_copy = VAR_0;
  VAR_6->copyfrom_path = ((void*)0);
  VAR_6->copyfrom_rev = VAR_1;
  VAR_6->action = VAR_2;

  return VAR_6;
}
