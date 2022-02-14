
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct baton_tee {int out2; int out1; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1)
{
  struct baton_tee *VAR_2 = VAR_1;

  FUNC_0(FUNC_1(VAR_2->out1));
  FUNC_0(FUNC_1(VAR_2->out2));

  return VAR_0;
}
