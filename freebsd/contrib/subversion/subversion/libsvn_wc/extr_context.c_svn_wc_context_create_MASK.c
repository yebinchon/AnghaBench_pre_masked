
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int close_db_on_destroy; int * state_pool; int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int ,int ,int *,int *) ;

svn_error_t *
FUNC_4(svn_wc_context_t **VAR_5,
                      const svn_config_t *VAR_6,
                      apr_pool_t *VAR_7,
                      apr_pool_t *VAR_8)
{
  svn_wc_context_t *VAR_9 = FUNC_1(VAR_7, sizeof(*VAR_9));




  VAR_9->state_pool = VAR_7;
  FUNC_0(FUNC_3(&VAR_9->db, (svn_config_t *)VAR_6,
                          VAR_0, VAR_2, VAR_9->state_pool, VAR_8));
  VAR_9->close_db_on_destroy = VAR_2;

  FUNC_2(VAR_7, VAR_9, VAR_4,
                            VAR_3);

  *VAR_5 = VAR_9;

  return VAR_1;
}
