
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int full; int * pool; } ;
typedef TYPE_1__ svn_authz_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

svn_error_t *
FUNC_5(svn_authz_t **VAR_1, svn_stream_t *VAR_2,
                      svn_stream_t *VAR_3, apr_pool_t *VAR_4)
{
  apr_pool_t *VAR_5 = FUNC_3(VAR_4);
  svn_authz_t *VAR_6 = FUNC_1(VAR_4, sizeof(*VAR_6));
  VAR_6->pool = VAR_4;


  FUNC_0(FUNC_2(&VAR_6->full, VAR_2, VAR_3, VAR_4,
                           VAR_5));

  FUNC_4(VAR_5);

  *VAR_1 = VAR_6;
  return VAR_0;
}
