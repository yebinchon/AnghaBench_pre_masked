
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
struct edit_baton {int path; } ;
struct dir_baton {char const* path; char const* cmp_path; int * pool; void* check_name_collision; int deleted_entries; void* written_out; int cmp_rev; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct dir_baton* FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int ) ;
 char* FUNC_4 (char const*,int *) ;
 char* FUNC_5 (int ,char const*,int *) ;

__attribute__((used)) static struct dir_baton *
FUNC_6(const char *VAR_1,
               const char *VAR_2,
               svn_revnum_t VAR_3,
               void *VAR_4,
               struct dir_baton *VAR_5,
               apr_pool_t *VAR_6)
{
  struct edit_baton *VAR_7 = VAR_4;
  struct dir_baton *VAR_8 = FUNC_2(VAR_6, sizeof(*VAR_8));
  const char *VAR_9;


  FUNC_0(!VAR_1 || VAR_5);


  if (VAR_5)
    VAR_9 = FUNC_5(VAR_7->path, VAR_1, VAR_6);
  else
    VAR_9 = FUNC_3(VAR_6, VAR_7->path);


  if (VAR_2)
    VAR_2 = FUNC_4(VAR_2, VAR_6);

  VAR_8->edit_baton = VAR_7;
  VAR_8->path = VAR_9;
  VAR_8->cmp_path = VAR_2;
  VAR_8->cmp_rev = VAR_3;
  VAR_8->written_out = VAR_0;
  VAR_8->deleted_entries = FUNC_1(VAR_6);
  VAR_8->check_name_collision = VAR_0;
  VAR_8->pool = VAR_6;

  return VAR_8;
}
