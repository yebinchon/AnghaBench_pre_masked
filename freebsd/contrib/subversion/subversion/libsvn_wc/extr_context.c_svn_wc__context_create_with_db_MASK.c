
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int close_db_on_destroy; int * db; int * state_pool; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int VAR_3 ;

svn_error_t *
FUNC_2(svn_wc_context_t **VAR_4,
                               svn_config_t *VAR_5,
                               svn_wc__db_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_wc_context_t *VAR_8 = FUNC_0(VAR_7, sizeof(*VAR_8));




  VAR_8->state_pool = VAR_7;
  VAR_8->db = VAR_6;
  VAR_8->close_db_on_destroy = VAR_0;

  FUNC_1(VAR_7, VAR_8, VAR_3,
                            VAR_2);

  *VAR_4 = VAR_8;

  return VAR_1;
}
