
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct file_baton {int copyfrom_rev; int copyfrom_path; } ;
struct dir_baton {int copyfrom_rev; int pool; int copyfrom_path; int eb; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int *) ;
 struct file_baton* FUNC_3 (char const*,struct dir_baton*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const char *VAR_1,
          void *VAR_2,
          svn_revnum_t VAR_3,
          apr_pool_t *VAR_4,
          void **VAR_5)
{
  struct dir_baton *VAR_6 = VAR_2;
  struct file_baton *VAR_7;

  FUNC_1(FUNC_2(VAR_6->eb, VAR_4));


  VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_4);



  if (FUNC_0(VAR_6->copyfrom_path, VAR_6->copyfrom_rev))
    {
      VAR_7->copyfrom_path = FUNC_5(VAR_6->copyfrom_path,
                                           FUNC_4(VAR_1, ((void*)0)),
                                           VAR_6->pool);
      VAR_7->copyfrom_rev = VAR_6->copyfrom_rev;
    }

  *VAR_5 = VAR_7;
  return VAR_0;
}
