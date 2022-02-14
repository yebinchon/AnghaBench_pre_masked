
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct file_baton {int pool; int base_checksum; int dump_text; struct dump_edit_baton* eb; } ;
struct dump_edit_baton {int delta_file; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char const*) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,void**,int *,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_3, const char *VAR_4,
                apr_pool_t *VAR_5,
                svn_txdelta_window_handler_t *VAR_6,
                void **VAR_7)
{
  struct file_baton *VAR_8 = VAR_3;
  struct dump_edit_baton *VAR_9 = VAR_8->eb;
  svn_stream_t *VAR_10;


  VAR_10 = FUNC_1(VAR_9->delta_file, VAR_2, VAR_5);


  FUNC_2(VAR_6, VAR_7,
                          VAR_10, 0,
                          VAR_0, VAR_5);


  VAR_8->dump_text = VAR_2;
  VAR_8->base_checksum = FUNC_0(VAR_8->pool, VAR_4);

  return VAR_1;
}
