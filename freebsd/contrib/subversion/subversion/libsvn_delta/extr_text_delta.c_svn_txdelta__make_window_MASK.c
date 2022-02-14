
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* new_data; int ops; int src_ops; int num_ops; scalar_t__ tview_len; scalar_t__ sview_len; scalar_t__ sview_offset; } ;
typedef TYPE_2__ svn_txdelta_window_t ;
struct TYPE_9__ {TYPE_1__* new_data; int ops; int src_ops; int num_ops; } ;
typedef TYPE_3__ svn_txdelta__ops_baton_t ;
struct TYPE_10__ {int len; int data; } ;
typedef TYPE_4__ svn_string_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int len; int data; } ;


 void* FUNC_0 (int *,int) ;

svn_txdelta_window_t *
FUNC_1(const svn_txdelta__ops_baton_t *VAR_0,
                         apr_pool_t *VAR_1)
{
  svn_txdelta_window_t *VAR_2;
  svn_string_t *VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3));

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  VAR_2->sview_offset = 0;
  VAR_2->sview_len = 0;
  VAR_2->tview_len = 0;

  VAR_2->num_ops = VAR_0->num_ops;
  VAR_2->src_ops = VAR_0->src_ops;
  VAR_2->ops = VAR_0->ops;




  VAR_3->data = VAR_0->new_data->data;
  VAR_3->len = VAR_0->new_data->len;
  VAR_2->new_data = VAR_3;

  return VAR_2;
}
