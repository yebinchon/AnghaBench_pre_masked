
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_txdelta_stream_t ;
typedef int svn_error_t ;
struct TYPE_2__ {scalar_t__ need_reset; int local_stream; int base_stream; } ;
typedef TYPE_1__ open_txdelta_stream_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_txdelta_stream_t **VAR_3,
                    void *VAR_4,
                    apr_pool_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  open_txdelta_stream_baton_t *VAR_7 = VAR_4;

  if (VAR_7->need_reset)
    {


      FUNC_0(FUNC_1(VAR_7->base_stream));
      FUNC_0(FUNC_1(VAR_7->local_stream));
    }

  FUNC_2(VAR_3, VAR_7->base_stream, VAR_7->local_stream,
               VAR_0, VAR_5);
  VAR_7->need_reset = VAR_2;
  return VAR_1;
}
