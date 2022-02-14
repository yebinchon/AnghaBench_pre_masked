
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wc_queues; int * pool; } ;
typedef TYPE_1__ svn_wc_committed_queue_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

svn_wc_committed_queue_t *
FUNC_2(apr_pool_t *VAR_0)
{
  svn_wc_committed_queue_t *VAR_1;

  VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_1));
  VAR_1->pool = VAR_0;
  VAR_1->wc_queues = FUNC_0(VAR_0);

  return VAR_1;
}
