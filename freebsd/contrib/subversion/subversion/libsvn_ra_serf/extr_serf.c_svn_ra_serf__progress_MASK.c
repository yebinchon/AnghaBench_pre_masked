
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pool; int progress_baton; int (* progress_func ) (scalar_t__,int,int ,int ) ;} ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef scalar_t__ apr_off_t ;


 int FUNC_0 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, apr_off_t VAR_1,
                      apr_off_t VAR_2)
{
  const svn_ra_serf__session_t *VAR_3 = VAR_0;
  if (VAR_3->progress_func)
    {
      VAR_3->progress_func(VAR_1 + VAR_2, -1,
                               VAR_3->progress_baton,
                               VAR_3->pool);
    }
}
