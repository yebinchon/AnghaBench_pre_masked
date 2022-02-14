
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout_baton; int (* timeout_fn ) (int ,int ) ;} ;
typedef TYPE_1__ svn_ra_svn__stream_t ;
typedef int apr_interval_time_t ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(svn_ra_svn__stream_t *VAR_0,
                           apr_interval_time_t VAR_1)
{
  VAR_0->timeout_fn(VAR_0->timeout_baton, VAR_1);
}
