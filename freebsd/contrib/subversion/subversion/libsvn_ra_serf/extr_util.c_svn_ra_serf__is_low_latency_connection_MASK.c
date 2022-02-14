
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ conn_latency; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_boolean_t ;


 scalar_t__ FUNC_0 (int) ;

svn_boolean_t
FUNC_1(svn_ra_serf__session_t *VAR_0)
{
  return VAR_0->conn_latency >= 0 &&
         VAR_0->conn_latency < FUNC_0(5);
}
