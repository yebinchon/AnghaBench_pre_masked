
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct file_baton {int text_changed; } ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_3,
                const char *VAR_4,
                apr_pool_t *VAR_5,
                svn_txdelta_window_handler_t *VAR_6,
                void **VAR_7)
{
  struct file_baton *VAR_8 = VAR_3;


  VAR_8->text_changed = VAR_1;


  *VAR_7 = ((void*)0);
  *VAR_6 = VAR_2;

  return VAR_0;
}
