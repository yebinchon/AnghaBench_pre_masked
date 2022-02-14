
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svnlook_ctxt_t ;
typedef int svn_error_t ;
struct svnlook_opt_state {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (struct svnlook_opt_state*,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int **,struct svnlook_opt_state*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_getopt_t *VAR_2, void *VAR_3, apr_pool_t *VAR_4)
{
  struct svnlook_opt_state *VAR_5 = VAR_3;
  svnlook_ctxt_t *VAR_6;

  FUNC_0(FUNC_1(VAR_5, 0));

  FUNC_0(FUNC_3(&VAR_6, VAR_5, VAR_4));
  FUNC_0(FUNC_2(VAR_6, VAR_0, VAR_4));
  return VAR_1;
}
