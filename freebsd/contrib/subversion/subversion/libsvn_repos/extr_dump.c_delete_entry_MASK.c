
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct dir_baton {int deleted_entries; int pool; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 char* FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*,struct dir_baton*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(const char *VAR_1,
             svn_revnum_t VAR_2,
             void *VAR_3,
             apr_pool_t *VAR_4)
{
  struct dir_baton *VAR_5 = VAR_3;
  const char *VAR_6 = FUNC_0(VAR_5->pool, VAR_1);


  FUNC_1(VAR_5->deleted_entries, VAR_6, VAR_5);

  return VAR_0;
}
