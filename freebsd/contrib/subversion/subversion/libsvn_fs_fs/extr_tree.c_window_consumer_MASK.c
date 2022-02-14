
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pool; int result_checksum; int node; int interpreter_baton; int (* interpreter ) (int *,int ) ;} ;
typedef TYPE_1__ txdelta_baton_t ;
typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_txdelta_window_t *VAR_1, void *VAR_2)
{
  txdelta_baton_t *VAR_3 = (txdelta_baton_t *) VAR_2;




  FUNC_0(VAR_3->interpreter(VAR_1, VAR_3->interpreter_baton));



  if (! VAR_1)
    FUNC_0(FUNC_2(VAR_3->node, VAR_3->result_checksum,
                                          VAR_3->pool));

  return VAR_0;
}
