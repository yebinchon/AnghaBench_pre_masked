
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svnlook_ctxt_t ;
typedef int svn_error_t ;
struct svnlook_opt_state {int show_inherited_props; int xml; int verbose; int * arg1; scalar_t__ revprop; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct svnlook_opt_state*,int) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int FUNC_3 (int **,struct svnlook_opt_state*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(apr_getopt_t *VAR_1, void *VAR_2, apr_pool_t *VAR_3)
{
  struct svnlook_opt_state *VAR_4 = VAR_2;
  svnlook_ctxt_t *VAR_5;

  FUNC_0(FUNC_1(VAR_4, VAR_4->revprop ? 0 : 1));

  FUNC_0(FUNC_3(&VAR_5, VAR_4, VAR_3));
  FUNC_0(FUNC_2(VAR_5, VAR_4->revprop ? ((void*)0) : VAR_4->arg1,
                   VAR_4->verbose, VAR_4->xml,
                   VAR_4->show_inherited_props, VAR_3));
  return VAR_0;
}
