
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct diff_baton {int rev; int chain; } ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_1,
                     apr_off_t VAR_2,
                     apr_off_t VAR_3,
                     apr_off_t VAR_4,
                     apr_off_t VAR_5,
                     apr_off_t VAR_6,
                     apr_off_t VAR_7)
{
  struct diff_baton *VAR_8 = VAR_1;

  if (VAR_3)
    FUNC_0(FUNC_1(VAR_8->chain, VAR_4, VAR_3));

  if (VAR_5)
    FUNC_0(FUNC_2(VAR_8->chain, VAR_8->rev, VAR_4,
                               VAR_5));

  return VAR_0;
}
