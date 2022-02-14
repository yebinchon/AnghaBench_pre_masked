
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int to_url; int config; int sync_callbacks; } ;
typedef TYPE_1__ subcommand_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int **,int *,int ,int *,int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_ra_session_t **VAR_1,
                    subcommand_baton_t *VAR_2,
                    apr_pool_t *VAR_3)
{
  svn_ra_session_t *VAR_4;
  FUNC_0(FUNC_2(&VAR_4, ((void*)0), VAR_2->to_url, ((void*)0),
                       &(VAR_2->sync_callbacks), VAR_2, VAR_2->config, VAR_3));
  FUNC_0(FUNC_1(VAR_4, VAR_2->to_url, VAR_3));

  *VAR_1 = VAR_4;
  return VAR_0;
}
