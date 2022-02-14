
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
struct dump_edit_baton {int dummy; } ;
struct dir_baton {char const* repos_relpath; char* copyfrom_path; void* deleted_entries; void* deleted_props; void* props; int * headers; int copyfrom_rev; int * pool; struct dump_edit_baton* eb; } ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *) ;
 struct dir_baton* FUNC_1 (int *,int) ;
 char* FUNC_2 (char const*,int *) ;

__attribute__((used)) static struct dir_baton *
FUNC_3(const char *VAR_0,
               const char *VAR_1,
               svn_revnum_t VAR_2,
               void *VAR_3,
               struct dir_baton *VAR_4,
               apr_pool_t *VAR_5)
{
  struct dump_edit_baton *VAR_6 = VAR_3;
  struct dir_baton *VAR_7 = FUNC_1(VAR_5, sizeof(*VAR_7));
  const char *VAR_8;


  if (VAR_4)
    VAR_8 = FUNC_2(VAR_0, VAR_5);
  else
    VAR_8 = "";



  if (VAR_1)
    VAR_1 = FUNC_2(VAR_1, VAR_5);

  VAR_7->eb = VAR_6;
  VAR_7->pool = VAR_5;
  VAR_7->repos_relpath = VAR_8;
  VAR_7->copyfrom_path = VAR_1
                            ? FUNC_2(VAR_1, VAR_5)
                            : ((void*)0);
  VAR_7->copyfrom_rev = VAR_2;
  VAR_7->headers = ((void*)0);
  VAR_7->props = FUNC_0(VAR_5);
  VAR_7->deleted_props = FUNC_0(VAR_5);
  VAR_7->deleted_entries = FUNC_0(VAR_5);

  return VAR_7;
}
