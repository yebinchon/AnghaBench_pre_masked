
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct dir_baton_t {scalar_t__ deletes; int pool; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (scalar_t__,char const*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_1,
             svn_revnum_t VAR_2,
             void *VAR_3,
             apr_pool_t *VAR_4)
{
  struct dir_baton_t *VAR_5 = VAR_3;
  const char *VAR_6 = FUNC_1(VAR_1, VAR_5->pool);

  if (!VAR_5->deletes)
    VAR_5->deletes = FUNC_0(VAR_5->pool);

  FUNC_2(VAR_5->deletes, VAR_6, "");
  return VAR_0;
}
