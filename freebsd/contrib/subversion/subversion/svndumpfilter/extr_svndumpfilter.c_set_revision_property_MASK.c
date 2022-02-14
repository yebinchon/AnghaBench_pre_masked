
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_error_t ;
struct revision_baton_t {int props; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1,
                      const char *VAR_2,
                      const svn_string_t *VAR_3)
{
  struct revision_baton_t *VAR_4 = VAR_1;
  apr_pool_t *VAR_5 = FUNC_0(VAR_4->props);

  FUNC_2(VAR_4->props,
                FUNC_1(VAR_5, VAR_2),
                FUNC_3(VAR_3, VAR_5));
  return VAR_0;
}
