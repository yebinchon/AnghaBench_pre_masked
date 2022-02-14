
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct filter_mergeinfo_paths_baton {int paths; } ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int ,void const*,int ) ;
 int FUNC_1 (int ,void const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1, const void *VAR_2, apr_ssize_t VAR_3,
                       void *VAR_4, apr_pool_t *VAR_5)
{
  struct filter_mergeinfo_paths_baton *const VAR_6 = VAR_1;

  if (FUNC_0(VAR_6->paths, VAR_2, VAR_3))
    FUNC_1(VAR_6->paths, VAR_2, VAR_3, ((void*)0));

  return VAR_0;
}
