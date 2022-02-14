
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int number; } ;
struct TYPE_9__ {TYPE_3__ value; } ;
struct TYPE_6__ {int number; } ;
struct TYPE_7__ {TYPE_1__ value; } ;
struct TYPE_10__ {int dumpfile; int incremental; int quiet; TYPE_4__ end_revision; TYPE_2__ start_revision; int session; int ctx; int url; } ;
typedef TYPE_5__ opt_baton_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int ,int ,int ,int ,int ,int *) ;
 int FUNC_2 (int **,int ,int *,int ,int *,int *) ;
 int FUNC_3 (int *,char const**,int *) ;
 int FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_getopt_t *VAR_0,
         void *VAR_1,
         apr_pool_t *VAR_2)
{
  opt_baton_t *VAR_3 = VAR_1;
  svn_ra_session_t *VAR_4;
  const char *VAR_5;

  FUNC_0(FUNC_2(&VAR_4,
                                      VAR_3->url, ((void*)0),
                                      VAR_3->ctx, VAR_2, VAR_2));
  FUNC_0(FUNC_3(VAR_4, &VAR_5, VAR_2));
  FUNC_0(FUNC_4(VAR_4, VAR_5, VAR_2));

  return FUNC_1(VAR_3->session, VAR_4,
                          VAR_3->start_revision.value.number,
                          VAR_3->end_revision.value.number,
                          VAR_3->quiet, VAR_3->incremental,
                          VAR_3->dumpfile, VAR_2);
}
