
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_commit_info_t ;
struct capture_baton_t {int original_baton; int (* original_callback ) (int const*,int ,int *) ;int pool; int * info; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int const*,int ,int *) ;
 int FUNC_2 (int const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_commit_info_t *VAR_1,
                    void *VAR_2,
                    apr_pool_t *VAR_3)
{
  struct capture_baton_t *VAR_4 = VAR_2;

  *(VAR_4->info) = FUNC_2(VAR_1, VAR_4->pool);

  if (VAR_4->original_callback)
    FUNC_0((VAR_4->original_callback)(VAR_1, VAR_4->original_baton, VAR_3));

  return VAR_0;
}
