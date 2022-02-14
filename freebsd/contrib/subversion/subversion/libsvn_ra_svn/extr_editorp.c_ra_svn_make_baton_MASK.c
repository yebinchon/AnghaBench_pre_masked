
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_ra_svn_conn_t ;
typedef int ra_svn_edit_baton_t ;
struct TYPE_4__ {int * token; int * eb; int * pool; int * conn; } ;
typedef TYPE_1__ ra_svn_baton_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

__attribute__((used)) static ra_svn_baton_t *FUNC_1(svn_ra_svn_conn_t *VAR_0,
                                         apr_pool_t *VAR_1,
                                         ra_svn_edit_baton_t *VAR_2,
                                         svn_string_t *VAR_3)
{
  ra_svn_baton_t *VAR_4;

  VAR_4 = FUNC_0(VAR_1, sizeof(*VAR_4));
  VAR_4->conn = VAR_0;
  VAR_4->pool = VAR_1;
  VAR_4->eb = VAR_2;
  VAR_4->token = VAR_3;
  return VAR_4;
}
