
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct baton_apr {int pool; int file; } ;
typedef int apr_size_t ;
typedef int apr_off_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1, apr_size_t VAR_2)
{
  struct baton_apr *VAR_3 = VAR_1;
  apr_off_t VAR_4 = VAR_2;

  return FUNC_0(
            FUNC_1(VAR_3->file, VAR_0, &VAR_4, VAR_3->pool));
}
