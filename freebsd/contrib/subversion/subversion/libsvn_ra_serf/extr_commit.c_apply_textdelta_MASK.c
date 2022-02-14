
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int pool; int base_checksum; int stream; TYPE_1__* commit_ctx; int svndiff; } ;
typedef TYPE_2__ file_context_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int session; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,void**,int ,int,int,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4,
                svn_txdelta_window_handler_t *VAR_5,
                void **VAR_6)
{
  file_context_t *VAR_7 = VAR_2;
  int VAR_8;
  int VAR_9;
  VAR_7->svndiff =
    FUNC_2(VAR_1,
                                     VAR_7->pool);
  VAR_7->stream = FUNC_3(VAR_7->svndiff);

  FUNC_1(&VAR_8, &VAR_9,
                         VAR_7->commit_ctx->session);

  FUNC_5(VAR_5, VAR_6,
                          FUNC_4(VAR_7->stream, VAR_4),
                          VAR_8, VAR_9, VAR_4);

  if (VAR_3)
    VAR_7->base_checksum = FUNC_0(VAR_7->pool, VAR_3);

  return VAR_0;
}
