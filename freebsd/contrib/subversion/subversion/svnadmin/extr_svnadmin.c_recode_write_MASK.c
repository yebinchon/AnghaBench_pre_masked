
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct recode_write_baton {int pool; int out; } ;
typedef int apr_size_t ;


 int * FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *FUNC_2(void *VAR_0,
                                 const char *VAR_1,
                                 apr_size_t *VAR_2)
{
  struct recode_write_baton *VAR_3 = VAR_0;
  FUNC_1(VAR_3->pool);
  return FUNC_0(VAR_1, VAR_3->out, VAR_3->pool);
}
