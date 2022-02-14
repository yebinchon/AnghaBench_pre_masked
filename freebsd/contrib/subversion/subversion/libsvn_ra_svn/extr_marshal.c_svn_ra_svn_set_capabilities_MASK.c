
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int pool; } ;
typedef TYPE_1__ apr_array_header_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (TYPE_1__ const*,int ) ;

svn_error_t *
FUNC_3(svn_ra_svn_conn_t *VAR_0,
                            const apr_array_header_t *VAR_1)
{
  svn_ra_svn__list_t *VAR_2
    = FUNC_2(VAR_1, VAR_1->pool);
  return FUNC_0(FUNC_1(VAR_0, VAR_2));
}
