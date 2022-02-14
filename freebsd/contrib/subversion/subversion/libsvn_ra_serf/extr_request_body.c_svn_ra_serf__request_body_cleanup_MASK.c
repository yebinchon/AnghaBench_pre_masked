
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ file; } ;
typedef TYPE_1__ svn_ra_serf__request_body_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__,int *) ;

svn_error_t *
FUNC_2(svn_ra_serf__request_body_t *VAR_1,
                                  apr_pool_t *VAR_2)
{
  if (VAR_1->file)
    FUNC_0(FUNC_1(VAR_1->file, VAR_2));

  return VAR_0;
}
