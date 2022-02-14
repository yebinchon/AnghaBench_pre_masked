
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; } ;
typedef TYPE_1__ svn_memcache_t ;
typedef int svn_error_t ;
typedef int svn_config_t ;
struct ams_baton {int * err; int * memcache_pool; int memcache; } ;
typedef int apr_uint16_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int ,struct ams_baton*,int *) ;
 int * FUNC_4 (int ,int *,int *) ;
 int * FUNC_5 (scalar_t__,int ) ;

svn_error_t *
FUNC_6(svn_memcache_t **VAR_8,
                                    svn_config_t *VAR_9,
                                    apr_pool_t *VAR_10,
                                    apr_pool_t *VAR_11)
{
  int VAR_12 =
    FUNC_3(VAR_9,
                          VAR_2,
                          VAR_7, ((void*)0), VAR_11);

  if (VAR_12 == 0)
    {
      *VAR_8 = ((void*)0);
      return VAR_5;
    }

  if (VAR_12 > VAR_0)
    return FUNC_4(VAR_4, ((void*)0), ((void*)0));
  {
    return FUNC_4(VAR_3, ((void*)0), ((void*)0));
  }

}
