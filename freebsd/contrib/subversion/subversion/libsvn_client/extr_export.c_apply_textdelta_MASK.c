
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct handler_baton {int apply_baton; int apply_handler; int tmppath; int * pool; } ;
struct file_baton {int text_digest; int tmp_stream; int tmppath; int pool; int path; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct handler_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int *,int *,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_3,
                const char *VAR_4,
                apr_pool_t *VAR_5,
                svn_txdelta_window_handler_t *VAR_6,
                void **VAR_7)
{
  struct file_baton *VAR_8 = VAR_3;
  struct handler_baton *VAR_9 = FUNC_1(VAR_5, sizeof(*VAR_9));



  FUNC_0(FUNC_5(&VAR_8->tmp_stream, &VAR_8->tmppath,
                                 FUNC_2(VAR_8->path, VAR_5),
                                 VAR_1, VAR_8->pool, VAR_8->pool));

  VAR_9->pool = VAR_5;
  VAR_9->tmppath = VAR_8->tmppath;





  FUNC_6(FUNC_4(VAR_5),
                    FUNC_3(VAR_8->tmp_stream, VAR_5),
                    VAR_8->text_digest, ((void*)0), VAR_5,
                    &VAR_9->apply_handler, &VAR_9->apply_baton);

  *VAR_7 = VAR_9;
  *VAR_6 = VAR_2;
  return VAR_0;
}
