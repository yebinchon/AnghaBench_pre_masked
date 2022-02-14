
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
typedef int svn_error_t ;
struct TYPE_2__ {scalar_t__ need_reset; int stream; } ;
typedef TYPE_1__ open_txdelta_stream_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_txdelta_stream_t **VAR_3,
                    void *VAR_4,
                    apr_pool_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  open_txdelta_stream_baton_t *VAR_7 = VAR_4;

  if (VAR_7->need_reset)
    {



      FUNC_0(FUNC_2(VAR_7->stream));
    }


  FUNC_3(VAR_3, FUNC_1(VAR_5),
               VAR_7->stream, VAR_0, VAR_5);
  VAR_7->need_reset = VAR_2;
  return VAR_1;
}
