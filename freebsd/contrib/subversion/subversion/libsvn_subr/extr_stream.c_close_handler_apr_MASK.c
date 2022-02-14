
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct baton_apr {int pool; int file; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_0)
{
  struct baton_apr *VAR_1 = VAR_0;

  return FUNC_0(FUNC_1(VAR_1->file, VAR_1->pool));
}
