
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ block_handler; } ;
typedef TYPE_1__ svn_ra_svn_conn_t ;
typedef int apr_interval_time_t ;



__attribute__((used)) static apr_interval_time_t
FUNC_0(svn_ra_svn_conn_t *VAR_0)
{
  return VAR_0->block_handler ? 0 : -1;
}
