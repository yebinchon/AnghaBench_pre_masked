
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_txdelta_window_handler_t ;
typedef int svn_txdelta_stream_t ;
typedef int (* svn_txdelta_stream_open_func_t ) (int **,void*,int *,int *) ;
typedef int svn_error_t ;
struct TYPE_3__ {int (* apply_textdelta ) (void*,char const*,int *,scalar_t__*,void**) ;} ;
typedef TYPE_1__ svn_delta_editor_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (void*,char const*,int *,scalar_t__*,void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const svn_delta_editor_t *VAR_2,
                       void *VAR_3,
                       const char *VAR_4,
                       svn_txdelta_stream_open_func_t VAR_5,
                       void *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_txdelta_window_handler_t VAR_8;
  void *VAR_9;

  FUNC_0(VAR_2->apply_textdelta(VAR_3, VAR_4,
                                  VAR_7, &VAR_8,
                                  &VAR_9));
  if (VAR_8 != VAR_1)
    {
      svn_txdelta_stream_t *VAR_10;

      FUNC_0(VAR_5(&VAR_10, VAR_6, VAR_7,
                        VAR_7));
      FUNC_0(FUNC_2(VAR_10, VAR_8,
                                        VAR_9, VAR_7));
    }

  return VAR_0;
}
