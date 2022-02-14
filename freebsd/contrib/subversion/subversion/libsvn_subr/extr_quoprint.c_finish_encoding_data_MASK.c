
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct encode_baton {scalar_t__ linelen; int pool; int output; } ;
typedef int apr_size_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1)
{
  struct encode_baton *VAR_2 = VAR_1;
  svn_error_t *VAR_3 = VAR_0;
  apr_size_t VAR_4;


  if (VAR_2->linelen > 0)
    {
      VAR_4 = 2;
      VAR_3 = FUNC_2(VAR_2->output, "=\n", &VAR_4);
    }


  if (VAR_3 == VAR_0)
    VAR_3 = FUNC_1(VAR_2->output);
  FUNC_0(VAR_2->pool);
  return VAR_3;
}
