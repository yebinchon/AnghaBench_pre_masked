
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_txdelta_window_handler_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
struct svn_delta_editor_t {int (* apply_textdelta ) (int ,int ,int *,int *,void**) ;} ;
struct node_baton {int base_checksum; int file_baton; TYPE_2__* rb; } ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * pool; TYPE_1__* pb; } ;
struct TYPE_3__ {struct svn_delta_editor_t* commit_editor; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,void*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_stream_t **VAR_1,
             void *VAR_2)
{
  struct node_baton *VAR_3 = VAR_2;
  const struct svn_delta_editor_t *VAR_4 = VAR_3->rb->pb->commit_editor;
  svn_txdelta_window_handler_t VAR_5;
  void *VAR_6;
  apr_pool_t *VAR_7 = VAR_3->rb->pool;

  FUNC_0(VAR_4->apply_textdelta(VAR_3->file_baton, VAR_3->base_checksum,
                                         VAR_7, &VAR_5, &VAR_6));
  *VAR_1 = FUNC_3(VAR_5, VAR_6,
                                    FUNC_2(VAR_7), VAR_7);
  return VAR_0;
}
