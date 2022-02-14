
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_status3_t ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
struct TYPE_6__ {int s; } ;
typedef TYPE_2__ svn_wc__internal_status_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__**,int ,char const*,int ,int *,int *) ;

svn_error_t *
FUNC_2(svn_wc_status3_t **VAR_2,
               svn_wc_context_t *VAR_3,
               const char *VAR_4,
               apr_pool_t *VAR_5,
               apr_pool_t *VAR_6)
{
  svn_wc__internal_status_t *VAR_7;
  FUNC_0(FUNC_1(&VAR_7, VAR_3->db, VAR_4,
                          VAR_1 ,
                          VAR_5, VAR_6));
  *VAR_2 = &VAR_7->s;
  return VAR_0;
}
