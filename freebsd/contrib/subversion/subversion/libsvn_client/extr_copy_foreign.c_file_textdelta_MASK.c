
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct file_baton_t {int pool; int local_abspath; int digest; scalar_t__ writing; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int ,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int ,int *,void**) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_2,
               const char *VAR_3,
               apr_pool_t *VAR_4,
               svn_txdelta_window_handler_t *VAR_5,
               void **VAR_6)
{
  struct file_baton_t *VAR_7 = VAR_2;
  svn_stream_t *VAR_8;

  FUNC_1(! VAR_7->writing);

  FUNC_0(FUNC_3(&VAR_8, VAR_7->local_abspath, VAR_7->pool,
                                   VAR_7->pool));

  VAR_7->writing = VAR_1;
  FUNC_4(FUNC_2(VAR_7->pool) ,
                    VAR_8,
                    VAR_7->digest,
                    VAR_7->local_abspath,
                    VAR_7->pool,

                    VAR_5, VAR_6);

  return VAR_0;
}
