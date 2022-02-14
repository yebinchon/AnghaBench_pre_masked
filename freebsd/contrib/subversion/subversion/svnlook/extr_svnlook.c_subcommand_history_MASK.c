
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svnlook_ctxt_t ;
typedef int svn_error_t ;
struct svnlook_opt_state {char* arg1; int * arg2; } ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,int *) ;
 int FUNC_3 (int **,struct svnlook_opt_state*,int *) ;
 int * FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_getopt_t *VAR_2, void *VAR_3, apr_pool_t *VAR_4)
{
  struct svnlook_opt_state *VAR_5 = VAR_3;
  svnlook_ctxt_t *VAR_6;
  const char *VAR_7 = (VAR_5->arg1 ? VAR_5->arg1 : "/");

  if (VAR_5->arg2 != ((void*)0))
    return FUNC_4(VAR_0, ((void*)0),
                            FUNC_1("Too many arguments given"));

  FUNC_0(FUNC_3(&VAR_6, VAR_5, VAR_4));
  FUNC_0(FUNC_2(VAR_6, VAR_7, VAR_4));
  return VAR_1;
}
