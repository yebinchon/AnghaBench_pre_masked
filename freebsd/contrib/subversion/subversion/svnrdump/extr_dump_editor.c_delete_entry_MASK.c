
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct dir_baton {int pool; int deleted_entries; int eb; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,struct dir_baton*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
             svn_revnum_t VAR_2,
             void *VAR_3,
             apr_pool_t *VAR_4)
{
  struct dir_baton *VAR_5 = VAR_3;

  FUNC_0(FUNC_2(VAR_5->eb, VAR_4));





  FUNC_3(VAR_5->deleted_entries, FUNC_1(VAR_5->pool, VAR_1), VAR_5);

  return VAR_0;
}
