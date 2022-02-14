
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_5__ {TYPE_3__* conn; int token; int eb; } ;
typedef TYPE_1__ ra_svn_baton_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int compression_level; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int *,int ,char const*) ;
 int * FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,void**,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_8(void *VAR_3,
                                           const char *VAR_4,
                                           apr_pool_t *VAR_5,
                                           svn_txdelta_window_handler_t *VAR_6,
                                           void **VAR_7)
{
  ra_svn_baton_t *VAR_8 = VAR_3;
  svn_stream_t *VAR_9;


  FUNC_0(FUNC_1(VAR_8->eb, VAR_5));
  FUNC_0(FUNC_3(VAR_8->conn, VAR_5, VAR_8->token,
                                                VAR_4));




  VAR_9 = FUNC_4(VAR_8, VAR_5);
  FUNC_6(VAR_9, VAR_2);
  FUNC_5(VAR_9, VAR_1);

  FUNC_7(VAR_6, VAR_7, VAR_9,
                          FUNC_2(VAR_8->conn),
                          VAR_8->conn->compression_level, VAR_5);
  return VAR_0;
}
