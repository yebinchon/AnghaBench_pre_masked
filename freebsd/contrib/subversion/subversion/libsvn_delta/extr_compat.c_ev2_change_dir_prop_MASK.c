
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct ev2_dir_baton {int base_revision; int path; int eb; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,char const*,int const*,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_2,
                    const char *VAR_3,
                    const svn_string_t *VAR_4,
                    apr_pool_t *VAR_5)
{
  struct ev2_dir_baton *VAR_6 = VAR_2;

  FUNC_0(FUNC_1(VAR_6->eb, VAR_6->path, VAR_1, VAR_6->base_revision,
                         VAR_3, VAR_4, VAR_5));

  return VAR_0;
}
