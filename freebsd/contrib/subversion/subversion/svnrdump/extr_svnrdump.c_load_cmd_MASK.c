
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int skip_revprops; int quiet; int dumpfile; int session; int ctx; int url; } ;
typedef TYPE_1__ opt_baton_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_2 (int **,int ,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(apr_getopt_t *VAR_0,
         void *VAR_1,
         apr_pool_t *VAR_2)
{
  opt_baton_t *VAR_3 = VAR_1;
  svn_ra_session_t *VAR_4;

  FUNC_0(FUNC_2(&VAR_4, VAR_3->url, ((void*)0),
                                      VAR_3->ctx, VAR_2, VAR_2));
  return FUNC_1(VAR_3->session, VAR_4,
                        VAR_3->dumpfile, VAR_3->quiet,
                        VAR_3->skip_revprops, VAR_2);
}
