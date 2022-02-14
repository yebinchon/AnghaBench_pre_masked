
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct install_baton_t* baton; } ;
typedef TYPE_2__ svn_stream_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int file; } ;
struct install_baton_t {TYPE_1__ baton_apr; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_int32_t ;
typedef int apr_finfo_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (scalar_t__,int *) ;

svn_error_t *
FUNC_2(apr_finfo_t *VAR_1,
                             svn_stream_t *VAR_2,
                             apr_int32_t VAR_3,
                             apr_pool_t *VAR_4)
{
  struct install_baton_t *VAR_5 = VAR_2->baton;
  apr_status_t VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_5->baton_apr.file);

  if (VAR_6)
    return FUNC_1(VAR_6, ((void*)0));

  return VAR_0;
}
