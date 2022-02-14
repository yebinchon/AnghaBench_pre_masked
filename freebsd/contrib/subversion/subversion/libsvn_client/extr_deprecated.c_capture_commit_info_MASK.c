
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_commit_info_t ;
struct capture_baton_t {int pool; int * info; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const svn_commit_info_t *VAR_1,
                    void *VAR_2,
                    apr_pool_t *VAR_3)
{
  struct capture_baton_t *VAR_4 = VAR_2;

  *(VAR_4->info) = FUNC_0(VAR_1, VAR_4->pool);

  return VAR_0;
}
