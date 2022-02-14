
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct baton_tee {int out2; int out1; } ;
typedef int apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1, const char *VAR_2, apr_size_t *VAR_3)
{
  struct baton_tee *VAR_4 = VAR_1;

  FUNC_0(FUNC_1(VAR_4->out1, VAR_2, VAR_3));
  FUNC_0(FUNC_1(VAR_4->out2, VAR_2, VAR_3));

  return VAR_0;
}
