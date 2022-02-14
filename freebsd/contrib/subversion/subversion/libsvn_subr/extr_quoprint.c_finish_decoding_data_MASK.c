
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct decode_baton {int pool; int output; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_0)
{
  struct decode_baton *VAR_1 = VAR_0;
  svn_error_t *VAR_2;


  VAR_2 = FUNC_1(VAR_1->output);
  FUNC_0(VAR_1->pool);
  return VAR_2;
}
