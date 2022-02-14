
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pool; TYPE_1__* root; int target_stream; TYPE_3__* target_string; int interpreter_baton; int (* interpreter ) (int *,int ) ;} ;
typedef TYPE_2__ txdelta_baton_t ;
typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;
struct TYPE_7__ {scalar_t__ len; int data; } ;
struct TYPE_5__ {int fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_txdelta_window_t *VAR_4, void *VAR_5)
{
  txdelta_baton_t *VAR_6 = (txdelta_baton_t *) VAR_5;




  FUNC_0(VAR_6->interpreter(VAR_4, VAR_6->interpreter_baton));
  if ((! VAR_4) || (VAR_6->target_string->len > VAR_2))
    {
      apr_size_t VAR_7 = VAR_6->target_string->len;
      FUNC_0(FUNC_4(VAR_6->target_stream,
                               VAR_6->target_string->data,
                               &VAR_7));
      FUNC_5(VAR_6->target_string);
    }


  if (! VAR_4)
    {



      FUNC_0(FUNC_3(VAR_6->target_stream));


      FUNC_0(FUNC_2(VAR_6->root->fs,
                                     VAR_3, VAR_6,
                                     VAR_0, VAR_6->pool));
    }

  return VAR_1;
}
