
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs; } ;
typedef TYPE_1__ svnlook_ctxt_t ;
typedef int svn_error_t ;
struct svnlook_opt_state {int dummy; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (struct svnlook_opt_state*,int ) ;
 int FUNC_2 (TYPE_1__**,struct svnlook_opt_state*,int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int ,char const**,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_getopt_t *VAR_1, void *VAR_2, apr_pool_t *VAR_3)
{
  struct svnlook_opt_state *VAR_4 = VAR_2;
  svnlook_ctxt_t *VAR_5;
  const char *VAR_6;

  FUNC_0(FUNC_1(VAR_4, 0));

  FUNC_0(FUNC_2(&VAR_5, VAR_4, VAR_3));
  FUNC_0(FUNC_4(VAR_5->fs, &VAR_6, VAR_3));
  FUNC_0(FUNC_3(VAR_3, "%s\n", VAR_6));
  return VAR_0;
}
