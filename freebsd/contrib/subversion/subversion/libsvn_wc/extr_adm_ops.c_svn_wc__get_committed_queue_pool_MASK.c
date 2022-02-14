
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svn_wc_committed_queue_t {int * pool; } ;
typedef int apr_pool_t ;



apr_pool_t *
FUNC_0(const struct svn_wc_committed_queue_t *VAR_0)
{
  return VAR_0->pool;
}
