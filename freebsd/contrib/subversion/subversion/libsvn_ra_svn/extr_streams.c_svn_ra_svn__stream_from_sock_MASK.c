
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_ra_svn__stream_t ;
struct TYPE_5__ {int pool; int * sock; } ;
typedef TYPE_1__ sock_baton_t ;
typedef int apr_socket_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,TYPE_1__*,int ,int *) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;

svn_ra_svn__stream_t *
FUNC_7(apr_socket_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  sock_baton_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  svn_stream_t *VAR_7;

  VAR_6->sock = VAR_4;
  VAR_6->pool = FUNC_1(VAR_5);

  VAR_7 = FUNC_3(VAR_6, VAR_5);

  FUNC_5(VAR_7, VAR_1, ((void*)0) );
  FUNC_6(VAR_7, VAR_3);
  FUNC_4(VAR_7, VAR_0);

  return FUNC_2(VAR_7, VAR_7,
                                   VAR_6, VAR_2, VAR_5);
}
